#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
typedef struct stack
{
    int top;
    int cap;
    char *arr;
} stack;
stack *create_stack(int c)
{
    stack *st = (stack *)malloc(sizeof(stack));
    st->cap = c;
    st->top = -1;
    st->arr = (char *)malloc(sizeof(char) * c);
    return st;
}
void push(stack *st, char v)
{
    if (st->top == st->cap - 1)
    {
        printf("Overflow.\n");
        return;
    }
    else
    {
        st->arr[++(st->top)] = v;
    }
}
char pop(stack *st)
{
    if (st->top == -1)
    {
        printf("Underflow.\n");
    }
    else
    {
        return st->arr[(st->top)--];
    }
}
bool is_empty(stack *st)
{
    return st->top == -1;
}
bool is_compare(char st_top, char input)
{
    if (st_top == '(' && input == ')')
        return true;
    if (st_top == '[' && input == ']')
        return true;
    if (st_top == '{' && input == '}')
        return true;
    else
        return false;
}
void main()
{
    char str[40];
    gets(str);
    int n = strlen(str);
    int f = 0;
    stack *st = create_stack(n);
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[')
        {
            push(st, str[i]);
        }
        else if (str[i] == ')' || str[i] == '}' || str[i] == ']')
        {
            if (is_empty(st))
            {
                f = 1; // indicating unmatched;
                break;
            }
            else
            {
                if (is_compare(pop(st), str[i]))
                {
                    f = 0;
                }
            }
        }
    }
    if (f == 0 && is_empty(st))
    {
        printf("Matched.\n");
    }
    else
    {
        printf("Unmatched.\n");
    }
}