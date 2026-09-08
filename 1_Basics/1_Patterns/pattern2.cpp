#include<bits/stdc++.h>
using namespace std;
//function to print left triangle pattern
void printLeftTrianglePattern(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout<<j + 1<<" ";
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