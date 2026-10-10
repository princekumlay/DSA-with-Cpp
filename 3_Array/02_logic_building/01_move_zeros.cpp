//move all the zeros to the end of array
#include<bits/stdc++.h>
using namespace std;

class MoveZeros{
    public:
        void move_zeros(vector<int>& nums){
            int n = nums.size();
            int slow = 0;

            for(int fast = 1; fast < n; fast++){
                if(nums[slow] == 0){
                    if(nums[fast] != 0){
                        swap(nums[slow++], nums[fast]);
                    }
                }
                else{
                    slow++;
                }
            }
        }
};

int main(){
    MoveZeros obj;
    int n;
    cout<<"Enter size: ";
    cin>>n;

    vector<int> nums(n);
    cout<<"Enter elements: ";
    for(int i = 0; i < n; i++){
        cin>>nums[i];
    }

    obj.move_zeros(nums);
    cout<<"Modified array: ";
    for(int num: nums){
        cout<<num<<" ";
    }

    return 0;
}