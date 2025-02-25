#include<iostream>
#include<queue> // enqueue = push  , dequeue = pop;
using namespace std;
int main()
{
    queue<int> q;
    q.push(56);
    q.push(45);
    q.push(12);
    q.push(34);
    q.push(-19);
    cout<<"Front of queue is: "<<q.front()<<endl;
    q.pop();
    cout<<"Front of queue is: "<<q.front()<<endl;
    if(q.empty())
    {
        cout<<"Queue is empty.";
    }else
    {
        cout<<"Queue is full.";
    }
    return 0;
}