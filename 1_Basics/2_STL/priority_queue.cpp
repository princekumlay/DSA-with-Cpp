//priority queue is queue that sotres elements on some priority basis.
//it stores as max heap by default maximum value stays at the top also can be store as min heap
//push() and pop() happens in O(log(n)) and top() happens in O(1)
#include<bits/stdc++.h>
using namespace std;

void print_priorityQueue(){
    priority_queue<int> pq;
    pq.push(83);
    pq.push(54);
    pq.push(64);
    pq.push(33);
    pq.push(86);
    pq.push(32);
    pq.push(65);
    pq.push(75);
    cout<<endl<<"Size of Priority Queue initially: "<<pq.size()<<endl;

    while(!pq.empty()){
        cout<<"Top element: "<<pq.top()<<"; ";
        pq.pop();
    }
    cout<<endl<<"Size after poping out: "<<pq.size()<<endl<<endl;

    //min heap priority queue
    priority_queue<int, vector<int>, greater<int>> mpq;
    mpq.push(54);
    mpq.push(75);
    mpq.push(73);
    mpq.push(23);
    mpq.push(72);
    mpq.push(28);
    mpq.push(52);
    mpq.push(25);
    mpq.push(85);
    mpq.push(12);
    mpq.push(96);
    cout<<endl<<"Size of min heap Priority Queue initially: "<<mpq.size()<<endl;

     while(!mpq.empty()){
        cout<<"Top element: "<<mpq.top()<<"; ";
        mpq.pop();
    }
    cout<<endl<<"Size min heap Priority queue after poping out: "<<pq.size()<<endl<<endl;

}

int main(){
    print_priorityQueue();
    return 0;
}