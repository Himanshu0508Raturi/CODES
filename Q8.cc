/*Write a c++ program to reverse each word of a string. */
#include<iostream>
#include<string.h>
using namespace std;
int top = -1;
int n;
void push(char st[],char x)
{
    if(top == n-1)
    {
        cout<<"Stack is full"<<endl;
    }else
    {
        st[++(top)] = x;
    }
}

char pop(char st[])
{
    if(top == -1)
    {
        cout<<"Stack is empty"<<endl;
    }
    return st[(top)--];
}

bool is_empty(char st[])
{
    if(top == -1)
    {
        return true;
    }else
    {
        return false;
    }
}
int main()
{
    string s;
    cout<<"Enter a string: "<<endl;
    getline(cin,s);
    n = s.size();
    char st[n];
    int i;
    for(i = 0 ; i<= n ; i++)
    {
        if((s[i] != ' ' and s[i] != '\0'))
        {
            push(st,s[i]);

        }else
        {
            while(top != -1)
            {
                cout<<pop(st);
            }
            cout<<" ";
        }
    }
    return 0;
}