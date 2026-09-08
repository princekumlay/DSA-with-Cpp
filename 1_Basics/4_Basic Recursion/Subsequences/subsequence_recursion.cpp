#include<bits/stdc++.h>
using namespace std;

class Subsequence{
    public:
        void subsequence(int ind, int arr[], int n, vector<int> ds){
            if(ind == n){
                if(ds.size() == 0) cout<<"{}";
                for(int n: ds){
                    cout<<n<<" ";
                }
                cout<<endl;
                return;
            }

            //exclude element
            subsequence(ind + 1, arr, n, ds);
            
            //include element
            ds.push_back(arr[ind]);
            subsequence(ind + 1, arr, n, ds);
            ds.pop_back();
        }
};

int main(){
    Subsequence obj;
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements: ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    vector<int> ds;
    obj.subsequence(0, arr, n, ds);
    return 0;
}