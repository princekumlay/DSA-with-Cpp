//next_permutation(): it returns the next permutation of given string, vector, array etc.
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "132";
    vector<int> v = {6, 5, 4};

    //to get all the permutations sort given data first
    sort(s.begin(), s.end());
    sort(v.begin(), v.end());

    cout<<endl<<"permutations of string-132: ";
    do{
        cout<<s<<", ";
    }while(next_permutation(s.begin(), s.end()));
    cout<<endl;

    cout<<endl<<"permutations of vector v: ";
    do{
        cout<<"{";
        for(int n: v){
            cout<<n<<",";
        }
        cout<<"}; ";
    }while(next_permutation(v.begin(), v.end()));
    cout<<endl<<endl;
    return 0;
}