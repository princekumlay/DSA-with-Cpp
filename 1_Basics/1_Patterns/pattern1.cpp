#include<bits/stdc++.h>
using namespace std;

//function to print square pattern
void printSquarePattern(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the size of the square pattern:  ";
    cin>>n;cout<<endl;
    printSquarePattern(n);
    return 0;
}