/*Given a string s containing only three types of characters: '(', ')' and '*', return true if s is valid.

The following rules define a valid string:

Any left parenthesis '(' must have a corresponding right parenthesis ')'.
Any right parenthesis ')' must have a corresponding left parenthesis '('.
Left parenthesis '(' must go before the corresponding right parenthesis ')'.
'*' could be treated as a single right parenthesis ')' or a single left parenthesis '(' or an empty string "".*/
#include <bits/stdc++.h>
using namespace std;

class ValidParenthesisString
{
public:
    bool method_1(string s)
    {

        // method 1: greedy approach
        int minOpen = 0, maxOpen = 0;
        for (char c : s)
        {
            if (c == '(')
            {
                minOpen++;
                maxOpen++;
            }
            else if (c == ')')
            {
                minOpen--;
                maxOpen--;
            }
            else
            { // c == '*'
                minOpen--;
                maxOpen++;
            }

            if (maxOpen < 0)
                return false; // to many closing brackets
            if (minOpen < 0)
                minOpen = 0; // it can't be negative, because we can treat '*' as empty string
        }

        return minOpen == 0;

        
    }

    bool method_2(string s){
        // method 2: using stack
        stack<int> openStack, starStack;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(')
                openStack.push(i);
            else if (s[i] == '*')
                starStack.push(i);
            else
            {
                if (!openStack.empty())
                    openStack.pop();
                else if (!starStack.empty())
                    starStack.pop();
                else
                    return false;
            }
        }

        while (!openStack.empty() && !starStack.empty())
        {
            if(openStack.top() > starStack.top()){
                return false;
            }
            openStack.pop();
            starStack.pop();
        }

        return openStack.empty();
    }
};

int main(){
    ValidParenthesisString vps;
    string s;
    cout<<"Enter string containing only '(', ')' and '*': ";
    cin>>s;
    // cout<<"Is string valid? "<<(vps.method_1(s) ? "Yes" : "No")<<endl;
    cout<<"Is string valid? "<<(vps.method_2(s) ? "Yes" : "No")<<endl;
    return 0;
}