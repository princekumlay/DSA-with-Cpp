//we have to find sum of digits of a number until the number is a single digit number
#include<bits/stdc++.h>
using namespace std;

class SumOfDigits{
    private:
        int sum_of_digits(int num){
            if(num == 0) return 0;
            return (num % 10) + sum_of_digits(num / 10);
        }

    public:
        int get_single_digit_sum(int num){
            if(num < 10) return num;
            return get_single_digit_sum(sum_of_digits(num));
        }
};

int main(){
    SumOfDigits obj;
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Sum of digits until single digit: "<<obj.get_single_digit_sum(num)<<endl;
    return 0;
}