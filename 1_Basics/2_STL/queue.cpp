// queue works on FIFO 
#include<bits/stdc++.h>
using namespace std;

//function to print queue
void print_queue(){
    queue<int> q;
    q.push(4);
    q.push(54);
    q.push(6);
    q.push(34);

    cout<<endl<<"Size of queue before poping out elements: "<<q.size()<<endl;

    //priting elements with deletion
    cout<<"printing elements of queue: "<<endl;
    while(!q.empty()){
        cout<<"Front: "<<q.front()<<" Back: "<<q.back()<<endl;
        q.pop();
    }
    cout<<"Size of queue after poping out elements: "<<q.size()<<endl<<endl;

}

int main(){
    print_queue();
    return 0;
}