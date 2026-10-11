//we have to find the element then appears more than n / 2 times
#include<bits/stdc++.h>
using namespace std;

class MajorityEle{
    public:
        int majority_ele(vector<int>& nums){
            int candidate = 0, count = 0;

            for(int num : nums){
                
                if(count == 0){
                    candidate = num;
                }

                count += (candidate == num) ? 1 : - 1;
            }

            return candidate;
        }
};

int main(){
    MajorityEle obj;
    int n;
    cout<<"Enter size: ";
    cin>>n;

    vector<int> nums(n);
    cout<<"Enter elements: ";
    for(int i = 0; i < n; i++){
        cin>>nums[i];
    }

    cout<<"Majority element: "<<obj.majority_ele(nums)<<endl;

    return 0;
}