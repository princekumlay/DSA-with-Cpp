#include<bits/stdc++.h>
using namespace std;

class OddDigits{
    public:
        int odd_digits(int& n){
            int digits = 0;

            while(n > 0){
                if((n % 10) % 2 != 0) digits++;
                n /= 10;
            }

            return digits;
        }
};

int main(){
    OddDigits obj;
    int n;
    cout<<"Enter number: ";
    cin>>n;

    cout<<"Number of odd digits: "<<obj.odd_digits(n)<<endl;
    return 0;
}