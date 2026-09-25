#include<bits/stdc++.h>
using namespace std;

class SecondHighest{
    public:
        int Number(vector<int>& arr){
            int n = arr.size();
            if(n <= 1) return -1;
           
            map<int, int> freq;

            //frequency of every distinct num
            for(int n : arr){
                freq[n]++;
            }

            int max = -1, secondMax = -1;
            int frequent = -1, secondFrequent = - 1;

            for(auto& it : freq){
                int num = it.first;
                int count = it.second;

                if(count > frequent){
                    secondFrequent = frequent;
                    secondMax = max;

                    frequent = count;
                    max = num;
                }
                else if(count < frequent && count > secondFrequent){
                    secondFrequent = count;
                    secondMax = num;
                }
            }

            return secondFrequent == -1 ? -1 : secondMax;
        }
};

int main(){
    SecondHighest obj;
    int n;
    cout<<"Enter size of vector: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter elements: ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    cout<<"Second most frequent num: "<<obj.Number(arr)<<endl;
    return 0;
}