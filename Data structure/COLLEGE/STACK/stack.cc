//implimenting stack using array.
#include<iostream>
using namespace std;
int push(int st[] , int top , int n ,int v)
{
    if(top >= n-1)
    {
        cout<<"stack is full"<<endl;
    }else
    {
        top++;
        st[top]=v;
    }
    return top;
}
void display(int st[], int top)
{
    for(int i=top ; i>=0 ;i--)
    {
        cout<<st[i];
        cout<<endl;
    }
}
int pop(int st[], int top)
{
    if(top == -1)
    {
        cout<<"stack is empty"<<endl;
    }else
    {
        cout<<"Poppped element is: "<<st[top]<<endl;
        top--;
    }
    return top;
}
int main()
{
    int n;
    cout<<"Enter size"<<endl;
    cin>>n;
    int st[n],top=-1;
    top = push(st,top,n,1);
    top = push(st,top,n,3);
    top = push(st,top,n,5);
    top = push(st,top,n,7);
    top = push(st,top,n,3);
    display(st,top);
    top = pop(st,top);
    top = pop(st,top);
    top = pop(st,top);
    top = pop(st,top);
    display(st,top);

}