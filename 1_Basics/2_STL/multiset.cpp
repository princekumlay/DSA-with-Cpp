//it stores the multiple occurences of same element and on erasing that element it will erase all the occurences at once. To delete exact number of occurences we have to use find() function that will return iterator to the element that we want to delete and we can give the number of occurences in the same for deletion
//used when frequency of elements are needed
#include<bits/stdc++.h>
using namespace std;

void print_multiset(){
    multiset<int> mst;
    mst.insert(1);
    mst.insert(1);
    mst.insert(3);
    mst.insert(5);
    mst.insert(6);
    mst.insert(2);
    mst.insert(7);
    mst.insert(4);
    mst.insert(8);
    mst.insert(20);
    mst.insert(9);
    mst.insert(12);
    mst.insert(44);
    cout<<endl<<"Size of the multiset initially: "<<mst.size()<<endl;

    for(int x : mst) cout<<x<<", ";
    cout<<endl;
    mst.erase(mst.find(1), next(mst.find(1), 2));
    cout<<"After deleting all occurences of 1: "<<endl;
     for(int x : mst) cout<<x<<", ";
    cout<<endl;

}

int main(){
    print_multiset();
    return 0;
}