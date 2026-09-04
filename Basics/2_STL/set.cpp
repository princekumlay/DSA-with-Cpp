//it stores in sorted order and unique
//it is implemented as a tree
//insertion, deletion and searching all are done in O(lon(n))
#include<bits/stdc++.h>
using namespace std;

void print_set(){
    set<int> st;
    st.insert(1);
    st.insert(1);
    st.insert(4);
    st.insert(6);
    st.insert(2);
    st.insert(8);
    st.insert(9);
    st.insert(34);
    cout<<endl<<"Size of set initially: "<<st.size()<<endl;

    for(int x: st) cout<<x<<"; ";
    cout<<endl;

    cout<<"Is 6 present: "<<st.count(6)<<endl;
    cout<<"Delete 9 from set: "<<st.erase(9)<<endl;

    cout<<"Elements after deletion: "<<endl;
    for(int x: st) cout<<x<<"; ";
    cout<<endl;
    auto it = st.find(34);
    cout<<"st.find(34) returns the iterator to the element: "<<*it<<endl;


}

int main(){
    print_set();
    return 0;
}