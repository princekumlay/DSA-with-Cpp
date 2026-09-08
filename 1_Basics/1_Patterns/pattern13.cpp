#include<bits/stdc++.h>
using namespace std;

//function to print the 0-1 triangle pattern
void print_0_1TrianglePattern(int n){
    
    int count = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout<<count<<' ';
            count += 1;
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the size of the pattern: ";
    cin>>n;
    cout<<endl;
    print_0_1TrianglePattern(n);
    return 0;
}