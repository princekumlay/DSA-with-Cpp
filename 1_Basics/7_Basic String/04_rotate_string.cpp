//goal is to find that we can get the target string from string s after some rotations

#include<bits/stdc++.h>
using namespace std;

class RotateString{
    public:
        bool rotate_string(string s, string target){
            if(s.length() != target.length()) return false;

            string doubled = s + s;
            return doubled.find(target) != string::npos;
        }
};

int main(){
    RotateString obj;

    string s, target;
    cout<<"Enter string s and target string:";
    cin>>s>>target;

    cout<<"Can we get terget string form s with rotations: "<<obj.rotate_string(s, target)<<endl;
    return 0;
}