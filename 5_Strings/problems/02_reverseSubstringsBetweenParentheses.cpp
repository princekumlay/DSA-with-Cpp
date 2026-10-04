//here we have to reverse all the substrings between the parentheses
//Input: s = "(ed(et(oc))el)", Output: "leetcode"


#include<bits/stdc++.h>
using namespace std;

class ReverseSubstring{
    public:
        string reverseSubstring(string s){
            int n = s.length();
            vector<int> pair(n, 0);
            stack<int> st;

            //pair mapping for parentheses
            for(int i = 0; i < n; i++){
                if(s[i] == '('){
                    st.push(i);
                }
                else if(s[i] == ')'){
                    int open_idx = st.top();
                    st.pop();
                    pair[open_idx] = i;
                    pair[i] = open_idx;
                }
            }

            //traverse and build result string
            string result = "";
            int step = 1; //1 for left->right and -1 for right->left
            for(int i = 0; i < n; i += step){
                if(s[i] == '(' || s[i] == ')'){
                    i = pair[i]; //teleport to the corresponding index
                    step = -step; //flip direction
                }
                else{
                    result += s[i];
                }
            }

            return result;
        }
};

int main(){
    ReverseSubstring obj;
    string s;
    cout<<"Enter string including balanced open and closed parentheses: ";
    cin>>s;

    cout<<"Resulting string is: "<<obj.reverseSubstring(s)<<endl;
    return 0;
}