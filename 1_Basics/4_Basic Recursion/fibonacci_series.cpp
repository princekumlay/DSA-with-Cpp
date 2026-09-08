//fibonacci series using functional recursion
#include<bits/stdc++.h>
using namespace std;

class Fibonacci{
    public:
        int fibonacci(int n){
            if(n <= 1) return n;
            return fibonacci(n - 1) + fibonacci(n - 2);
        }
};

int main(){
    Fibonacci obj;
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i = 0; i < n; i++){
        cout<<obj.fibonacci(i)<<" ";
    }
    return 0;
}