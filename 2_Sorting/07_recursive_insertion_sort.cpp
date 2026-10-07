//recursive sol to insertion sort
#include<bits/stdc++.h>
using namespace std;

class RecursiveInsertion{
    private:
        void insert(vector<int>& arr, int j){
            
            if(j > 0 && arr[j - 1] > arr[j]){
                swap(arr[j - 1], arr[j]);
                insert(arr, j - 1);
            }
        }

        void insertion_sort(vector<int>& arr, int i, int n){
            if(i >= n) return;

            insert(arr, i);
            insertion_sort(arr, i + 1, n);
        }

    public:
        void insertionSort(vector<int>& arr){
            insertion_sort(arr, 1, arr.size());
        }
};


int main(){
    RecursiveInsertion obj;
    int n;
    cout<<"Enter size: ";
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter elements: ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    obj.insertionSort(arr);
    cout<<"Sorted array: ";
    for(int num: arr){
        cout<<num<<" ";
    }
    cout<<endl;
    
    return 0;
}