// vector is a sequence container that encapsulates dynamic size arrays. It is part of the C++ Standard Library and provides various functionalities to manage a collection of elements. The vector class template is defined in the <vector> header and supports operations such as insertion, deletion, and access to elements.
#include <bits/stdc++.h>
using namespace std;

// Function to demonstrate the usage of vector
void print_vector(){

    // 1) Declaration and Initialization
    vector<int> v1; // Empty vector of integers
    vector<int> v2(5); // Vector of size 5, initialized with default values (0)
    vector<int> v3(5, 10); // Vector of size 5, initialized with value 10
    vector<int> v4 = {1, 2, 3, 4, 5}; // Vector initialized with a list of values

    // Displaying the contents of the vectors
    cout << "v1: ";
    for (int i : v1) cout << i << " ";
    cout << "\nv2: ";
    for (int i : v2) cout << i << " ";
    cout << "\nv3: ";
    for (int i : v3) cout << i << " ";
    cout << "\nv4: ";
    for (int i : v4) cout << i << " ";
    cout << endl;

    // 2) Adding elements to the vector
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    //there is another method to add elements to the vector using emplace_back() which constructs the element in place, avoiding unnecessary copies.
    v1.emplace_back(40);

    //vector also provides the insert() method to add elements at a specific position. For example, to insert an element at the beginning of v1, you can use:
    v1.insert(v1.begin(), 5); // Inserts 5 at the beginning of v1
    v1.insert(v1.begin() + 2, 2, 15); // Inserts 15 at index 2 of v1


    cout << "After adding elements to v1: ";
    for (int i : v1) cout << i << " ";
    cout << endl;

    // 3) Accessing elements
    cout << "First element of v4: " << v4.front() << endl;
    cout << "Last element of v4: " << v4.back() << endl;
    cout << "Element at index 2 of v4: " << v4.at(2) << endl;

    // 4) Size and Capacity
    cout << "Size of v4: " << v4.size() << endl;// returns the number of elements in the vector
    cout << "Capacity of v4: " << v4.capacity() << endl;// returns the size of the storage space currently allocated for the vector, expressed in terms of elements. This capacity is not necessarily equal to the vector size. It can be equal or greater, with the extra space allowing to accommodate for growth without the need to reallocate on each insertion.

    // 5) Removing elements from the vector
    v1.pop_back(); // Removes the last element
    cout << "After removing last element from v1: ";
    for (int i : v1) cout << i << " ";
    cout << endl;

    //vector pair
    vector<pair<int, string>> v5; // Vector of pairs
    v5.push_back({1, "one"});
    v5.emplace_back(2, "two"); // Using emplace_back to add a pair
    
    cout<<"v5 is the pair vector: ";
    for(const auto& p : v5){
        cout<<"{"<<p.first<<", "<<p.second<<"} ";
    }
    cout << endl;

    //copy of a vector
    vector<int> v6(v4); // copy constructor to create a copy of v4
    cout << "v6 (copy of v4): ";
    for (int i : v6) cout << i << " ";
    cout << endl;

    //** ITERATING THROUGH VECTORS USING ITERATORS */
    //** it = v.end() points to the position just beyond the last element */
    cout << "Iterating through v4 using iterators: ";
    vector<int>::iterator i = v4.begin();
    i++;
    cout<<*i<<" "<<endl;

    for(vector<int>::iterator it = v4.begin(); it != v4.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    for(auto it = v4.begin(); it != v4.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    //accessing the vector elements using different methods
    cout<<"Accessing the vector elements using different methods: "<<endl;
    cout<<"Using at(): "<<v4.at(1)<<endl;
    cout<<"Using operator[]: "<<v4[1]<<endl;
    cout<<"Using front(): "<<v4.front()<<endl;
    cout<<"Using back(): "<<v4.back()<<endl;
    cout<<"Using data(): "<<*(v4.data()+1)<<endl; // data() returns a pointer to the underlying array serving as element strorage. You can use pointer arithmetic to access elements.
    cout<<"Using iterators: "<<*(v4.begin()+1)<<endl; // using iterator to access the second element
    cout<<"Using reverse iterators: "<<*(v4.rbegin()+3)<<endl; // using reverse iterator to access the second element from the end
    cout<<"Using const iterators: "<<*(v4.cbegin() + 1)<<endl; // iterators that do not allow modification of the elements they point to. cbegin() returns a const_iterator to the beginning of the vector.
    cout<<"Using const reverse iterators: "<<*(v4.crbegin() + 3)<<endl; // const reverse iterator to the end of the vector, allowing read-only access in reverse order.
    cout<<"Using for_each with lambda: ";
    for_each(v4.begin(), v4.end(), [](int n){cout << n << " "; }); //it applies the given lambda function to each element in the range [v4.begin(), v4.end()), printing each element followed by a space. Lambda functions are anonymous functions that can capture variables from their surrounding scope, allowing for concise and flexible code.
    cout<<endl;


    //ERASE AND CLEAR
    v4.erase(v4.begin() + 2); //Erase the element at index 2
    cout<<"After erasing the element at index 2 from v4: ";
    for(int i : v4) cout <<i<<" ";
    cout<<endl;

    v4.clear(); // clear all the elements from the vector, making it empty. The capacity of the vector remains unchanged, but the size becomes 0.
    cout<<"After clearing v4, size: "<<v4.size()<<", capacity: "<<v4.capacity()<<endl;

    v4.shrink_to_fit(); //reduce the capacity of the vector to fit its size, potentially freeing unused memory. This is a non-binding request to reduce capacity() to size(). It depends on the implementation whether the request is fulfilled.
    cout<<"After shrink_to_fit, size: "<<v4.size()<<", capacity: "<<v4.capacity()<<endl;

    v4.reserve(10); //request the vector to increase its capacity to at least 10. If the current capacity is already greater than or equal to 10, this call has no effect. It is a non-binding request, and the implementation may choose to ignore it.
    cout<<"After reserve(10), size: "<<v4.size()<<", capacity: "<<v4.capacity()<<endl;

    v4 = {1, 2, 3, 4, 5}; // reassigning v4 with new values
    cout<<"After reassigning v4, size: "<<v4.size()<<", capacity    : "<<v4.capacity()<<endl;
}


int main(){
    print_vector();
    return 0;
}