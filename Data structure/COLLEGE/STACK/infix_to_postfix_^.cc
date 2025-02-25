#include<iostream>
#include<iomanip>
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
bool isempty(int top)
{
    if(top == -1)
        return true;
    else
        return false;
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
int pres(char c)
{
    switch(c)
    {
         case '^': return 3;
        case '*': return 2;
        case '/': return -2;
        case '+': return 1;
        case '-': return -1;
    }
}
char oper(int a)
{
     switch(a)
    {
       case 3: return '^';
        case 2: return '*';
        case -2: return '/';
        case 1: return '+';
        case -1: return '-';
    }
}
int main()
{
    string s ;
    string ans = "";
    getline(cin,s);
    int n = s.length();
    int st[n],top = -1;
    for(int i = 0 ; i<n ; i++)
    {
        if(s[i] == '(')
        {
            push(st , &top , n ,0);
        }else if(s[i] == ')')
        {
            while(st[top] != 0)
                {
                    int t = pres(st[top]);
                    pop( st, &top);
                    char ch = oper(t);
                    ans += ch;
                }
                pop(st, &top);
        }
        else if(s[i] >= 'a' && s[i] <= 'z')
        {
            ans += s[i];
        }else//means s[i] is an operator.
        {
            while(!isempty(top) && abs(pres(s[i])) <= abs(pres(st[top])))
            {
                int t = pres(st[top]);
                pop(st, &top);
                char ch = oper(t);
                ans += ch;
            }
            push(st , &top , n ,pres(s[i]));
            
        }
    }
        while(!isempty(top))
        {
            int t = st[top];
            pop(st, &top);
            char ch = oper(t);
            ans += ch;
        }
    cout<<ans<<endl;
    return 0;
}