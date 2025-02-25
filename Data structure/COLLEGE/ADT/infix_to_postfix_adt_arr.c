#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
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
void push(stack *st, int d)
{
    if (st->top == st->cap - 1)
    {

        printf("Stack is Full.\n");
        return;
    }
    else
    {
        st->arr[++(st->top)] = d;
    }
}
int pop(stack *st)
{
    if (st->top == -1)
    {
        printf("Stack is Empty.\n");
    }
    else
    {
        return st->arr[(st->top)--];
    }
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
bool isEmpty(stack *st)
{
    return st->top == -1;
}
char oper(int pre)
{
    switch (pre)
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
    char str[50], ans[50], j = 0;
    fgets(str, 50, stdin);
    int n = strlen(str);
    if (str[n - 1] == '\n')
    {
        str[n - 1] = '\0';
        n--; // Adjust length to exclude newline.
    }
    stack *st = initialize_stack(n);
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '(')
        {
            push(st, 0);
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            ans[j++] = str[i];
        }
        else if (str[i] == ')')
        {
            while (st->arr[st->top] != 0)
            {
                int t = pres(st->arr[st->top]);
                pop(st);
                char a = oper(t);
                ans[j++] = a;
            }
            pop(st);
        }
        else
        {
            while ((!isEmpty(st)) && abs(pres(str[i])) <= abs(pres(st->arr[st->top])))
            {
                int t = pres(st->arr[st->top]);
                pop(st);
                char a = oper(t);
                ans[j++] = a;
            }
            push(st, pres(str[i]));
        }
    }
    while (!isEmpty(st))
    {
        int t = pres(st->arr[st->top]);
        pop(st);
        char a = oper(t);
        ans[j++] = a;
    }
    ans[j] = '\0';
    printf("%s", ans);
}