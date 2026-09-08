#include<bits/stdc++.h>
using namespace std;

class Subsequence{
    public:
        int sum_subseq(int ind, int arr[], int s, int n, int sum){
            
            if(ind == n){
                if(sum == s) return 1;
                else return 0;
            }

            //includes
            sum += arr[ind];
            int l = sum_subseq(ind + 1, arr, s, n, sum);

            //excludes
            sum -= arr[ind];
            int r = sum_subseq(ind + 1, arr, s, n, sum);
            return l + r;
        }
};

int main(){
    Subsequence obj;
    int n, s;
    cout<<"Enter size: ";
    cin>>n;

    int arr[n];
    cout<<"Enter elements: ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    
    int sum = 0;
    cout<<"Enter sum: ";
    cin>>s;
    cout<<obj.sum_subseq(0, arr, s, n, sum)<<endl;
    return 0;
}