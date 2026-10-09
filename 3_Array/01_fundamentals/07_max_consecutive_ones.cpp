//get the length of the max consecutive ones in an array
#include<bits/stdc++.h>
using namespace std;

class MaxOnes{
    public:
        int max_consecutive_ones(vector<int>& nums){
            int count = 0, maxOnes = 0;

            for(int num: nums){

                if(num == 1){
                    count++;
                    maxOnes = max(maxOnes, count);
                }
                else count = 0;
            }

            return maxOnes;
        }
};

int main(){
    MaxOnes obj;
    int n;
    cout<<"Enter size: ";
    cin>>n;
    
    vector<int> nums(n);
    cout<<"Enter elements: ";
    for(int i = 0; i < n; i++){
        cin>>nums[i];
    }

    cout<<"Max length of consecutive ones: "<<obj.max_consecutive_ones(nums)<<endl;

    return 0;
}