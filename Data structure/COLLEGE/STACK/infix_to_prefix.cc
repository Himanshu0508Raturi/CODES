#include <iostream>
#include <string>
using namespace std;
void push(char st[], int *top, int n, char v)
{
    if (*top == n - 1)
    {
        cout << "Stack is full.";
    }
    else
    {
        st[++(*top)] = v;
    }
}
char pop(char st[], int *top)
{
    if (*top == -1)
    {
        cout << "Stack is empty.";
        return -1;
    }
    else
    {
        return st[(*top)--];
    }
}
int pres(char ch)
{
    switch (ch)
    {
    case '(':
        return 0;
    case '+':
    case '-':
        return 1;
    case '*':
    case '/':
        return 2;
    default:
        return -1;
    }
}
int isempty(int top)
{
    if (top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    string s;
    getline(cin, s);
    string ans = "";
    int n = s.length();
    char st[n];
    int top = -1;
    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '(')
        {
            s[i] = ')';
        }
        else if (s[i] == ')')
        {
            s[i] = '(';
        }
    }
    for (int i = 0; i < n / 2; i++)
    {
        char temp = s[i];
        s[i] = s[n - 1 - i];
        s[n - 1 - i] = temp;
    }
    for (i = 0; i < n; i++)
    {
        if (s[i] == '(')
        {
            push(st, &top, n, s[i]);
        }
        else if (s[i] == ')')
        {
            while (st[top] != '(')
            {
                char v = pop(st, &top);
                ans += v;// in c use strncat(ans , &v , 1);
            }
            pop(st, &top); // Pop the '('
        }
        else if (s[i] >= 'a' and s[i] <= 'z')
        {
            ans += s[i];
        }
        else
        {
            while (!isempty(top) && (pres(s[i])) < (pres(st[top])))
            {
                ans += pop(st, &top);
            }
            push(st, &top, n, s[i]);
        }
    }
    while (!isempty(top))
    {
        ans += pop(st, &top);
    }
    int n1 = ans.length();
    for (int i = 0; i < n1 / 2; i++)
    {
        char temp = ans[i];
        ans[i] = ans[n1 - 1 - i];
        ans[n1 - 1 - i] = temp;
    }
    cout << ans << endl;
}