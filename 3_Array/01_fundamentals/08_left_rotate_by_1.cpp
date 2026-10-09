//rotate array elements left by 1
#include<bits/stdc++.h>
using namespace std;

class LeftRotate{
    public:
        void rotate_by_1(vector<int>& nums){
            int n = nums.size();
            if(n <= 1) return;

            int temp = nums[0];

            for(int i = 1; i < n; i++){
                nums[i - 1] = nums[i];
            }

            nums[n - 1] = temp;
        }
};

int main(){
    LeftRotate obj;
    int n;
    cout<<"Enter size: ";
    cin>>n;

    vector<int> nums(n);
    cout<<"Enter elements: ";
    for(int i = 0; i < n; i++){
        cin>>nums[i];
    }

    obj.rotate_by_1(nums);
    cout<<"Rotated array is: ";
    for(int num: nums){
        cout<<num<<" ";
    }
    cout<<endl;

    return 0;
}