//hasing is a technique used to convert any size of data into a fixed size value called hash
//for "integers" we can declare array of 10^6 locally and 10^7 globally
//for "string and boolean" we can declare up to 10^8
#include<bits/stdc++.h>
using namespace std;

class Hash_class{
    public:
        void hash_func(int arr[], int q, int n){
            int hash[13] = {0};

            for(int i = 0; i < n; i++){
                hash[arr[i]]++;
            }

            cout<<"enter your quaries: ";
            while(q--){
                int num;
                cin>>num;

                cout<<hash[num]<<endl;
            }
        }
};

int main(){
    Hash_class obj;
    int n;
    cout<<"Enter size of arr should be less than 13: ";
    cin>>n;
    int arr[n];
    cout<<"Enter ele of arr: ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int q;
    cout<<"Enter queries: ";
    cin>>q;
    obj.hash_func(arr, q, n);
    return 0;
}