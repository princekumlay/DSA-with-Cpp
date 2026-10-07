//bubble sort recursive code
#include<bits/stdc++.h>
using namespace std;

class RecursiveBubble{
    private:
        //helper function to put largest element to the end of the given range of array
        void insert(vector<int>& arr, int j, int n){
            //base case: when j reach to the second last element of the current window
            if(j >= n - 1) return;
            //if consecutive elements are out of order
            if(arr[j] > arr[j + 1]) swap(arr[j], arr[j + 1]);
            //revursively move to the next adjacent pair
            insert(arr, j + 1, n);
           
        }

        //outer loop function that recursively reduce the window size
        void bubble(vector<int>& arr, int n){
            //base case: when array has only single element or no element than it is already sorted
            if(n <= 1) return;
            //push max element of current element to the last of this window
            insert(arr, 0, n);
            //reduce window size and call for next iteration
            bubble(arr, n - 1);
        }

    public:
        void bubbleSort(vector<int>& arr){
            bubble(arr, arr.size());
        }
};


int main(){
    RecursiveBubble obj;

    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter elements of array: ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    obj.bubbleSort(arr);
    cout<<"Sorted array: ";
    for(int num : arr){
        cout<<num<<" ";
    }
    cout<<endl;
    
    return 0;
}