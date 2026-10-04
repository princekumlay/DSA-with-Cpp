#include<bits/stdc++.h>
using namespace std;

class LongestPrefix{
    public:
        string common_prefix(vector<string>& str){
            if(str.empty()) return "";

            for(int i = 0; i < str[0].length(); i++){
                char currChar = str[0][i];

                for(int j = 1; j < str.size(); j++){

                    //if i exceeds string length or currchar don't match
                    if(i > str[j].length() || currChar != str[j][i]){
                        return str[0].substr(0, i);
                    }
                }

            }
            return str[0];
        }
};

int main(){
    LongestPrefix obj;
    int n;
    cout<<"Enter size of a vector string: ";
    cin>>n;

    vector<string> str(n);
    cout<<"Enter strings in a vector: ";
    for(int i = 0; i < n; i++){
        cin>>str[i];
    }

    cout<<"Longest common prefix: "<<obj.common_prefix(str)<<endl;
    
    return 0;
}