//we have to find the index of the nums that adds up to the target if not exist return empty array
#include<bits/stdc++.h>
using namespace std;

class TwoSum{
    public:
        vector<int> twoSum(vector<int>& nums, int target){

            unordered_map<int, int> mp; //stores the value and its original index

            for(int i = 0; i < nums.size(); i++){

                int complement = target - nums[i];

                //if complement already exist
                if(mp.find(complement) != mp.end()){
                    return {mp[complement], i};
                }

                //if complement not exist
                mp[nums[i]] = i;
            }

            return {};
        }
};

int main(){
    TwoSum obj;
    int n;
    cout<<"Enter size: ";
    cin>>n;

    vector<int> nums(n);
    cout<<"Enter elements: ";
    for(int i = 0; i < n; i++){
        cin>>nums[i];
    }

    int target;
    cout<<"Enter target: ";
    cin>>target;

    vector<int> result = obj.twoSum(nums, target);
    cout<<"Required indices: "<<endl;
    for(int num : result){
        cout<<num<<" ";
    }
    cout<<endl;

    return 0;
}