//we have to print the nth row elements of the pascal's triangle
#include<bits/stdc++.h>
using namespace std;

class NthRow{
    public:
        void printNthRow(int r){
            int ans = 1;
            cout<<"{ "<<ans<<" ";

            for(int i = 1; i < r; i++){

                ans *= r - i;
                ans /= i;

                cout<<ans<<" ";
            }
            cout<<"}"<<endl;

        }
};

int main(){
    NthRow obj;
    int r; 
    cout<<"Enter row: ";
    cin>>r;

    cout<<r<<"th row of pascal's triangle: ";
    obj.printNthRow(r);

    return 0;
}