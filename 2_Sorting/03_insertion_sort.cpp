//insertion sort: it dynamically increase the size of array and sort the elements of array at any instance
//time complexity worst case: O(n^2), best case: O(n) and constant space
#include<bits/stdc++.h>
using namespace std;

class InsertionShort{
    public:
        void insertionSort(vector<int>& arr){
            int n = arr.size();

            for(int i = 0; i < n; i++){
                int j = i;

                while(j > 0 && arr[j - 1] > arr[j]){
                    swap(arr[j - 1], arr[j]);
                    j--;
                }
            }
        }
};

int main(){
    InsertionShort obj;
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