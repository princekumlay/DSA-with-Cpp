//printing 1 to n with backtrack
#include<bits/stdc++.h>
using namespace std;

class PrintCounting{
    public:
        void print_counting(int i){
            if(i < 1) return;
            // cout<<"function call ";
            cout<<i<<" ";
            print_counting(i - 1);
        }
};

int main(){
    PrintCounting obj;
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<" -> ";
    obj.print_counting(n);
    return 0;
}