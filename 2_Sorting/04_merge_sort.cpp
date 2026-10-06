//merge sort: it first divide the array and then merge after sorting them in a correct order step by step
//time complexity is O(nlog(n)) and space complexity O(n)
#include<bits/stdc++.h>
using namespace std;

class MergeSort{
    private:
        // this function merge the divided array into a single array and then put in original array
        void merge(vector<int>& arr, int low, int mid, int high){
            //temporary array to store elements in sortedf order
            vector<int> temp;

            int left = low;
            int right = mid + 1;

            //push elements to temp vector in a sorted order
            while(left <= mid && right <= high){
                if(arr[left] <= arr[right]) temp.push_back(arr[left++]);
                else temp.push_back(arr[right++]);
            }

            //if elements left in left array
            while(left <= mid){
                temp.push_back(arr[left++]);
            }

            //if elements left in right array
            while(right <= high){
                temp.push_back(arr[right++]);
            }

            //puts elements back to original array in sorted order
            for(int i = low; i <= high; i++){
                arr[i] = temp[i - low];
            }
        }
        

        //this function divide the array till the single element and then call for merge
        void divide(vector<int>& arr, int low, int high){
            //base case to return when only single element remains
            if(low == high) return;

            int mid = (low + high) / 2;

            divide(arr, low, mid);
            divide(arr, mid + 1, high);
            //call for merge
            merge(arr, low, mid, high);
        }


    public:
        void mergeSort(vector<int> & arr){
            int n = arr.size();
            divide(arr, 0, n - 1);
        }
};


int main(){
    MergeSort obj;
    int n; 
    cout<<"Enter size: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter array elements: ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    obj.mergeSort(arr);
    cout<<"Sorted array is: ";
    for(int num: arr){
        cout<<num<<" ";
    }
    cout<<endl;

    return 0;
}