#include <iostream>
#include <string>
using namespace std;

void push(string st[], int *top, int n, const string &v)
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
string pop(string st[], int *top)
{
    if (*top == -1)
    {
        cout << "Stack is empty.";
    }
    else
    {
        return st[(*top)--];
    }
}
int main()
{
    string s;
    getline(cin, s);
    int n = s.length();
    string st[n];
    int i;
    for (int i = 0; i < n / 2; i++)
    {
        char temp = s[i];
        s[i] = s[n - 1 - i];
        s[n - 1 - i] = temp;
    }
    int top = -1;
    for (i = 0; i < n; i++)
    {
        if (s[i] >= 'a' and s[i] <= 'z')
        {
            push(st, &top, n, string(1, s[i]));
        }
        else
        {
            string a = pop(st, &top);
            string b = pop(st, &top);
            string res = "(" + a + s[i] + b + ")";
            push(st, &top, n, res);
        }
    }
    cout << st[0];

    return 0;
}