#include<bits/stdc++.h>
using namespace std;

class Primes{
    public:
        int count(int n){
            //base condition
            if(n <= 2) return 0;

            vector<bool> isPrime(n, true);
            int count = n / 2; //let all numbers be prime first

            for(int i = 3; (long long)i * i < n; i += 2){
                if(isPrime[i]){
                    for(long long j = i * i; j < n; j += 2 * i){ //updating for composit multiple of i if true mark them false
                        if(isPrime[j]){
                            isPrime[j] = false;
                            count--;
                        }
                    }
                }
            }

            return count;
        }
};

int main(){
    Primes obj;
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<"Total prime numbers less than "<<n<<" are: "<<obj.count(n)<<endl;
    return 0;
}