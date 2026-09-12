#include<bits/stdc++.h>
using namespace std;

class Hash_class{
    public:
        void hash_func(string s, int q){
            int hash[256] = {0};

            for(int i = 0; i < s.size(); i++){
                hash[s[i]]++;
            }

            cout<<"enter quaries: ";
            while(q--){
                char c;
                cin>>c;

                cout<<hash[c]<<endl;
            }
        }
};

int main(){
    Hash_class obj;
    string s;
    cout<<"Enter string: ";
    cin>>s;
    int q;
    cout<<"Enter quary: ";
    cin>>q;
    obj.hash_func(s, q);
    return 0;
}