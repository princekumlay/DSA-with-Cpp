#include<bits/stdc++.h>
using namespace std;

//function to print the left half diamond pattern
void printLeftHalfDiamondPattern(int n){
    //upper half
    for(int i = 0; i < 2*n - 1; i++){
        
        int star = i;
        if(i > n - 1) star = 2 * n - i - 2;

        for(int j = 0; j <= star; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the size of the pattern: ";
    cin>>n;
    cout<<endl;
    printLeftHalfDiamondPattern(n);
    return 0;
}