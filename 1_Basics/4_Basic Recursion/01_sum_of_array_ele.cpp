#include<bits/stdc++.h>
using namespace std;

class SumOfArray{
    private:
        int sum(vector<int> &arr, int index){
            if(index == arr.size()) return 0;
            return arr[index] + sum(arr, index + 1);
        }

    public:
        int sum_of_array(vector<int> &arr){
            return sum(arr, 0);
        }
};

int main(){
    SumOfArray obj;
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter elements: ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cout<<"Sum of array elements: "<<obj.sum_of_array(arr)<<endl;
    return 0;
}