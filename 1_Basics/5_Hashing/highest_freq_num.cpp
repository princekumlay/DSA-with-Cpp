#include<bits/stdc++.h>
using namespace std;

class HighestOccuringNUm{
    public:
        int Num(vector<int>& arr){
            if(arr.empty()) return -1;
            
            map<int, int> freq;

            for(auto num : arr){
                freq[num]++;
            }

            int count = 0;
            int num;
            for(auto it : freq){
                if(it.second > count){
                    num = it.first;
                    count = it.second;
                }
            }

            return num;
        }
};

int main(){
    HighestOccuringNUm obj;
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    
    vector<int> arr(n);
    cout<<"Enter array elements: ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    cout<<"Highest occuring element: "<<obj.Num(arr)<<endl;
    return 0;
}