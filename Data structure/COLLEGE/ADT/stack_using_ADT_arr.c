#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
typedef struct stack
{
    int top;
    int capacity;
    int *array;
} stack;
stack *create_stack(int cap)
{
    stack *st = (stack *)malloc(sizeof(stack));
    st->capacity = cap;
    st->top = -1;
    st->array = (int *)malloc(sizeof(int) * st->capacity);
    return st;
}
void push(stack *st, int data)
{
    if (st->top >= st->capacity)
    {
        printf("Stack is Full.");
        return;
    }
    else
    {
        st->array[++(st->top)] = data;
    }
}
int pop(stack *st)
{
    if (st->top == -1)
    {
        printf("Stack is empty.");
    }
    else
    {
        return st->array[(st->top)--];
    }
}
bool is_empty(stack *st)
{
    return st->top == -1;
}
void display(stack *st)
{
    for (int i = st->top; i >= 0; i--)
    {
        printf("%d ", st->array[i]);
    }
    printf("\n");
}
void main()
{
    stack *st = create_stack(5);
    push(st, 10);
    push(st, 20);
    push(st, 30);
    push(st, 40);
    push(st, 50);
    display(st);
    pop(st);
    display(st);
    pop(st);
    pop(st);
    display(st);
    if (is_empty(st))
    {
        printf("Stack is empty");
    }
    else
    {
        printf("Stack is not empty");
    }
}