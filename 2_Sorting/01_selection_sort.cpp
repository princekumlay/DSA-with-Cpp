//selection sort is a simple comparison-based sorting algorithm. It works by repeatedly finding the minimum element from the unsorted part of the array and moving it to the beginning. The algorithm maintains two subarrays in a given array: the subarray which is already sorted and the remaining subarray which is unsorted.
//time complexity is O(n^2) in all cases and space complexity is O(1)
#include<bits/stdc++.h>
using namespace std;

class SelectionSort{
    public:
        void selection_sort(vector<int>& arr){

            for(int i = 0; i < arr.size() - 1; i++){
                int min_index = i;

                for(int j = i + 1; j < arr.size(); j++){
                    if(arr[j] < arr[min_index]) min_index = j;
                }

                swap(arr[i], arr[min_index]);
            }
        }
};

int main(){
    SelectionSort obj;
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    vector<int> arr(n);

    cout<<"Enter elements: ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    obj.selection_sort(arr);
    cout<<"Sorted array: ";
    for(int num : arr) cout<<num<<" ";
    cout<<endl;

    return 0;
}