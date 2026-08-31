//finding GCD of two numbers using % operator
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int GCDOfNumbers(int a, int b){

            while(a > 0 && b > 0){
                if(a > b) a %= b;
                else b %= a;

                if(a == 0) return b;
            }

            return a;
        }
        
};

int main(){
    Solution obj;
    int a, b;
    cout<<"Enter two numbers to find GCD: ";
    cin>>a;
    cin>>b;
    cout<<"GCD of two numbers is: "<<obj.GCDOfNumbers(a, b)<<endl;
    return 0;
}