/* Given an expression in the form of postfix representation, design an algorithm and a program to
find result of this expression.
2 3 1 * + 4 - */
#include <stdio.h>
#include <ctype.h>
#include <string.h>
void push(int st[], int *top, int n, int v)
{
    if ((*top) == n - 1)
    {
        printf("Overflow condition.\n");
    }
    else
    {
        st[++(*top)] = v;
    }
}
int pop(int st[], int *top)
{
    char r;
    if ((*top) == -1)
    {
        printf("Underflow condition.\n");
    }
    else
    {
        r = st[(*top)--];
    }
    return r;
}
int res(int a, int b, char op)
{
    switch (op)
    {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        return a / b;
    }
}
void main()
{
    int t, i;
    scanf("%d", &t);
    getchar();
    for (i = 0; i < t; i++)
    {
        char str[100];
        fgets(str, sizeof(str), stdin);
        str[strcspn(str, "\n")] = 0;
        //gets(str);
        //scanf("%[^\n]s", str);
        int n = strlen(str);
        int st[n];
        int top = -1;
        for (int i = 0; i < n; i++)
        {
            if (str[i] != ' ')
            {
                if (str[i] >= '0' && str[i] <= '9')
                {
                    int num = 0;
                    while (i < n && isdigit(str[i]))
                    {
                        num = num * 10 + (str[i] - '0');
                        i++;
                    }
                    i--;
                    push(st, &top, n, num);
                }
                else
                {
                    int b = pop(st, &top);
                    int a = pop(st, &top);
                    push(st, &top, n, res(a, b, str[i]));
                }
            }
        }
        printf("%d", st[0]);
    }
}
