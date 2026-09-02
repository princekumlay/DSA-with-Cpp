// list is a sequence container that allows non-contiguous memory allocation. It is implemented as a doubly linked list, which means that each element in the list contains a pointer to the previous and next element. This allows for efficient insertion and deletion of elements at any position in the list, as it does not require shifting elements like in a vector or array.
#include<bits/stdc++.h>
using namespace std;

void print_list(){
    // 1) Declaration and Initialization
    list<int> l1; // empty list of integers
    list<int> l2(5); //list of size 5, initialize with default values (0)
    list<int> l3(5, 10); //list of size 5, initialize with value 10
    list<int> l4 = {1, 2, 3, 4, 5}; //initialize with values

    // displaying the contents of the lists
    cout<<"l1: ";
    for(int i : l1) cout<<i<<" ";
    cout<<"\nl2: ";
    for(int i : l2) cout<<i<<" ";
    cout<<"\nl3: ";
    for(int i : l3) cout<<i<<" ";
    cout<<"\nl4: ";
    for(int i : l4) cout<<i<<" ";
    cout<<endl;

    // 2) adding elements to the list
    l1.push_back(10); //adds 10 to the end of the list
    l1.push_back(20); //adds 20 to the end of the list
    l1.emplace_back(30); //adds 30 to the end of the list, constructs the element in place, avoiding unnecessary copies.
    l1.push_front(5); //adds 5 to the front of the list
    l1.emplace_front(2); //adds 2 to the front of the list, constructs the element in place, avoiding unnecessary copies.

    cout<<"After adding elements to l1: ";
    for(int i : l1) cout<<i<<" ";
    cout<<endl;

    // 3) accessing elements
    cout<<"First element of l4: "<<l4.front()<<endl; //returns the first element
    cout<<"Last element of l4: "<<l4.back()<<endl; //returns the last element

    // 4) size and capacity
    cout<<"Size of l4: "<<l4.size()<<endl; //returns the number of elements in the list
    cout<<"Max size of l4: "<<l4.max_size()<<endl; //returns the maximum number of elements that the list can hold
    cout<<"Empty or not: "<<l4.empty()<<endl; //returns true if the list is empty, false otherwise
    cout<<"Is l4 sorted: "<<is_sorted(l4.begin(), l4.end())<<endl; //returns true if the list is sorted, false otherwise
    cout<<"Is l4 reversed sorted: "<<is_sorted(l4.rbegin(), l4.rend())<<endl; //returns true if the list is sorted in reverse order, false otherwise
    cout<<"Is l4 palindrome: "<<equal(l4.begin(), l4.end(), l4.rbegin())<<endl; //returns true if the list is a palindrome, false otherwise

    // 5) removing elements from the list
    l1.pop_back(); // removes the last element
    l1.pop_front(); // removes the first element
    cout<<"After removing elements from l1: ";
    for(int i : l1) cout<<i<<" ";
    cout<<endl;

    //list pair
    list<pair<int, string>> l5; //list of pairs
    l5.push_back({1, "Alice"});
    l5.push_back({2, "Bob"});
    l5.push_back({3, "Charlie"});

    cout<<"l5: ";
    for(const auto& p : l5) {
        cout<<"("<<p.first<<", "<<p.second<<") ";
    }
    cout<<endl;

    // 6) sorting the list
    l4.sort(); //sorts the list in ascending order
    cout<<"After sorting l4: ";
    for(int i : l4) cout<<i<<" ";
    cout<<endl;

    // 7) reversing the list
    l4.reverse(); //reverses the list
    cout<<"After reversing l4: ";
    for(int i : l4) cout<<i<<" ";
    cout<<endl;

    // 8) merging two lists
    list<int> l6 = {6, 7, 8, 9, 10};
    l4.merge(l6); //merges l6 into l4, both lists must be sorted before merging
    cout<<"After merging l6 into l4: ";
    for(int i : l4) cout<<i<<" ";
    cout<<endl;

    // 9) removing duplicates from the list
    l4.unique(); //removes consecutive duplicate elements from the list
    cout<<"After removing duplicates from l4: ";
    for(int i : l4) cout<<i<<" ";
    cout<<endl;
    

    // 10) clearing the list
    l4.clear(); //removes all elements from the list
    cout<<"After clearing l4: ";
    for(int i : l4) cout<<i<<" ";
    cout<<endl;

    // 11) iterating through the list using iterators
    cout<<"Iterating through l1 using iterators: ";
    for(auto it = l1.begin(); it != l1.end(); ++it) {
        cout<<*it<<" ";
    }
    cout<<endl;

    // 12) accessing the list elements using different methods
    cout<<"Accessing the list elements using different methods: "<<endl;
    cout<<"Using front(): "<<l1.front()<<endl;
    cout<<"Using back(): "<<l1.back()<<endl;
    cout<<"Using iterator: "<<*l1.begin()<<endl;
    cout<<"Using reverse iterator: "<<*l1.rbegin()<<endl;
    cout<<"Using const iterator: "<<*l1.cbegin()<<endl;
    cout<<"Using const reverse iterator: "<<*l1.crbegin()<<endl;
    cout<<"Using for_each with lambda: ";
    for_each(l1.begin(), l1.end(), [](int n){cout << n << " "; }); // applies the given lambda function to each element in the range [l1.begin(), l1.end()), printing each element followed by a space. Lambda functions are anonymous functions that can capture variables from their surrounding scope, allowing for concise and flexible code.
    cout<<endl;
    cout<<"Using for loop with auto: ";
    for(auto n : l1) cout<<n<<" "; // range-based for loop to iterate through the list, automatically deducing the type of n from the elements in l1.
    cout<<endl;
    cout<<"Using for loop with iterator: ";
    for(auto it = l1.begin(); it != l1.end(); ++it) cout<<*it<<" "; // traditional for loop using iterators to traverse the list, dereferencing the iterator to access the value of each element.
    cout<<endl;

    // 13) using list with custom objects
    struct Person {
        string name;
        int age;
        Person(string n, int a) : name(n), age(a) {}
    };
    list<Person> l7;
    l7.push_back(Person("Alice", 30));
    l7.push_back(Person("Bob", 25));
    l7.push_back(Person("Charlie", 35));

    cout<<"l7: ";
    for(const auto& p : l7) {
        cout<<"("<<p.name<<", "<<p.age<<") ";
    }
    cout<<endl;

    //14) using list with smart pointers
    // it is used when we want to manage the lifetime of objects automatically, ensuring that they are properly deleted when no longer needed, preventing memory leaks and dangling pointers.
    list<shared_ptr<Person>> l8;
    l8.push_back(make_shared<Person>("Alice", 30));
    l8.push_back(make_shared<Person>("Bob", 25));
    cout<<"l8: ";
    for(const auto& p : l8) {
        cout<<"("<<p->name<<", "<<p->age<<") ";
    }
    cout<<endl;

    // 15) using list with custom comparator
    // it is used when we want to define a custom sorting order for the elements in the list, allowing us to sort the elements based on specific criteria rather than the default comparison operators.
    list<int> l9 = {5, 2, 8, 1, 4};
    l9.sort([](int a, int b){ return a > b; }); // sorts the list in descending order using a custom comparator defined as a lambda function that returns true if a is greater than b.
    cout<<"After sorting l9 in descending order: ";
    for(const auto& n : l9) {
        cout<<n<<" ";
    }
    cout<<endl;

    // 
}


int main(){
    print_list();
    return 0;
}