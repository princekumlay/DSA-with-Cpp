//wheather the number is prime or not using sqrt()
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        bool primeNum(int n){

            if(n <= 1) return false;

            //all divisors less than sprt of n
            for(int i = 2; (long long)i * i <=n; i++){
                if(n % i == 0){
                   return false;
                }
            }
            return true;
        }
        //constructor
        bool solve(int n){
            return primeNum(n);
        }
};

int main(){
    Solution obj;
    int n;
    cout<<"Enter num to find it's Prime: ";
    cin>>n;
    cout<<endl<<"Is num prime: "<<obj.primeNum(n);
    return 0;
}