// pair stores two heterogeneous objects as a single unit. A pair is a specific case of a tuple with two elements. The first element is referred to as the "first" and the second element as the "second".
#include<bits/stdc++.h>
using namespace std;

void print_pair(){

    //Direct Initialization
    pair<int, int> p1 = {1, 2};
    cout<<p1.first<<" "<<p1.second<<endl;

    pair<string, int> p2 = {"Kailash", 22};
    cout<<p2.first<<" "<<p2.second<<endl;

    pair<int, pair<int, int>> p3 = {1, {2, 3}};
    cout<<p3.first<<" "<<p3.second.first<<" "<<p3.second.second<<endl;

    pair<int, int> arr[] = {{1, 2}, {2, 3}, {3, 4}};
    cout<<arr[0].first<<" "<<arr[0].second<<endl;

    
    //Initialization using make_pair
    pair<int, int> p4 = make_pair(1, 2);
    cout<<p4.first<<" "<<p4.second<<endl;

    auto p5 = make_pair(100, 200);
    cout<<p5.first<<" "<<p5.second<<endl;
    auto p6 = make_pair<string, int>("Bob", 40);
    cout<<p6.first<<" "<<p6.second<<endl;

    // // 3) Structured binding (C++17)
    //  pair<int, int> p7{10, 20};
    // pair<string, int> p8{"Kailash", 23};

    // auto [x, y] = p7;
    // auto [name, age] = p8;

    // cout << "x=" << x << " y=" << y << "\n";
    // cout << "name=" << name << " age=" << age << "\n";


    // 5) Comparison
    pair<int, int> a{1, 2};
    pair<int, int> b{5, 3};

    cout << boolalpha;
    cout << "a == b: " << (a == b) << "\n";
    cout << "a != b: " << (a != b) << "\n";
    cout << "a < b: " << (a < b) << "\n";
    cout << "a > b: " << (a > b) << "\n";
    cout << "a <= b: " << (a <= b) << "\n";
    cout << "a >= b: " << (a >= b) << "\n";


    // Lexicographic order:
    // Compare .first first, then .second if .first are equal.
    pair<int, int> c{0, 100};
    pair<int, int> d{1, 0};
    cout << "c < d: " << (c < d) << "\n"; // true because 0 < 1


    // 6) Swap
    pair<int, int> p9{5, 6};
    pair<int, int> p10{7, 8};
    swap(p9, p10);
    cout << "p9 after swap: " << p9.first << "," << p9.second << "\n";
    cout << "p10 after swap: " << p10.first << "," << p10.second << "\n";


    // 7) tie for unpacking / comparisons
    int u, v;
    tie(u, v) = p1;
    cout << "u=" << u << " v=" << v << "\n";


    // ignore one element
    string name;
    tie(name, ignore) = p2;
    cout << "name from p2.first=" << name << "\n";


    // tie for pair-wise comparison
    int a1 = 1, b1 = 2;
    int a2 = 1, b2 = 3;
    if (tie(a1, b1) < tie(a2, b2)) {
        cout << "tie(a1,b1) is less than tie(a2,b2)\n";
    }
}

int main(){
    print_pair();
    return 0;
}