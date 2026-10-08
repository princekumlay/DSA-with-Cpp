//we have to find the second largest in O(n) time and O(1) space
#include<bits/stdc++.h>
using namespace std;

class SecondLargest{
    private:
        int secondLargest(vector<int>& nums, int n){
            if(n < 2) return - 1;

            int largest = nums[0];
            int slargest = - 1;

            for(int i = 1; i < n; i++){

                if(nums[i] > largest){
                    slargest = largest;
                    largest = nums[i];
                }
                else if(nums[i] < largest && nums[i] > slargest){
                    slargest = nums[i];
                }

            }

            return slargest;
        }

    public:
        int second_largest(vector<int>& nums){
            return secondLargest(nums, nums.size());
        }
};

int main(){
    SecondLargest obj;
    int n;
    cout<<"Enter size: ";
    cin>>n;

    vector<int> nums(n);
    cout<<"Enter elements: ";
    for(int i = 0; i < n; i++){
        cin>>nums[i];
    }

    cout<<"Second largest num: "<<obj.second_largest(nums)<<endl;

    return 0;
}