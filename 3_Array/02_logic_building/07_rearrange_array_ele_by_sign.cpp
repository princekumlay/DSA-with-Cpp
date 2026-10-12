//we have to rearrange the array elements by the sign : all the +ve elements are on the even indexes, all -ve elements are on the odd indexes and left over elements either +ve or -ve are put at the end in their respective order
#include<bits/stdc++.h>
using namespace std;

class RearrangeArray{
    public:
        void rearrange(vector<int>& nums){
            int n = nums.size();
            vector<int> pos, neg;

            //put +ve and -ve elements in their respective vector
            for(int i = 0; i < n; i++){
                
                if(nums[i] > 0){
                    pos.push_back(nums[i]);
                }
                else{
                    neg.push_back(nums[i]);
                }

            }

            //if +ve elements are more than -ve
            if(pos.size() > neg.size()){

                for(int i = 0; i < neg.size(); i++){
                    nums[2 * i] = pos[i]; //+ve at even indexes
                    nums[2 * i + 1] = neg[i]; //-ve at odd indexes
                }
                //for left over +ve elements
                int index = neg.size() * 2;
                for(int i = neg.size(); i < pos.size(); i++){
                    nums[index++] = pos[i];
                }
            }
            else{//if -ve elements are more or equal to +ve elements

                for(int i = 0; i < pos.size(); i++){
                    nums[2 * i] = pos[i]; //+ve at even indexes
                    nums[2 * i + 1] = neg[i]; //-ve at odd indexes
                }
                //for left over -ve elements
                int index = pos.size() * 2;
                for(int i = pos.size(); i < neg.size(); i++){
                    nums[index++] = neg[i];
                }
            }
            
        }
};

int main(){
    RearrangeArray rearrangeArr;
    int n;
    cout<<"Ente size: ";
    cin>>n;
    
    vector<int> nums(n);
    cout<<"Enter array elements-> they can be +ve, -ve or both: ";
    for(int i = 0; i < n; i++){
        cin>>nums[i];
    }

    rearrangeArr.rearrange(nums);
    cout<<"Array after rearranging its elements besed on the sign: "<<"{";
    for(int num: nums){
        cout<<num<<" ";
    }
    cout<<"}"<<endl;

    return 0;
}