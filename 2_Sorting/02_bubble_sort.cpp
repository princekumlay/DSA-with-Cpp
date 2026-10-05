//bubble sort: in every iteration, the largest element is moved to the end of the array.
//time complexity O(n^2) and space complexity O(1)
#include<bits/stdc++.h>
using namespace std;

class BubbleSort{
    public:
        void sort(vector<int>& arr){
            int n = arr.size();
            
            for(int i = 0; i < n - 1; i++){
                for(int j = 0; j < n - i - 1; j++){
                    if(arr[j] > arr[j + 1]){
                        swap(arr[j], arr[j + 1]);
                    }
                }
            }
        }
};

int main(){
    BubbleSort bubbleSort;

    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter elements of array: ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    bubbleSort.sort(arr);
    cout<<"Sorted array: ";
    for(int num : arr){
        cout<<num<<" ";
    }
    cout<<endl;
    
    return 0;
}