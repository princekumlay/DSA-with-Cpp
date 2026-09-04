#include <iostream>
#include <cmath>
using namespace std;

//prints hollow diamond pattern in O(n) time complexity and O(1) space
void printHollowDiamondPattern(int n) {
    for (int i = 0; i < 2 * n; i++) {
        
        int stars = i < n ? (n - i) : (i - n + 1);
        int spaces = i < n ? 2 * i : 2 * (2 * n - i - 1);

        // Print left stars, center spaces, right stars
        cout << string(stars, '*') << string(spaces, ' ') << string(stars, '*') << "\n";
    }
}

// prints hollow diamond pattern in O(n^2) time and O(1) space
// void printHollowDiamondPattern(int n)
// {
//     // upper half
//     for (int i = 0; i < 2 * n; i++)
//     {
//         if (i < n)
//         {
//             // print star
//             for (int j = 0; j < n - i; j++)
//             {
//                 cout << "*";
//             }
//             // print space
//             for (int j = 0; j < 2 * i; j++)
//             {
//                 cout << " ";
//             }
//             // print star
//             for (int j = 0; j < n - i; j++)
//             {
//                 cout << "*";
//             }
//             cout << endl;
//         }
//         else
//         {
//             // print star
//             for (int j = 0; j < i - n + 1; j++)
//             {
//                 cout << "*";
//             }
//             // print space
//             for (int j = 0; j < 2 * (2 * n - i - 1); j++)
//             {
//                 cout << " ";
//             }
//             // print star
//             for (int j = 0; j < i - n + 1; j++)
//             {
//                 cout << "*";
//             }
//             cout << endl;
//         }
//     }
// }

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;
    printHollowDiamondPattern(n);
    return 0;
}