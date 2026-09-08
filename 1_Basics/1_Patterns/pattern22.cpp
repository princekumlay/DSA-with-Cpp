#include<bits/stdc++.h>
using namespace std;

//funtion to print quadrilateral pattern
//O(n) time complexity and O(1) space complexity
void printQuadrilateralPattern(int n){
    for(int i = 0; i < 2 * n - 1; i++){
        for(int j = 0; j < 2 * n - 1; j++){
            int top = i,
                left = j,
                right = (2 * n - 2) - j,
                bottom = (2 * n - 2) - i;
                cout<<n - min(min(top, bottom), min(left, right))<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter size: ";
    cin>>n;
    printQuadrilateralPattern(n);
    return 0;
}
