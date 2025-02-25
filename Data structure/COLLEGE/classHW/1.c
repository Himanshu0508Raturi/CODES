#include <stdio.h>

void push(int st[], int *top, int v, int n)
{
    if (*top == n - 1)
    {
        printf("Stack is Full.\n");
    }
    else
    {
        st[++(*top)] = v;
    }
}
int pop(int st[], int *top)
{
    if (*top == -1)
    {
        printf("Stack is empty.\n");
    }
    else
    {
        return st[(*top)--];
    }
}
void display(int st[], int top)
{
    for (int i = top; i >= 0; i--)
    {
        printf("%d ", st[i]);
    }
    printf("\n");
}
void main()
{
    int n = 5;
    int st1[n], st2[n];
    int top1 = -1, top2 = -1;
    push(st1, &top1, 10, n);
    push(st1, &top1, 20, n);
    push(st1, &top1, 30, n);
    push(st1, &top1, 40, n);
    push(st1, &top1, 50, n);
    display(st1, top1);
    while (top1 >= 0)
    {
        push(st2, &top2, pop(st1, &top1), n);
    }
    display(st2, top2);
}