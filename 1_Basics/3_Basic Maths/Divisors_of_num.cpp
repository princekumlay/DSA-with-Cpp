#include<bits/stdc++.h>
using namespace std;

class Divisors{
    public:
        vector<int> divisors(int n){
            vector<int> factors;

            for(int i = 1; i * i <= n; i++){
                if(n % i == 0){
                    factors.push_back(i);

                    if(i != n / i) factors.push_back(n / i);
                }
            }

            sort(factors.begin(), factors.end());
            return factors;
        }
};

int main(){
    Divisors obj;
    int n;
    cout<<"Enter number: ";
    cin>>n;

    vector<int> result = obj.divisors(n);

    cout<<"Divisors of nums are: ";
    for(int n : result){
        cout<<n<<" ";
    }
    cout<<endl;

    return 0;
}