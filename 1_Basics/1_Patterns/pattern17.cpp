#include<bits/stdc++.h>
using namespace std;

//function to print the alphabet triangle pattern
void print_AlphabetTrianglePattern(int n){
    //upper half
    for(int i = 0; i < n; i++){
        
        //space print
        for(int j = 0; j <= n - i - 1; j++){
            cout<<" ";
        }   

        //alphabet print
        int k = 0;
        for(int j = 0; j < (2 * i + 1); j++){
            cout<<(char)('A'+ k);
            
            if(j < (2*i + 1) / 2){
                k++;
            } 
            else {
                k--;
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
    print_AlphabetTrianglePattern(n);
    return 0;
}