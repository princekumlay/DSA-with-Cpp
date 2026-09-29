#include<bits/stdc++.h>
using namespace std;

class PerfectNum{
    public:
        bool perfectNum(int& n){
            
            //O(n) time approach
            // int sum = 0;
            // for(int i = 1; i <= n / 2; i++){
            //     if(n % i == 0) sum += i;
            // }
            // return sum == n;



            //O(sqrt(n)) time approach
            // int sum = 1;
            // for(int i = 2; i * i <= n; i++){
            //     if(n % i == 0){
            //         sum += i;
            //         if(i * i != n){
            //             sum += n / i;
            //         }
            //     }
            // }
            
            // return sum == n;


            //O(1) time approach
            return n == 6 || n == 28 || n == 496 || n == 8128 || n == 33550336;
        }
};

int main(){
    PerfectNum obj;
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<"Is num a perfect number: "<<obj.perfectNum(n)<<endl;
    return 0;
}