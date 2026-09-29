#include<bits/stdc++.h>
using namespace std;

class LCM_of_nums{
    private:
        int gcd_of_nums(int a, int b){
            while(a > 0 && b > 0){
                if(a > b) a %= b;
                else b %= a;

                if(a == 0) return b;
            }

            return a;
        }
    
    public:
        int lcm_of_nums(int a, int b){
            return ((a / gcd_of_nums(a, b)) * b);
        }
};

int main(){
    LCM_of_nums obj;
    int n1, n2;
    cout<<"Enter two number: ";
    cin>>n1>>n2;
    int lcm = obj.lcm_of_nums(n1, n2);
    cout<<"LCM of two number: "<<lcm<<endl;
    return 0;
}