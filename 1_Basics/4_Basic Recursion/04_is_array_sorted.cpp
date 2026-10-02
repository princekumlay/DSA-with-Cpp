#include<bits/stdc++.h>
using namespace std;

class IsArraySorted{
    private:
        bool is_sorted(vector<int>& arr, int index){
            if(index == arr.size() - 1) return true;
            if(arr[index] > arr[index + 1]) return false;
            return is_sorted(arr, index + 1);
        }

    public:
        bool check_sorted(vector<int>& arr){
            return is_sorted(arr, 0);
        }
};

int main(){
    IsArraySorted obj;
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    
    vector<int> arr(n);
    cout<<"Enter elements: ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    obj.check_sorted(arr) ? cout<<"Array is sorted."<<endl : cout<<"Array is not sorted."<<endl;
    return 0;
}