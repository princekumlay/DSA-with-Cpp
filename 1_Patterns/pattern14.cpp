#include<bits/stdc++.h>
using namespace std;

//function to print the alphabet triangle pattern
void print_AlphabetTrianglePattern(int n){
    //upper half
    for(int i = 0; i < n; i++){
        
        for(int j = 0; j <= i; j++){
            cout<<(char)('A'+j)<<' ';
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the size of the pattern: ";
    cin>>n;
    cout<<endl;
    print_AlphabetTrianglePattern(n);
    return 0;
}