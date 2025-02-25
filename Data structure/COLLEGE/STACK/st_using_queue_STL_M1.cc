/*Method 1 using STL. 
push = costly , pop = optimal*/
#include<iostream>
#include<queue> // enqueue = push  , dequeue = pop;
using namespace std;
queue<int> q1,q2;
void push(int x)
{
    q2.push(x);
    while(!q1.empty())
    {
        int t = q1.front();//return from front.
        q1.pop();
        q2.push(t);
    }
    queue<int> temp;
    temp = q1;
    q1 = q2;
    q2 = temp;
}
int pop()
{
    
    int t = q1.front();
    q1.pop();
    return t;
}
void display()
{
    queue<int> temp = q1;
    cout<<"Stack elements are: ";
    while(!temp.empty())
    {
        cout<<temp.front()<<" ";
        temp.pop();
    }

}
int main()
{
    push(10);
    push(34);
    push(12);
    push(-89);
    push(31);
    display();
    cout<<"Poped item is: "<<pop()<<endl;
    display();
    if(q1.empty())
    {
        cout<<"Stack is empty."<<endl;
    }else
    {
        cout<<"Stack is not empty."<<endl;
    }
    return 0;
}