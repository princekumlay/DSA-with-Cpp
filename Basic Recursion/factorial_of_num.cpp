#include<bits/stdc++.h>
using namespace std;

class Factorial{
    public:
        int factorial(int n){
            if(n == 0) return 1;
            return n * factorial(n - 1);
        }
};

int main(){
    Factorial obj;
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Factorial of "<<n<<" is: "<<obj.factorial(n);
    return 0;
}