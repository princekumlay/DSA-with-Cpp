#include<bits/stdc++.h>
using namespace std;

class Palindrome{
    public:
        bool is_palindrome(string& s){
            int start = 0, end = s.length() - 1;

            while(start <= end){
                if(s[start++] != s[end--]) return false;
            }

            return true;
        }
};

int main(){
    Palindrome obj;
    string s;
    cout<<"Enter string: ";
    cin>>s;
    obj.is_palindrome(s) ? cout<<"Palindrome"<<endl : cout<<"Not Palindrome"<<endl;
    return 0;
}