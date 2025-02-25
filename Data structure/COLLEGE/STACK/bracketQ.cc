/* WAP to impliment parenthesis matching algorithm having the following brackets '['  . the string has to be entered by user and output should be matched? not matched
    algorithm
    code colourfull
    screenshot in pdf form.*/
#include <iostream>
using namespace std;
void push(char st[], char ch, int *top)
{
    st[++(*top)] = ch;
}
char pop(char st[], int *top)
{
    char ch = st[*top];
    (*top)--;
    return ch;
}
bool isempty(int top)
{
    if (top == -1)
        return true;
    else
        return false;
}
void display(int st[], int top)
{
    for (int i = top; i >= 0; i--)
    {
        cout << st[top] << " " << endl;
    }
}
int main()
{
    int n, i, flag = 0;
    string s = "((()(()(";
    n = s.length();
    char st[n];
    int top = -1;
    for (i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
        {
            push(st, s[i], &top);
        }
        else if (s[i] == ')' && !isempty(top))
        {
            char ch = pop(st, &top);
        }
        else
        {
            cout << "Not matched";
            flag = 1;
            break;
        }
    }
    if (isempty(top) && flag == 0)
    {
        cout << "Bracket are matched.";
    }
    else
    {
        cout << "Not matched.";
    }

    return 0;
}