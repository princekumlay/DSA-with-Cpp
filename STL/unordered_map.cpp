// unordered_map stores unique keys but not in sorted ordered
// its time searching/insertion performs in O(1) time except in collision elements in the for the same key or bucket
#include <bits/stdc++.h>
using namespace std;

struct PairHash
{
    size_t operator()(const pair<int, int> &v) const noexcept
    {
        size_t h1 = hash<int>{}(v.first);
        size_t h2 = hash<int>{}(v.second);
        return h1 ^ (h2 + 0x9e3779b9 + (h1 << 6) + (h1 >> 2));
    }
};

void unorderedMap()
{
    // declaration-------------------------------------------------
    unordered_map<int, string> ump;                    // simple umap key is integer and value is string
    unordered_map<int, pair<string, string>> ump1;     // pair umap key is integer and value is a pair of string
    unordered_map<pair<int, int>, int, PairHash> ump2; // pair is a key here and int is a value

    // insertion of elements----------------------------------------
    ump[1] = "Hello";               // direct
    ump.insert({2, "Babu Mosaye"}); // with insert
    ump.emplace(3, "Namaste");      // with emplace

    ump1[1] = {"Hey", "kem cho"};
    ump1.emplace(2, make_pair("Hi", "Mja Ma"));
    ump1.emplace(piecewise_construct, forward_as_tuple(3), forward_as_tuple("Prince", "Software Engineer"));
    ump1.insert({4, {"Kailash", "Developer"}});

    ump2[{1, 2}] = 34;
    ump2.emplace(make_pair(3, 4), 83);
    ump2.insert({{5, 6}, 97});

    // printing size of maps -------------------------------------------
    cout << "Size of normal map ump: " << ump.size() << ", Size of Pair map ump1: " << ump1.size() << ", Size of pair map ump2: " << ump2.size() << endl;

    // printing elements of maps----------------------------------------
    cout << "Elements of normal umap: " << endl;
    for (auto it = ump.begin(); it != ump.end(); ++it)
    {
        cout << "(" << it->first << " -> " << it->second << ")" << ", ";
    }
    cout << endl
         << endl;

    cout << "Elements of pair map ump1: " << endl;
    for (auto p : ump1)
    {
        cout << "{" << p.first << " -> " << "(" << p.second.first << ", " << p.second.second << ")" << "}" << ", ";
    }
    cout << endl
         << endl;

    cout << "Elements of pair map ump2: " << endl;
    for (auto p : ump2)
    {
        cout << "{" << "(" << p.first.first << ", " << p.first.second << ")" << " -> " << p.second << "}" << ", ";
    }
    cout << endl
         << endl;

    // different operations
    cout << "Element access using ump[key]: " << ump[2] << endl;
    cout << "Element access using ump.at(key): " << ump.at(3) << endl;

    auto it = ump.find(1);
    if (it != ump.end())
    {
        cout << "Element exist for key: " << it->second << endl;
    }
    else
    {
        cout << "Element does'nt exist for key" << endl;
    }

    // cout<<"Lower bound function ump.lower_bound(k): "<<(ump.lower_bound(2))-> second<<endl<<endl;
}

int main()
{
    unorderedMap();
    return 0;
}