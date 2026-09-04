//printing name n time with recursion
#include<bits/stdc++.h>
using namespace std;

class Print_Name{
    public:
        void print_name(int i, int n){
            if(i > n) return;
            cout<<"Hakuna_Mtata ";
            print_name(i + 1, n);
        }
};

int main(){
    Print_Name obj;
    int n;
    cout<<"Enter the repeater number: ";
    cin>>n;
    cout<<" -> ";
    obj.print_name(1, n);
    return 0;
}