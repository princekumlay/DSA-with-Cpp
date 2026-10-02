#include<bits/stdc++.h>
using namespace std;

class ReverseString{
    private:
        void reverse(vector<char> &str, int index){
            if(index >= str.size() / 2) return;

            swap(str[index], str[str.size() - index - 1]);

            reverse(str, index + 1);
        }

    public:
        vector<char> reverse_string(vector<char> &str){
            reverse(str, 0);
            return str;
        }
};

int main(){
    ReverseString obj;
    int n;
    cout<<"Enter size of string: ";
    cin>>n;
    vector<char> str(n);
    cout<<"Enter string elements: ";
    for(int i = 0; i < n; i++){
        cin>>str[i];
    }

    vector<char> reversed_str = obj.reverse_string(str);
    cout<<"Reversed string: ";
    for(char c : reversed_str){
        cout<<c;
    }

    return 0;
}