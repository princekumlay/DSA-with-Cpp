#include<bits/stdc++.h>
using namespace std;

class ReverseArray{
    public:
        void reverse(vector<int>& arr){
            int n = arr.size();
            for(int i = 0; i < n / 2; i++){
                swap(arr[i], arr[n - i - 1]);
            }
        }
};

int main(){
    ReverseArray obj;
    int n;
    cout<<"Enter vector size: ";
    cin>>n;
    vector<int> arr(n);

    cout<<"Enter elemensts: ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    cout<<"Array initially: ";
    for(int n : arr){
        cout<<n<<" ";
    }
    cout<<endl;

    obj.reverse(arr);
    cout<<"Reversed array: ";
    for(int n : arr){
        cout<<n<<" ";
    }
    cout<<endl;
    return 0;
}