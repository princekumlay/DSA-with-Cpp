// Deque (Double-ended queue) in C++ STL
// deque is a sequence container that allows fast insertion and deletion at both its beginning and its end. It is implemented as a dynamic array of fixed-size arrays, which allows for efficient memory usage and performance.
#include <bits/stdc++.h>
using namespace std;

int main() {
    // all initialization methods for deque
    deque<int> d1; // empty deque of integers
    deque<int> d2(5); // deque of size 5, initialized with default values (0) 
    deque<int> d3(5, 10); // deque of size 5, initialized with value 10
    deque<int> d4 = {1, 2, 3, 4, 5}; // initialized with values
    deque<int> d5(d4.begin(), d4.end()); // initialized with values from another deque using iterators
    deque<int> d6(d4); // initialized with values from another deque using copy constructor
    deque<int> d7 = d4; // initialized with values from another deque using assignment operator
   
    
    // Insert elements at the beginning and end
    // all methods of inserting elements in deque
    d2.emplace_front(4);
    d1.push_back(1);
    d1.push_front(2);
    d1.push_back(3);
    d1.push_front(4);
    
    // Display elements
    cout << "Elements in deque d1: ";
    for (int x : d1) {
        cout << x << " ";
    }
    cout << endl;
    cout << "Elements in deque d2: ";
    for (int x : d2) {
        cout << x << " ";
    }
    cout << endl;
    cout << "Elements in deque d3: ";
    for (int x : d3) {
        cout << x << " ";
    }
    cout << endl;
    cout << "Elements in deque d4: ";
    for (int x : d4) {
        cout << x << " ";
    }
    cout << endl;
    cout << "Elements in deque d5: ";
    for (int x : d5) {
        cout << x << " ";
    }
    cout << endl;
    cout << "Elements in deque d6: ";
    for (int x : d6) {
        cout << x << " ";
    }
    cout << endl;
    cout << "Elements in deque d7: ";
    for (int x : d7) {
        cout << x << " ";
    }
    cout << endl;
    
    // Remove elements from the beginning and end
    d1.pop_back();
    d1.pop_front();
    
    // Display remaining elements
    cout << "Remaining elements: ";
    for (int x : d1) {
        cout << x << " ";
    }
    cout << endl;
    
    return 0;
}