# DSA with C++

This repository is a collection of C++ practice programs focused on:
- Pattern printing
- Standard Template Library (STL)
- Basic Data Structures and container usage

It is organized into two main sections:
- `Patterns/` for pattern-based exercises
- `STL/` for C++ STL container and algorithm examples

---

## Project Structure

```text
DSA with C++/
├── README.md
├── template.cpp
├── Patterns/
│   ├── pattern1.cpp
│   ├── pattern2.cpp
│   ├── pattern3.cpp
│   ├── pattern4.cpp
│   ├── pattern5.cpp
│   ├── pattern6.cpp
│   ├── pattern7.cpp
│   ├── pattern8.cpp
│   ├── pattern9.cpp
│   ├── pattern10.cpp
│   ├── pattern11.cpp
│   ├── pattern12.cpp
│   ├── pattern13.cpp
│   ├── pattern14.cpp
│   ├── pattern15.cpp
│   ├── pattern16.cpp
│   ├── pattern17.cpp
│   ├── pattern18.cpp
│   ├── pattern19.cpp
│   ├── pattern20.cpp
│   ├── pattern21.cpp
│   └── pattern22.cpp
├── STL/
│   ├── README.md
│   ├── vector.cpp
│   ├── list.cpp
│   ├── stack.cpp
│   ├── queue.cpp
│   ├── deque.cpp
│   ├── pair.cpp
│   ├── set.cpp
│   ├── multiset.cpp
│   ├── map.cpp
│   ├── multi_map.cpp
│   ├── unordered_map.cpp
│   ├── unorderedSet.cpp
│   ├── priority_queue.cpp
│   ├── inbuilt_sorting.cpp
│   └── ...
└── template.cpp
```

---

## 1. Patterns Folder

The `Patterns/` folder contains C++ programs that print different pattern designs such as:
- Square patterns
- Triangle patterns
- Number patterns
- Star patterns

Example files:
- `Patterns/pattern1.cpp`
- `Patterns/pattern5.cpp`
- `Patterns/pattern10.cpp`
- `Patterns/pattern22.cpp`

These programs are useful for practicing:
- loops
- nested loops
- formatting output
- pattern logic building

### Run a pattern file
```bash
g++ Patterns/pattern1.cpp -o pattern1
./pattern1
```

---

## 2. STL Folder

The `STL/` folder contains examples of the C++ Standard Template Library. It covers:
- vectors
- lists
- stacks
- queues
- deques
- pairs
- sets and multisets
- maps and multimaps
- unordered maps and sets
- priority queues
- sorting algorithms

### Common STL examples
- `STL/vector.cpp` - dynamic arrays and vector operations
- `STL/list.cpp` - linked list behavior using std::list
- `STL/stack.cpp` - stack operations
- `STL/queue.cpp` - queue operations
- `STL/deque.cpp` - deque usage
- `STL/pair.cpp` - pair handling
- `STL/set.cpp` - ordered set
- `STL/multiset.cpp` - multiset
- `STL/map.cpp` - map basics
- `STL/multi_map.cpp` - multi-map
- `STL/unordered_map.cpp` - hash-based map
- `STL/unorderedSet.cpp` - hash-based set
- `STL/priority_queue.cpp` - max heap / priority queue
- `STL/inbuilt_sorting.cpp` - `sort()` with ascending and descending examples

### Run an STL file
```bash
cd STL
g++ vector.cpp -o vector
./vector
```

---

## 3. Template

The file `template.cpp` provides a general template for writing new C++ programs.

Use it when creating new DSA problems or practice examples:
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Write your code here
    return 0;
}
```

---

## 4. How to Compile and Run

From the project root:
```bash
g++ file_name.cpp -o output_name
./output_name
```

Example:
```bash
g++ STL/inbuilt_sorting.cpp -o inbuilt_sorting
./inbuilt_sorting
```

On Windows, you may also run:
```bash
g++ STL\inbuilt_sorting.cpp -o inbuilt_sorting.exe
inbuilt_sorting.exe
```

---

## 5. Focus Areas

This repository is mainly aimed at learning:
- C++ syntax and basics
- loop and array logic
- pattern-based problem solving
- STL containers and iterators
- sorting and comparison functions
- container operations such as insert, erase, push, pop, and traversal

---

## 6. Notes

This is a beginner-to-intermediate practice workspace for understanding C++ and DSA fundamentals through small, focused programs.

It is best used as:
- a learning reference
- a practice folder for coding patterns and STL examples
- a place to experiment with C++ containers and algorithms

---

## 7. Suggested Next Steps

- Practice each pattern file one by one
- Learn one STL topic at a time
- Modify examples to explore behavior
- Build small programs using vectors, maps, sets, and priority queues
- Move from STL practice to algorithmic problem solving

