#include<bits/stdc++.h>
using namespace std;

class Fucntional_recursion{
    public:
        int printNumbers(int n){
            if(n == 0) return 0;
            return n + printNumbers(n - 1);//fucntional call recursion
        }
};

int main(){
    Fucntional_recursion obj;
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int result = obj.printNumbers(n);
    cout<<result<<endl;
    return 0;
}