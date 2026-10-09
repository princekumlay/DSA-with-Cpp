//find largest element in the array
#include<bits/stdc++.h>
using namespace std;

class LargestEle{
    public:
        int largestEle(vector<int>& nums){
            int largest = INT_MIN;

            for(int i = 0; i < nums.size(); i++){
                if(nums[i] > largest) largest = nums[i];
            }

            return largest;
        }
};

int main(){
    LargestEle obj;
    int n;
    cout<<"Enter size: ";
    cin>>n;

    vector<int> nums(n);
    cout<<"Enter elements: ";
    for(int i = 0; i < n; i++){
        cin>>nums[i];
    }

    cout<<"Largest Element: "<<obj.largestEle(nums)<<endl;

    return 0;
}