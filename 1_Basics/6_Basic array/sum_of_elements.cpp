#include<bits/stdc++.h>
using namespace std;

class SumOfElements{
    public:
        int sum(vector<int>& arr){
            int sum = 0;

            for(int n : arr){
                sum += n;
            }

            return sum;
        }
};

int main(){
    SumOfElements obj;
    int n;
    cout<<"Enter size of vector: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter elements: ";

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    cout<<"Sum of elements: "<<obj.sum(arr)<<endl;
    return 0;
}