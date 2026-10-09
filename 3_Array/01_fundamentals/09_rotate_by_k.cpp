#include<bits/stdc++.h>
using namespace std;

class RotateArray{
    private:
        void reverseEle(vector<int>& nums, int s, int e){
           while(s < e){
            swap(nums[s++], nums[e--]);
           } 
        }

    public:
        void rotateByK(vector<int>& nums, int k){
            int n = nums.size();
            if(n <= 1) return;

            k %= n;

            //reverse entire array
            reverseEle(nums, 0, n - 1);

            //reverse first k elements 
            reverseEle(nums, 0, k - 1);

            //reverse n - k elements
            reverseEle(nums, k, n - 1);
        }
};

int main(){
    RotateArray obj;
    int n;
    cout<<"Enter size: ";
    cin>>n;

    vector<int> nums(n);
    cout<<"Enter elements: ";
    for(int i = 0; i < n; i++){
        cin>>nums[i];
    }

    int k;
    cout<<"Enter how much places should be rotate: ";
    cin>>k;

    obj.rotateByK(nums, k);
    cout<<"Rotated array: ";
    for(int num: nums){
        cout<<num<<" ";
    }
    cout<<endl;

    return 0;
}