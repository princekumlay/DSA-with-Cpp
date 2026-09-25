#include<bits/stdc++.h>
using namespace std;

class ReverseString{
    public:
        void rev_string(string& s){
            int left = 0, right = s.length() - 1;

            while(left < right){
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }
};

int main(){
    ReverseString obj;
    string s;
    cout<<"Enter string: ";
    cin>>s;

    cout<<"Origianal string: "<<s<<endl;

    obj.rev_string(s);

    cout<<"Reversed string: "<<s<<endl;
    return 0;
}