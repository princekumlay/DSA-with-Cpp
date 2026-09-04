#include<bits/stdc++.h>
using namespace std;

//function to print the pattern
void printPattern(int n){

    for(int i = 0; i < n; i++){
        
        //left triangle pattern
        for(int j = 0; j <= i; j++){
           cout<<(j + 1);
        }
        for(int j = n - 1; j > i; j--){
           cout<<" ";
        }

        //right triangle pattern
        for(int j = n - 1; j > i; j--){
           cout<<" ";
        }
        for(int j = i + 1; j > 0; j--){
           cout<<(j);
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the size of the pattern: ";
    cin>>n;
    cout<<endl;
    printPattern(n);
    return 0;
}