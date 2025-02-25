//with stl.
#include<iostream>
#include<queue>
using namespace std;
queue<int> q1,q2;
void push(int x)
{
    q1.push(x);
}
void display()
{
    queue<int> temp = q1;
    while(!temp.empty())
    {
        cout<<temp.front()<<" ";
        temp.pop();
    }
}
int pop()
{
    // Transfer all elements except the last one from q1 to q2
    while (q1.size() > 1) {
        q2.push(q1.front());
        q1.pop();
    }
    
    // The last element in q1 is the top of the stack
    int poppedElement = q1.front();
    q1.pop();
    
    // Swap q1 and q2
    swap(q1, q2); 
    
    return poppedElement;
}
int main()
{
    push(10);
    push(34);
    push(12);
    push(-89);
    push(31);
    display();
    cout<<"Poped element is: "<<pop()<<endl;
    display();
}