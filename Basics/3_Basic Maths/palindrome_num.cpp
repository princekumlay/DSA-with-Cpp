//checking palindrome reversing half the number
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        bool palindrome(long long n){

            //negative number
            if(n < 0) return false;
            
            //single digit number always a palindrome
            if(n < 10) return true;
            
            //if number ending in 0
            if(n % 10 == 0) return false;

            long long half_num = 0;
            while(n > half_num){
                half_num = half_num * 10 + n % 10;
                n /= 10;
            }

            return (n == half_num || n == half_num % 10);
        }
        
};

int main(){
    Solution obj;
    long long n;
    cout<<"Enter number check palindrome: ";
    cin>>n;
    cout<<"Is number Palindrome: "<<obj.palindrome(n)<<endl;
    return 0;
}