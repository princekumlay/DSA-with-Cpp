//map is a container that stores "key" and "value" pair to uniquely identify each and every element
//every key is unique and stored in sorted order
//implemented as Red Black Tree and its operations take O(logn) time due to sorting
//every element is a pair <key, value>
#include<bits/stdc++.h>
using namespace std;

void print_map(){
    //declaration-------------------------------------------------
    map<int, string> mp;//simple map key is integer and value is string
    map<int, pair<string, string>> mp1;//pair map key is integer and value is a pair of string
    map<pair<int, int>, int> mp2; // pair is a key here and int is a value

    //insertion of elements----------------------------------------
    mp[1] = "Hello";//direct
    mp.insert({2, "Babu Mosaye"});//with insert
    mp.emplace(3, "Namaste");//with emplace

    mp1[1] = {"Hey", "kem cho"};
    mp1.emplace(2, make_pair("Hi", "Mja Ma"));
    mp1.emplace(piecewise_construct, forward_as_tuple(3), forward_as_tuple("Prince", "Software Engineer"));
    mp1.insert({4, {"Kailash", "Developer"}});

    mp2[{1, 2}] = 34;
    mp2.emplace(make_pair(3, 4), 83);
    mp2.insert({{5, 6}, 97});

    //printing size of maps -------------------------------------------
    cout<<"Size of normal map mp: "<<mp.size()<<", Size of Pair map mp1: "<<mp1.size()<<", Size of pair map mp2: "<<mp2.size()<<endl;

    //printing elements of maps----------------------------------------
    cout<<"Elements of normal map: "<<endl;
    for(auto it = mp.begin(); it != mp.end(); ++it){
        cout<<"("<<it->first<<" -> "<<it->second<<")"<<", ";
    }
    cout<<endl<<endl;

    cout<<"Elements of pair map mp1: "<<endl;
    for(auto p: mp1){
        cout<<"{"<<p.first<<" -> "<<"("<<p.second.first<<", "<<p.second.second<<")"<<"}"<<", ";
    }
    cout<<endl<<endl;

    cout<<"Elements of pair map mp2: "<<endl;
    for(auto p: mp2){
        cout<<"{"<<"("<<p.first.first<<", "<<p.first.second<<")"<<" -> "<<p.second<<"}"<<", ";
    }
    cout<<endl<<endl;

    //different operations
    cout<<"Element access using mp[key]: "<<mp[2]<<endl;
    cout<<"Element access using mp.at(key): "<<mp.at(3)<<endl;

    auto it = mp.find(1);
    if(it != mp.end()){
        cout<<"Element exist for key: "<<it->second<<endl;
    }
    else{
        cout<<"Element does'nt exist for key"<<endl;
    }

    cout<<"Lower bound function mp.lower_bound(k): "<<(mp.lower_bound(2))-> second<<endl<<endl;

}

int main(){
    print_map();
    return 0;
}