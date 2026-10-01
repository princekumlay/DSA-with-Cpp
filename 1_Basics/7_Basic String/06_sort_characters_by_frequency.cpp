#include<bits/stdc++.h>
using namespace std;

class SortByFrequency{
    public:
        string frequency_sort(string s){
            //stores frequency of all characters of string s
            unordered_map<char, int> mp;
            for(char c : s){
                mp[c]++;
            };

            //store all characters and their frequency in a vector of pairs
            vector<pair<char, int>> temp(mp.begin(), mp.end());

            //sort the vector in decreasing order of frequency
            sort(temp.begin(), temp.end(), [](const pair<char, int> &a, const pair<char, int> &b){
                if(a.second != b.second) return a.second > b.second;
                return a.first < b.first;
            });

            //store sorted characters in a string
            string result = "";
            for(const auto &p : temp){
                int i = 0;
                while(i < p.second){
                    result += p.first;
                    i++;
                }
            };

            return result;
        }
};

int main(){
    SortByFrequency obj;
    string s;
    cout<<"Enter string: ";
    cin>>s;
    cout<<"Sorted string by frequency: "<<obj.frequency_sort(s)<<endl;

    return 0;
}