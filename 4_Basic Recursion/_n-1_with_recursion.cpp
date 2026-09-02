//printing n to 1 with recursion
#include<bits/stdc++.h>
using namespace std;

class PrintReverseCounting{
    public:
        void print_reverse_counting(int n, int i){
            if(n < 1) return;
            cout<<n<<" ";
            print_reverse_counting(n - 1, 1);
        }
};

int main(){
    PrintReverseCounting obj;
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<" -> ";
    obj.print_reverse_counting(n, 1);
    return 0;
}