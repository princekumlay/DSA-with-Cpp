//counts the digits of a number using % and / operator
//time complexity is O(log10(n));
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        //count digit function
        int count_digits(int n){
            int count = 0;
            while(n > 0){
                count++;
                n /= 10;
            }
            return count;
        }
       
};

int main(){
    Solution obj;
    int n;
    cout<<"Enter number to count its digits: ";
    cin>>n;
    cout<<" -> "<<"digits using loop: "<<obj.count_digits(n)<<endl;
    //***number of digits using log base 10 and type caste into int
    cout<<" -> "<<"digits using (int)(log10(n) + 1): "<<(int)(log10(n) + 1)<<endl;
    return 0;
}