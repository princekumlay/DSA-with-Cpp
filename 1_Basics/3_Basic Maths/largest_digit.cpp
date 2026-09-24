#include<bits/stdc++.h>
using namespace std;

class LargestDigit{
    public:
        int largest_digit(int& n){
            int largeDigit = 0;

            while(n > 0){
                largeDigit = max(largeDigit, n % 10);
                n /= 10;
            }

            return largeDigit;
        }
};

int main(){
    LargestDigit obj;
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<"Largest digit is: "<<obj.largest_digit(n)<<endl;
    return 0;
}