#include<bits/stdc++.h>
using namespace std;

class LargestOddNum{
    public:
        string number(string& s){
            int start = 0, end = s.length() - 1;

            while(start <= end && s[start] == '0') start++;
            while(start <= end && (s[end] - '0') % 2 == 0) end--;

            return s.substr(start, end - start + 1);
        }
};

int main(){
    LargestOddNum obj;
    string s;
    cout<<"Enter number string: ";
    cin>>s;
    cout<<"largest odd num in a string: "<<obj.number(s)<<endl;
    return 0;
}