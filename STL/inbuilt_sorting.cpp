//c++ provides a sorting that takes O(NlonN) time.
#include<bits/stdc++.h>
using namespace std;

//comp()
bool comp(pair<int, int> a, pair<int, int> b){
    if(a.second < b.second) return true;//do nothing
    if(a.second > b.second) return false;//swap

    //when second elements are equal
    if(a.first > b.first) return true;
    return false;
}

int main(){
    int a[] = {2, 5, 5, 1, 6, 8, 3};
    pair<int, int> b[] = {{2, 5}, {2, 3}, {1, 4}, {7, 5}, {8, 0}, {4, 9}, {3, 2}, {8, 3}};

    cout<<endl<<"Array a[] before sorting: "<<endl;
    for(int n: a){
        cout<<n<<",  ";
    }
    
    sort(a, a + 7);
    cout<<endl<<"Array a[] after sorting in acending order: "<<endl;
    for(int n: a){
        cout<<n<<",  ";
    }

    // sort(a, a + 7, [](int a, int b){return a > b;});//this lambda is for more control on sorting
    sort(a, a + 7, greater<int>());
    cout<<endl<<"Array a[] after sorting in decending order: "<<endl;
    for(int n: a){
        cout<<n<<",  ";
    }
    cout<<endl;
    
    cout<<"Pair Array b[] before sorting: "<<endl;
    for(auto n: b){
        cout<<"("<<n.first<<", "<<n.second<<")"<<"; ";
    }
    cout<<endl;

    sort(b, b + 8, comp);
    cout<<"Pair Array b[] after sorting using custorm comparator function: "<<endl;
    for(auto n: b){
        cout<<"("<<n.first<<", "<<n.second<<")"<<"; ";
    }
    cout<<endl<<endl;
    return 0;
}