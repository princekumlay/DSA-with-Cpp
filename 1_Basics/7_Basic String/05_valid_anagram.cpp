#include<bits/stdc++.h>
using namespace std;

class ValidAnagram{
    public:
        bool anagram(string s, string t){
            if(s.length() != t.length()) return false;

            //store frequency of all character of string s
            unordered_map<char, int> mp;
            for(char c : s){
                mp[c]++;
            }

            //check for anagram
            for(char c : t){
                if(mp.find(c) != mp.end() && mp[c] > 0) mp[c]--;
                else return false;
            }

            return true;
        }
};

int main(){
    ValidAnagram obj;
    string s, t;
    cout<<"Enter string s and t: ";
    cin>>s>>t;
    cout<<"Is string t a valid anagram of s: "<<obj.anagram(s, t)<<endl;
    return 0;
}