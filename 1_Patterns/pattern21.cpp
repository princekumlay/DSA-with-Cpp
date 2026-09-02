#include<bits/stdc++.h>
using namespace std;

//funtion to print quadrilateral pattern
//O(n) time complexity and O(1) space complexity
void printQuadrilateralPattern(int n){
    
    //it prints the pattern in O(n) time but have minor issue the pattern for the odd numbers
    // for(int i = 0; i < n ; i++){
    //     int stars = i == 0 || i == n - 1 ? n / 2 : 1;
    //     int spaces = i == 0 || i == n - 1 ? 0 : (2 * (n / 2)) - 2;

    //     cout<<string(stars, '*')<<string(spaces, ' ')<<string(stars, '*')<<endl;
    // }


    //it prints the pattern in O(n^2) time but have no issue for odd numbers
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cout<<"Enter size: ";
    cin>>n;
    printQuadrilateralPattern(n);
    return 0;
}
