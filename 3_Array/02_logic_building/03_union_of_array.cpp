// we have to find the union of two sorted array's
#include <bits/stdc++.h>
using namespace std;

class UnionOfArray
{
public:
    vector<int> unionOfArray(vector<int> &nums1, vector<int> &nums2)
    {
        int n1 = nums1.size();
        int n2 = nums2.size();
        vector<int> unionArr;

        int i = 0, j = 0;
        // push unique elements to unionArr
        while (i < n1 && j < n2)
        {

            if (nums1[i] <= nums2[j])
            {
                if (unionArr.size() == 0 || unionArr.back() != nums1[i])
                {
                    unionArr.push_back(nums1[i]);
                }
                i++;
            }
            else
            {
                if (unionArr.size() == 0 || unionArr.back() != nums2[j])
                {
                    unionArr.push_back(nums2[j]);
                }
                j++;
            }
        }

        // if elements left in nums1
        while (i < n1)
        {
            if (unionArr.size() == 0 || unionArr.back() != nums1[i])
            {
                unionArr.push_back(nums1[i]);
            }
            i++;
        }

        // if elements left in nums2
        while (j < n2)
        {
            if (unionArr.size() == 0 || unionArr.back() != nums2[j])
            {
                unionArr.push_back(nums2[j]);
            }
            j++;
        }

        return unionArr;
    }
};

int main(){
    UnionOfArray arrayUnion;
    int n1, n2;
    cout<<"Enter size of array 1 and array 2: ";
    cin>>n1>>n2;

    vector<int> nums1(n1), nums2(n2);
    cout<<"Array elements should be in sorted order: "<<endl;

    cout<<"Enter array 1 elements: ";
    for(int i = 0; i < n1; i++){
        cin>>nums1[i];
    }

    cout<<"Enter array 2 elements: ";
    for(int i = 0; i < n2; i++){
        cin>>nums2[i];
    }

    vector<int> unionArray = arrayUnion.unionOfArray(nums1, nums2);

    cout<<"Union of two sorted array: ";
    for(int num: unionArray){
        cout<<num<<" ";
    }
    cout<<endl;

    return 0;
}