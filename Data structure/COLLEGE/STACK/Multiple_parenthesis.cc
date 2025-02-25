/* WAP to impliment parenthesis matching algorithm having the following brackets '['  . the string has to be entered by user and output should be matched/not matched
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
int main()
{
    int n, i, flag = 0;
    char ch;
    string s;
    cout << "Enter a expression: " << endl;
    getline(cin, s);
    n = s.length();
    char st[n];
    int top = -1;
    for (i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
        {
            push(st, s[i], &top);
        }
        else if (s[i] == ')' || s[i] == ']' || s[i] == '}')
        {
            if (isempty(top))
            {
                flag = 1;
                break;
            }
            else
            {
                ch = pop(st, &top);
                if (ch == s[i])
                {
                    flag = 1;
                }
            }
        }
    }
    if (isempty(top) && flag == 0)
    {
        cout << "matched";
    }
    else
    {
        cout << "Not matched.";
    }

    return 0;
}