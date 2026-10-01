#include<bits/stdc++.h>
using namespace std;

class Subsequence{
    public:
        bool sum_subseq(int ind, int arr[], int s, int n, vector<int>& ds, int sum){
            
            if(ind == n){
                if(sum == s){
                    cout<<"{";
                    for(int n: ds){
                        cout<<n<<" ";
                    }
                    cout<<"}"<<endl;
                    return true;
                }
                else return false;
            }

            //includes
            ds.push_back(arr[ind]);
            sum += arr[ind];
            if(sum_subseq(ind + 1, arr, s, n, ds, sum) == true) return true;

            //excludes
            ds.pop_back();
            sum -= arr[ind];
            if(sum_subseq(ind + 1, arr, s, n, ds, sum) == true) return true;
            return false;
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
    
    vector<int> ds;
    int sum = 0;
    cout<<"Enter sum: ";
    cin>>s;
    obj.sum_subseq(0, arr, s, n, ds, sum);
    return 0;
}