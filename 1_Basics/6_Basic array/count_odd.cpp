#include<bits/stdc++.h>
using namespace std;

class CountOdds{
    public:
        int oddNums(vector<int>& arr){
            int count = 0;

            for(int n : arr){
                if(n % 2 != 0) count++;
            }

            return count;
        }
};

int main(){
    CountOdds obj;
    int n;
    cout<<"Enter size of vector: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter elements: ";

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    cout<<"Odd numbers count is: "<<obj.oddNums(arr)<<endl;
    return 0;
}