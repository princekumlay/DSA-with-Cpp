//intersection of two sorted arrays
#include<bits/stdc++.h>
using namespace std;

class IntersectionOfArray{
    public:
        vector<int> arrayIntersection(vector<int>& nums1, vector<int>& nums2){
            int n1 = nums1.size();
            int n2 = nums2.size();

            vector<int> intersection;
            int i = 0, j = 0;
            while(i < n1 && j < n2){
                //if nums1 element is smaller, exclude it
                if(nums1[i] < nums2[j]) i++;
                //if nums2 element is smaller, exclude it
                else if(nums2[j] < nums1[i]) j++;
                //if nums1 and nums2 element is equal, include it
                else{
                    intersection.push_back(nums1[i]);
                    i++;
                    j++;
                }
            }

            return intersection;
        }
};

int main(){
    IntersectionOfArray arrayIntsec;
    int n1, n2;
    cout<<"Enter array 1 and arra 2 size: ";
    cin>>n1>>n2;

    vector<int> nums1(n1), nums2(n2);
    cout<<"Enter array elements in sorted order: "<<endl;

    cout<<"Enter array 1 elements: ";
    for(int i = 0; i < n1; i++){
        cin>>nums1[i];
    }

    cout<<"Enter array 2 elements: ";
    for(int i = 0; i < n2; i++){
        cin>>nums2[i];
    }

    vector<int> result = arrayIntsec.arrayIntersection(nums1, nums2);
    cout<<"Intersection of two sorted arrays: ";
    for(int num: result){
        cout<<num<<" ";
    }
    cout<<endl;

    return 0;
}