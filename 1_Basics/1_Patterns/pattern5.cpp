#include<bits/stdc++.h>
using namespace std;
//function to print left upper triangle pattern
void printLeftTrianglePattern(int n){
    for(int i = 0; i < n; i++){
        for(int j = n; j > i; j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the size of the pattern: ";
    cin>>n;cout<<endl;
    printLeftTrianglePattern(n);
    return 0;
}