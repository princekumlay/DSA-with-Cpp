//quick sort: it works on divide and conqure. It divides the array by finding the pivot in every iteration
//time complexity O(nlog(n) and space O(1)
#include<bits/stdc++.h>
using namespace std;

class QuickSort{
    private:
        int partitionIndex(vector<int>& nums, int low, int high){
            int pivot = nums[low];

            int i = low;
            int j = high;

            while(i < j){

                //get index of first element that is greater than pivot
                while(nums[i] <= pivot && i <= high - 1) i++;

                //get index of first element that is smaller than pivot
                while(nums[j] > pivot && j >= low + 1) j--;

                //swap the elements to put ele greater than pivot to right and smaller to left
                if(i < j) swap(nums[i], nums[j]);
            }

            //put pivot to its correct position
            swap(nums[low], nums[j]);

            return j; //it is the pivot index
        }

        void quick_sort(vector<int> & nums, int low, int high){
            if(low < high){

                int pIndex = partitionIndex(nums, low, high);
                quick_sort(nums, low, pIndex - 1);
                quick_sort(nums, pIndex + 1, high);
            }
        }

    public:
        void quickSort(vector<int>& nums){
            quick_sort(nums, 0, nums.size() - 1);
        }
};


int main(){
    QuickSort obj;
    int n;
    cout<<"Enter size: ";
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter elements: ";
    for(int i = 0; i < n; i++){
        cin>>nums[i];
    }

    obj.quickSort(nums);
    cout<<"Sorted array: ";
    for(int num: nums){
        cout<<num<<" ";
    }

    return 0;
}