//we have the find the list of elements which are greater to all the elements to their right
#include<bits/stdc++.h>
using namespace std;

class LeaderElement{
    public:
        vector<int> learderEle(vector<int>& nums){
            int n = nums.size();
            int maxEl = INT_MIN;
            vector<int> ans;

            for(int i = n - 1; i >= 0; i--){

                if(nums[i] > maxEl){
                    ans.push_back(nums[i]);
                    maxEl = max(maxEl, nums[i]);
                }

            }

            reverse(ans.begin(), ans.end());

            return ans;
        }
};

int main(){
    LeaderElement leader;
    int n;
    cout<<"Enter size: ";
    cin>>n;

    vector<int> nums(n);
    cout<<"Enter elements: ";
    for(int i = 0; i < n; i++){
        cin>>nums[i];
    }

    vector<int> result = leader.learderEle(nums);
    cout<<"List of leaders: "<<"{ ";
    for(int num: result){
        cout<<num<<" ";
    }
    cout<<"}"<<endl;

    return 0;
}