#include<bits/stdc++.h>
using namespace std;

class Product{
    public:
        int product(int n){
    
            if(n == 0 || n == 1) return 1;
            return n * product(n - 1);
        }
};

int main(){
    Product obj;
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int result = obj.product(n);
    cout<<result<<endl;
    return 0;
}
