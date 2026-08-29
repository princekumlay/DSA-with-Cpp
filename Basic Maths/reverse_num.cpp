//reversing number using % and / operator and time complexity is O(log10(n))
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int reverseNum(int n){
            int reverseNum = 0;
            while(n > 0){
                reverseNum = reverseNum * 10 + n % 10;
                n /= 10;
            }
            return reverseNum;
        }
        //constructor
        int solve(int n){
            return reverseNum(n);
        }
};

int main(){
    Solution obj;
    int n;
    cout<<"Enter number to reverse: ";
    cin>>n;
    cout<<"Reverse number is: "<<obj.reverseNum(n)<<endl;
    return 0;
}