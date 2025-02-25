#include<iostream>
using namespace std;
void push(int st[] , int *top , int n ,int v)
{
    if(*top >= n-1)
    {
        cout<<"stack is full"<<endl;
    }else
    {
        (*top)++;
        st[*top]=v;
    }
    ;
}

int pop(int st[], int *top)
{
    if(*top == -1)
    {
        cout<<"stack is empty"<<endl;
    }else
    {
       return st[(*top)--];
    }
    
}
int eval(int a, int b, char oper)
{
    switch(oper)
    {
        case '+': return a+b;
        case '-': return a-b;
        case '*': return a*b;
        case '/': return a/b;
    }
}
int main()
{
    string s;
    cin>>s;
    int n = s.length();
    int st[n],top = -1;
    int i=0;
    while(i<n)
    {
        if(s[i] >= '0' && s[i]<='9')
        {
            push(st,&top,n,s[i] - '0');
        }else
        {
            int b = pop(st,&top);
            int a = pop(st,&top);
            int res=eval(a,b,s[i]);
            push(st,&top,n,res);
        }
        i++;
    }
    cout<<"Result is: "<<st[top]<<endl;
    return 0;
}
