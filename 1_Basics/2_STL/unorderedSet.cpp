//unorderedset is similar to set but it does not stores element in sorted order
//lower_bound and upper_bound function not works here
//it does most of the operations in O(1) time complexity
#include<bits/stdc++.h>
using namespace std;

void print_unorderedset(){
    unordered_set<int> ust;
    ust.insert(23);
    ust.insert(65);
    ust.insert(34);
    ust.insert(645);
    ust.insert(43);
    ust.insert(27);
    ust.insert(45);
    ust.insert(94);
    ust.insert(39);
    ust.insert(54);

    cout<<"Initially the size of Unordered set: "<<ust.size()<<endl;
    cout<<"Elements of unordered set: "<<endl;
    for(int x: ust){
        cout<<x<<", ";
    }
    cout<<endl;

    auto it = ust.find(34);
    if(it != ust.end()){
        cout<<"34 Found in the set"<<endl;
    }
    else{
        cout<<"Not Found 34"<<endl;
    }

    ust.erase(39);
    cout<<"Is 39 exist in set: "<<ust.count(39)<<endl;

    cout<<"Is unordered set empty: "<<ust.empty()<<endl;
}

int main(){
    print_unorderedset();
    return 0;
}