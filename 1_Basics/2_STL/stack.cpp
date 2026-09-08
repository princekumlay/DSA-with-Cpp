#include<bits/stdc++.h>
using namespace std;


//stack is STL dataset and works on LIFO, it is used when we need static memory
//function to print stack
void print_stack(){
    stack<int> st1; //empty stack
    st1.push(1);
    st1.push(13);
    st1.push(4);
    st1.push(2);
    st1.emplace(7);
    cout<<"Size of st1 before poping out elements: "<<st1.size()<<endl;
    
    while(!st1.empty()){
        cout<<st1.top()<<" ";
        st1.pop();
    }
    cout<<endl;
    cout<<"size of st1 after poping out elements: "<<st1.size()<<endl;

    //swaping two stacks
    stack<int> st2;
    st2.push(2);
    st2.push(45);
    st2.push(34);
    st2.push(67);
    st1.swap(st2);

    cout<<"st1 elements after swaping with st2"<<endl;
    while(!st1.empty()){
        cout<<st1.top()<<" ";
        st1.pop();
    }
    cout<<endl;

}

int main(){
    print_stack();
    return 0;
}