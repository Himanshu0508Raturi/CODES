#include<iostream>
using namespace std;
void push(string st[],int *top , int n, const string &v)
{
    if(*top == n-1)
    {
        cout<<"Stack is full.";
    }else
    {
        st[++(*top)] = v;
    }
}
string pop(string st[], int *top)
{
    if(*top == -1)
    {
        cout<<"Stack is empty.";
    }else
    {
        return st[(*top)--];
    }
}

int main()
{
    //string s="a*b*(c/d)-(c-d)";
    string s ="ab-de+f*/";
    string ans="";
    int n=s.length();
    string st[n];
    int top=-1;
    int i;
    // for(i= 0 ; s[i] != '\0' ;i++)
    // {
    //     if(s[i] == '(')
    //     {
    //         s[i]=')';
    //     }else if(s[i] == ')')
    //     {
    //         s[i]='(';
    //     }
    // }
    for(i= 0; i<n ;i++)
    {
        if(s[i] >= 'a' and s[i] <= 'z')
        {
            push(st,&top,n,string(1,s[i]));;

        }else
        {
            string b = pop(st,&top);
            string a= pop(st,&top);
            string res = a+s[i]+b;
            push(st,&top,n,res);
        }
    }
    
  
    cout<<st[0]<<endl;
}