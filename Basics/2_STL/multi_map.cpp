//it is totally similar to map the difference it can stores duplicate keys
//multimap does not support [] operator
#include<bits/stdc++.h>
using namespace std;

//printing elements of multimap
void print_ele_of_multimap(multimap<int, string> &mp, multimap<int, pair<string, string>> &mp1, multimap<pair<int, int>, int>& mp2){
    cout<<endl<<"Elements of multimap mp: "<<endl;
    for(auto ele: mp){
        cout<<"{"<<"("<<"key: "<<ele.first<<")"<<" -> "<<"("<<"value: "<<ele.second<<")"<<"}"<<"; ";
    }
    cout<<endl<<"-------------------------------------------------------"<<endl;
    cout<<endl<<"Elements of multimap mp1: "<<endl;
    for(auto ele: mp1){
        cout<<"{"<<"("<<"key: "<<ele.first<<")"<<" -> "<<"("<<"value: "<<ele.second.first<<", "<<ele.second.second<<")"<<"}"<<"; ";
    }
    cout<<endl<<"-------------------------------------------------------"<<endl;
    cout<<endl<<"Elements of multimap mp2: "<<endl;
    for(auto ele: mp2){
        cout<<"{"<<"("<<"key: "<<ele.first.first<<", "<<ele.first.second<<")"<<" -> "<<"("<<"value: "<<ele.second<<")"<<"}"<<"; ";
    }
    cout<<endl<<"-------------------------------------------------------"<<endl;
}

void multi_map(){
    //declaration-------------------------------------------------
    multimap<int, string> mp;//simple multimap key is integer and value is string
    multimap<int, pair<string, string>> mp1;//pair multimap key is integer and value is a pair of string
    multimap<pair<int, int>, int> mp2; // pair is a key here and int is a value

    //insertion of elements----------------------------------------
    mp.insert({1, "Hello"});//with insert
    mp.insert({1, "Namste"});//with insert
    mp.insert({1, "Haleluiya"});//with insert
    mp.insert({2, "Babu Bhaiya"});//with insert
    mp.emplace(3, "Kya haal chaal?");//with emplace
    mp.emplace(3, "or How are You?");//with emplace

    mp1.emplace(1, make_pair("Hi", "Sb badiya."));
    mp1.emplace(2, make_pair("tum batao", "ghar m sb thik?"));
    mp1.emplace(piecewise_construct, forward_as_tuple(3), forward_as_tuple("hn", "yha bi sb badiya"));
    mp1.insert({4, {"thik h to", "milte h fir jld hi"}});

    
    mp2.emplace(make_pair(1, 2), 74);
    mp2.emplace(make_pair(3, 4), 83);
    mp2.insert({{5, 6}, 97});

    //traversal of multimap
    print_ele_of_multimap(mp, mp1, mp2);
    
    cout<<"-> "<<"count() function to find key present or not: "<<mp.count(1)<<endl;//it returns the number of keys present in the multimap

    auto it = mp.find(1);//it returns the iterator to the first occurence of the key not for all
    if(it != mp.end()){
        cout<<"-> "<<"key exist and checked with find() function: "<<it->first<<" -> "<<it->second<<endl;
    }

    cout<<"-> "<<"equal_range() function: it return all the keys in a array form of key we are looking for"<<endl;
    auto range = mp.equal_range(1);//range.second points just after the last matching element
    cout<<"   ";
    for(auto it = range.first; it != range.second; it++){
        cout<<"{"<<it->first<<", "<<it->second<<"}"<<", ";
    }

    cout<<endl<<"-> "<<"lower_bound(1): "<<(mp1.lower_bound(1))->second.first<<"; "<<"upper_bound(3): "<<(mp1.upper_bound(3))->second.first<<endl;

    //erase() fucntion
    //we can use it directly or with the iterator
    // mp.erase(1);//direct - it delets all the occurence of key
    auto it1 = mp.find(1); //using iterator - it delete only single occurence or use while loop to delete all occurence
    if(it1 != mp.end()){
        mp.erase(it1);
    }

    //begin() function returns the first element because the multimap stored in a sorted orderd
    auto it2 = mp.begin();
    cout<<"-> "<<"begin() return the first element of map: "<<it2->first<<", "<<it2->second<<endl;

    //end() it points past the last element in the multimap
    auto it3 = mp.end();
    cout<<"-> "<<"end() pointing past the last ele "<<endl;

    //rbegin() - it returns the element with the largest key
    auto it4 = mp.rbegin();
    cout<<"-> "<<"rbegin() return largest key: "<<it4->first<<endl;

    //size() returns the number of total elements in the multimap
    cout<<"-> "<<"size() returns number of ele: "<<mp.size()<<endl;

    //empty() - checks map is empty of not
    cout<<"-> "<<"empty() checks of empty: "<<(mp.empty()?"empty":"not empty")<<endl;

    //clear() - remove all the elements 
    mp.clear();
    cout<<"-> "<<"cleared all the ele with clear() funtion: "<<(mp.empty()?"empty":"not empty")<<endl;

}

int main(){
    multi_map();
    return 0;
}