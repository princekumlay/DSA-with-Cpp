//recursion is a programming technique in which a function calls itself to solve a problem by reducing it into smaller instances of the same problem, until a base case is reached.
#include<bits/stdc++.h>
using namespace std;

int cnt = 0;

class Recursion{
    public:
        void recursion(){
            if(cnt == 4) return;
            cout<<cnt<<" ";
            cnt++;
            recursion();
        }
        //constructor
        Recursion(){
            cout<<"constructor called"<<endl;
        }
};

int main(){
    Recursion obj;
    obj.recursion();
    return 0;
}