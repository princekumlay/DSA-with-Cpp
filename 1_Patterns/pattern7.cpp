#include<bits/stdc++.h>
using namespace std;

//function to print the triangle pyramid pattern
void printTrianglePattern(int n){
    for(int i = 0; i < n; i++){
        //print spaces
        for(int j = 0; j < n - i - 1; j++){
            cout<<" ";
        }
        //print asterisks
        for(int j = 0; j < 2 * i + 1; j++){
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
    printTrianglePattern(n);
    return 0;
}