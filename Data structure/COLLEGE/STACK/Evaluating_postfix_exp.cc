#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void push(int st[], int *top, int n, int v)
{
    if (*top >= n - 1)
    {
        cout << "stack is full" << endl;
    }
    else
    {
        (*top)++;
        st[*top] = v;
    };
}
bool isempty(int top)
{
    if (top == -1)
        return true;
    else
        return false;
}
int pop(int st[], int *top)
{
    if (*top == -1)
    {
        cout << "stack is empty" << endl;
        return 0;
    }
    else
    {
        return st[(*top)--];
    }
}

int res(int a, int b, char oper)
{
    switch (oper)
    {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        return a / b;
    case '^':
        return pow(a, b);
    }
}
int main()
{
    string s = " 2 3 + 23 3 / * - 2 + ";
    int n = s.length();
    int st[n], top = -1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != ' ')
        {
            if (isdigit(s[i]))
            {
                int num = 0;
                while (i < n && isdigit(s[i]))
                {
                    num = num * 10 + (s[i] - '0');
                    i++;
                }
                i--;
                push(st, &top, n, num);
            }
            else
            {
                int b = pop(st, &top);
                int a = pop(st, &top);
                int v = res(a, b, s[i]);
                push(st, &top, n, v);
            }
        }
    }
    cout << st[top] << endl;
    return 0;
}
/*
/*Evaluating postfix using stl
#include<iostream>
#include<stack>
using namespace std;
int res(int a, int b ,char oper)
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
    stack<int> st;
    string s="231*+9-";
    int n = s.size();
    for(int i= 0 ; i<n;i++)
    {
        if(s[i] >= '0' and s[i] <= '9')
        {
            st.push(s[i] - '0');
        }else
        {
            int b = st.top();
            st.pop();
            int a = st.top();
            st.pop();
            int v = res(a,b,s[i]);
            st.push(v);
        }
    }
    cout<<st.top()<<endl;
}
*/