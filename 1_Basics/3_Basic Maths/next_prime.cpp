#include<bits/stdc++.h>
using namespace std;

class Next_Prime{
    public:
        bool is_prime(int n){
            if(n <= 1) return false;
            if(n <= 3) return true;
            if(n % 2 == 0 || n % 3 == 0) return false;

            for(int i = 5; i * i <= n; i += 6){
                if(n % i == 0 || n % (i + 2) == 0) return false;
            }

            return true;
        }

        int next_prime(int n){
            int num = n + 1;
            while(!is_prime(num)){
                num++;
            }
            return num;
        }
};

int main(){
    Next_Prime obj;
    int n;
    cout<<"Enter num to find next prime: ";
    cin>>n;
    cout<<"Next prime is: "<<obj.next_prime(n)<<endl;
    return 0;
}