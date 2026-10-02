#include<bits/stdc++.h>
using namespace std;

class PrimeNum{
    private:
        bool is_prime(int num, int divisor){
            if(num <= 1) return false;
            if(divisor * divisor > num) return true;
            if(num % divisor == 0) return false;
            return is_prime(num, divisor + 1);
        }

    public:
        bool check_prime(int num){
            return is_prime(num, 2);
        }
};

int main(){
    PrimeNum obj;
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    obj.check_prime(num) ? cout<<num<<" is a prime number."<<endl : cout<<num<<" is not a prime number."<<endl;
    return 0;
}