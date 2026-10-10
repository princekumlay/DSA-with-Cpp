//we have to find the missing num from 0 to n
#include<bits/stdc++.h>
using namespace std;

class FindMissing{
    public:
        int findMissing(vector<int>& nums){
            int n = nums.size();
            int xor1 = 0, xor2 = 0;

            for(int i = 0; i < n; i++){
                xor1 ^= nums[i];
                xor2 ^= (i + 1);
            }

            return xor1 ^ xor2;
        }
};

int main(){
    FindMissing obj;
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    vector<int> nums(n);
    cout<<"Enter numbers form 0 to n except any one of them: ";
    for(int i = 0; i < n; i++){
        cin>>nums[i];
    }

    cout<<"Missing num is: "<<obj.findMissing(nums)<<endl;

    return 0;
}