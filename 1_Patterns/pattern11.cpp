#include<bits/stdc++.h>
using namespace std;

//function to print the 0-1 triangle pattern
void print_0_1TrianglePattern(int n){
    //upper half
    for(int i = 0; i < n; i++){
        
        for(int j = 0; j <= i; j++){
           
            if(i % 2 == 0 && j % 2 == 0){
                cout<<1<<' ';
            }
            else if(i % 2 == 0 && j % 2 != 0){
                cout<<0 <<' ';
            }
            else if(i % 2 != 0 && j % 2 == 0){
                cout<<0 <<' ';
            }
            else{
                cout<<1 <<' ';
            }
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