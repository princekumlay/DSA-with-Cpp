//this STL function gives the min and max element of given data
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {5, 28, 92, 73, 62, 83, 63, 92};
    cout<<"minimum element: "<<*(min_element(v.begin(), v.end()))<<endl;
    cout<<"maximum element: "<<*(max_element(v.begin(), v.end()))<<endl;
    return 0;
}