//finding whether a string is palindrome or not using functional recursion
#include<bits/stdc++.h>
using namespace std;

class Palindrome{
    public:
        bool is_palindrome(int start, int end, string str){
            if(start >= end) return true;
            if(str[start] != str[end]) return false;
            return is_palindrome(start + 1, end - 1, str);
        }
};

int main(){
    Palindrome obj;
    string str;
    cout<<"Enter the string: ";
    cin>>str;
    int n = str.length();
    obj.is_palindrome(0, n - 1 , str) ? cout<<"String is palindrome"<<endl : cout<<"String is not palindrome"<<endl;
    return 0;
}