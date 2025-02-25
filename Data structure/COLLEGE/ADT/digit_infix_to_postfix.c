#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>
typedef struct stack
{
    int top;
    int cap;
    int *arr;
} stack;
stack *initialize_stack(int size)
{
    stack *st = (stack *)malloc(sizeof(stack));
    st->cap = size;
    st->top = -1;
    st->arr = (int *)malloc(sizeof(int) * size);
    return st;
}
void push(stack *st, int v)
{
    st->arr[++(st->top)] = v;
}
int pop(stack *st)
{
    return st->arr[(st->top)--];
}
bool isEmpty(stack *st)
{
    return st->top == -1;
}
int pres(char op)
{
    switch (op)
    {
    case '+':
        return 1;
    case '-':
        return -1;
    case '*':
        return 2;
    case '/':
        return -2;
    }
}
char oper(int v)
{
    switch (v)
    {
    case 1:
        return '+';
    case -1:
        return '-';
    case 2:
        return '*';
    case -2:
        return '/';
    }
}
void main()
{
    char str[] = " ( ( 1 + 13 ) - 4 * ( 6 / 9 )) + 5 ";
    char ans[50];
    int n = strlen(str);
    int j = 0;
    stack *st = initialize_stack(n);
    for (int i = 0; i < n; i++)
    {
        if (str[i] != ' ')
        {
            if (str[i] == '(')
            {
                push(st, 0);
            }
            else if (str[i] == ')')
            {
                while (st->arr[st->top] != 0)
                {
                    int t = pres(st->arr[st->top]);
                    pop(st);
                    char ch = oper(t);
                    ans[j++] = ch;
                    ans[j++] = ' ';
                }
                pop(st);
            }
            else if (str[i] >= '0' && str[i] <= '9')
            {
                int num = 0;
                while(i<n && isdigit(str[i]))
                {
                    num = num*10 + (str[i] - '0');
                    i--;
                }
                i++;
                ans[j++] = (char)num;
                ans[j++] = ' ';
            }
            else
            {
                while (!isEmpty(st) && abs(pres(st->arr[st->top])) >= abs(pres(str[i])))
                {
                    int t = pres(st->arr[st->top]);
                    pop(st);
                    char ch = oper(t);
                    ans[j++] = ch;
                    ans[j++] = ' ';
                }
                push(st, pres(str[i]));
            }
        }
    }
    while (!isEmpty(st))
    {
        int t = pres(st->arr[st->top]);
        pop(st);
        char ch = oper(t);
        ans[j++] = ch;
        ans[j++] = ' ';
    }
    ans[j] = '\0';
    puts(ans);
}