#include<bits/stdc++.h>
using namespace std;

//funtion to print quadrilateral pattern
//O(n) time complexity and O(1) space complexity
void printQuadrilateralPattern(int n){
    
    //O(n) time code
    //top row
    cout<<string(n, '*')<<endl;

    //midle rows if n > 2
    if(n > 2){
        string middlerow = "*" + string(n - 2, ' ') + "*";
        for(int i = 0; i < n - 2; i++){
            cout<<middlerow<<endl;
        }
    }

    //bottom row
    if(n > 1){
        cout<<string(n, '*')<<endl;
    }


    //it prints the pattern in O(n^2) time but have no issue for odd numbers
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < n; j++) {
    //         if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
    //             cout << "*";
    //         else
    //             cout << " ";
    //     }
    //     cout << endl;
    // }
}

int main(){
    int n;
    cout<<"Enter size: ";
    cin>>n;
    printQuadrilateralPattern(n);
    return 0;
}
