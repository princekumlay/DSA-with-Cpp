//it is the STL function that return the number of once in a binary of a number or set bits of a number(i.e 1);
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 7;
    cout<<__builtin_popcount(n)<<endl;
    long long int m = 987495693409;
    cout<<__builtin_popcountll(m)<<endl;
    return 0;
}