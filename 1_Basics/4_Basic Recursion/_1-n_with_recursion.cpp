//printing 1 to n with recursion
#include<bits/stdc++.h>
using namespace std;

class PrintCounting{
    public:
        void print_counting(int i, int n){
            if(i > n) return;
            cout<<i<<" ";
            print_counting(i + 1, n);
        }
};

int main(){
    PrintCounting obj;
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<" -> ";
    obj.print_counting(1, n);
    return 0;
}