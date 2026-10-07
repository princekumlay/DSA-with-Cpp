//linear search in an array for the target
#include<bits/stdc++.h>
using namespace std;

class LinearSearch{
    public:
        int linear_search(vector<int>& nums, int target){

            for(int i = 0; i < nums.size(); i++){
                
                if(nums[i] == target) return i;
            }

            return 0;
        }
};

int main(){
    LinearSearch obj;

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

    int index =  obj.linear_search(nums, target);

    (index) ? cout<<"Index of target: "<<index : cout<<"target not found: "<<endl;

    return 0;
}