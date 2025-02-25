#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
typedef struct node
{
    int info;
    struct node *next;
} node;

typedef struct stack
{
    node *top;
} stack;

void initialize_stack(stack *st)
{
    (st)->top = NULL;
}
node *create_node(int v)
{
    node *temp = (node *)malloc(sizeof(node));
    temp->info = v;
    temp->next = NULL;
    return temp;
}
void push(stack **st, int data)
{
    node *new_node = create_node(data);
    if (!new_node)
    {
        printf("Not sufficient memory.");
    }
    else
    {
        new_node->next = (*st)->top;
        (*st)->top = new_node;
    }
}
int pop(stack **st)
{
    int v;
    if ((*st)->top == NULL)
    {
        printf("Stack is empty.\n");
        return INT_MIN;
    }
    else
    {
        node *temp = (*st)->top;
        (*st)->top = (*st)->top->next;
        temp->next = NULL;
        v = temp->info;
        free(temp);
    }
    return v;
}
void display(stack *st)
{
    while (st->top != NULL)
    {
        printf("%d ", st->top->info);
        st->top = st->top->next;
    }
    printf("\n");
}
void main()
{
    stack *st;
    initialize_stack(st);
    push(&st, 10);
    push(&st, 20);
    push(&st, 30);
    push(&st, 40);
    push(&st, 50);
    pop(&st);
    display(st);
}
/*#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

typedef struct stack
{
    node *top;
} stack;

stack* initialize_stack()
{
    stack *st = (stack *)malloc(sizeof(stack));
    (st)->top = NULL;
    return st;

}
node * create_node(int v)
{
    node *temp = (node*)malloc(sizeof(node));
    temp->data = v;
    temp->next = NULL;
    return temp;
}
void push(stack *st, int data)
{
    node *new_node = create_node(data);
    new_node->next  = (st)->top;
    (st)->top = new_node;
}
int pop(stack *st)
{
    int v;
    v = (st)->top->data;
    node *temp = (st)->top;
    (st)->top = (st)->top->next;
    temp->next = NULL;
    free(temp);
    return v;
}
void display(stack *st)
{
    while(st->top != NULL)
    {
        printf("%d ",st->top->data);
        st->top = st->top->next;
    }
    printf("\n");
}
int main()
{
    stack *st =initialize_stack();
    stack *st2 = initialize_stack();
    push(st,10);
    push(st,20);
    push(st,30);
    push(st,40);
    push(st,50);
    display(st);


    push(st2,101);
    push(st2,202);
    push(st2,303);
    push(st2,404);
    push(st2,505);
    pop(st2);
    display(st2);
}*/