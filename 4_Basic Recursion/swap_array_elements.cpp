//swaping elements of arrya using functional recursion
#include<bits/stdc++.h>
using namespace std;

class SwapArray{
    public:
        void swap_ele(int arr[], int i, int n){
            if(i >= n/2) return;
            swap(arr[i], arr[n - i - 1]);
            swap_ele(arr, i + 1, n);
        }
};

int main(){
    SwapArray obj;
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i = 0; i < n; i++) cin>>arr[i];
    obj.swap_ele(arr, 0, n);
    cout<<"Swapped array: ";
    cout<<"[";
    for(int i = 0; i < n; i++) cout<<arr[i]<<" ";
    cout<<"]"<<endl;
    return 0;
}