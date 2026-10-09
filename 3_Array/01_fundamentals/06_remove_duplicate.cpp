//we the put all the unique elements in the begining of the array don't care what remains at the last
#include<bits/stdc++.h>
using namespace std;

class RemoveDuplicate{
    private:
        int removeDuplicate(vector<int>& nums, int n){
            if(n <= 1) return n;

            int i = 0;
            for(int j = 1; j < n; j++){

                if(nums[j] != nums[i]){
                    nums[i + 1] = nums[j];
                    i++;
                }

            }

            return i + 1;
        }

    public:
        int uniqueSize(vector<int>& nums){
            return removeDuplicate(nums, nums.size());
        }
};

int main(){
    RemoveDuplicate obj;
    int n; 
    cout<<"Enter size: ";
    cin>>n;

    vector<int> nums(n);
    cout<<"Enter elements: ";
    for(int i = 0; i < n; i++){
        cin>>nums[i];
    }

    cout<<"Unique array size: "<<obj.uniqueSize(nums)<<endl;

    return 0;
}