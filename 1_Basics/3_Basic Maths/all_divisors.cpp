//finds all divisors of a number using sqrt()
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        vector<int> divisorsOfNum(int n){
            vector<int> divisors;

            //all divisors less than sqrt of n
            for(int i = 1; (long long)i * i <=n; i++){
                if(n % i == 0){
                    divisors.push_back(i);
                }
            }

            //all divisors greater than sqrt of n
            for(int i = sqrt(n); i >= 1; i--){
                if(n % i == 0){
                    if( i != n / i){
                        divisors.push_back(n / i);
                    }
                }
            }

            return divisors;
        }
};

int main(){
    Solution obj;
    int n;
    cout<<"Enter num to find it's divisors: ";
    cin>>n;
    cout<<endl<<"all divisors of num are: ";
    vector<int> result = (obj.divisorsOfNum(n));
    for(int n : result){
        cout<<n<<" ";
    }
    return 0;
}