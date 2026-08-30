//if cube of digits of a number is equal to the number itself then it is a armstrong number
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        bool armStrong(int n){
            int dup = n;
            int sum = 0;
            while(n != 0){
                int ld = n % 10;
                sum += (ld * ld * ld);
                n /= 10;
            }
            return dup == sum;
        }
        //constructor
        int solve(int n){
            return armStrong(n);
        }
};

int main(){
    Solution obj;
    int n;
    cout<<"Enter number to check armstrong: ";
    cin>>n;
    cout<<endl<<"Is number armstrong: "<<obj.armStrong(n);
    return 0;
}