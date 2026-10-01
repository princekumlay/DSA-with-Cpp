#include<bits/stdc++.h>
using namespace std;

class Subsequence{
    public:
        void sum_subsequence(
            int ind, 
            int arr[], 
            int s, 
            int n, 
            vector<int>& ds, 
            int sum
        ){
            //if array contains non negative numbers then we can return if sum > s, but if contains negative numbers then we have to check all the subsequences
            if(ind == n){
                if(sum == s){
                    cout<<"{";
                    for(int n: ds){
                        cout<<n<<" ";
                    }
                    cout<<"}"<<endl;
                }
                return;
            }

            //includes
            ds.push_back(arr[ind]);
            sum += arr[ind];
            sum_subsequence(ind + 1, arr, s, n, ds, sum);

            //excludes
            ds.pop_back();
            sum -= arr[ind];
            sum_subsequence(ind + 1, arr, s, n, ds, sum);
        }
};

int main(){
    Subsequence obj;
    int n, s;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements: ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cout<<"Enter sum: ";
    cin>>s;
    vector<int> ds;
    int sum = 0;
    obj.sum_subsequence(0, arr, s, n, ds, sum);
    return 0;
}