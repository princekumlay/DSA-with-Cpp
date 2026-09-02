#include<bits/stdc++.h>
using namespace std;

//funtion to print butterfly pattern
//O(n) time complexity and O(1) space complexity
void printButterflyPattern(int n){
    for(int i = 0; i < 2 * n - 1; i++){
        int stars = i < n ? (i + 1) : (2 * n - i - 1);
        int spaces = i < n ? (2 * (n - i - 1)) : (2 * ( i - n + 1));

        cout<<string(stars, '*')<<string(spaces, ' ')<<string(stars, '*')<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter size: ";
    cin>>n;
    printButterflyPattern(n);
    return 0;
}