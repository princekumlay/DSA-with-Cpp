#include<bits/stdc++.h>
using namespace std;

class HighestLowest{
    public:
        int sum(vector<int>& arr){
            int n = arr.size();

            map<int, int> freq;

            //getting freq of elements
            for(int n : arr){
                freq[n]++;
            }

            int lowest = INT_MAX, highest = 0;
            for(auto& it : freq){
                lowest = min(lowest, it.second);
                highest = max(highest, it.second);
            }

            return (lowest == INT_MAX) ? highest : (highest + lowest);
        }
};

int main(){
    HighestLowest obj;
    int n;
    cout<<"Enter size of vector: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter elements: ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cout<<endl;

    cout<<"Sum of highest and lowest frequency: "<<obj.sum(arr)<<endl;
    return 0;
}