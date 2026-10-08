//find second smallest in O(n) time and O(1) space
#include<bits/stdc++.h>
using namespace std;

class SecondSmallest{
    private:
        int secondSmallest(vector<int>& nums, int n){
            if(n < 2) return - 1;

            int smallest = nums[0];
            int ssmallest = INT_MAX;

            for(int i = 1; i < n; i++){
                
                if(nums[i] < smallest){
                    ssmallest = smallest;
                    smallest = nums[i];
                }
                else if(nums[i] > smallest && nums[i] < ssmallest){
                    ssmallest = nums[i];
                }

            }

            return ssmallest;
        }

    public:
        int second_smallest(vector<int>& nums){
            return secondSmallest(nums, nums.size());
        }
};


int main(){
    SecondSmallest obj;
    int n;
    cout<<"Enter size: ";
    cin>>n;
    
    vector<int> nums(n);
    cout<<"Enter elements: ";
    for(int i = 0; i < n; i++){
        cin>>nums[i];
    }

    cout<<"Second smallest num: "<<obj.second_smallest(nums)<<endl;

    return 0;
}