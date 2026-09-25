#include<bits/stdc++.h>
using namespace std;

class IsSorted{
    public:
        bool is_sorted(vector<int>& arr){
            for(int i = 0; i < arr.size() - 1; i++){
                if(arr[i] > arr[i + 1]) return false;
            }

            return true;
        }
};

int main(){
    IsSorted obj;
    int n;
    cout<<"Enter size of vector: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter elements: ";
    
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    cout<<"Is array sorted: "<<obj.is_sorted(arr)<<endl;
    return 0;
}