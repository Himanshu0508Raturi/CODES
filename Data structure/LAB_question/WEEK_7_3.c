/*Write an algorithm and a program to implement stack using linked list. he program should
implement following queue operations:
a) Create()
b) Push()
c) Pop()
d) IsEmpty()
e) IsFull()
f) Size()*/
#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} node;
node *create(int v)
{
    node *st = (node *)malloc(sizeof(node));
    st->data = v;
    st->next = NULL;
    return st;
}
void push(node **st, int x)
{
    node *new_node = create(x);
    if (!new_node)
        printf("Not Sufficient Memory.\n");
    if ((*st) == NULL)
    {
        (*st) = new_node;
    }
    else
    {
        new_node->next = (*st);
        (*st) = new_node;
    }
}
int pop(node **st)
{
    int v;
    if ((*st) == NULL)
    {
        printf("Underflow Condition.\n");
    }
    else
    {
        v = (*st)->data;
        node *temp = (*st);
        (*st) = (*st)->next;
        free(temp);
    }
    return v;
}
void IsEmpty(node *st)
{
    if (st == NULL)
    {
        printf("Stack is empty.\n");
    }
    else
    {
        printf("Stack Is not empty.\n");
    }
}
void size(node *st)
{
    int l = 0;
    while (st != NULL)
    {
        l++;
        st = st->next;
    }
    printf("Size = %d\n", l);
}
void display(node *st)
{
    while (st != NULL)
    {
        printf("%d ", st->data);
        st = st->next;
    }
    printf("\n");
}
void main()
{
    node *st = NULL;
    int choice;
    printf("Press.\n1 to push.\n2 to pop.\n3 to calculate size.\n4 to exit.\n");
    do
    {
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            int val;
            scanf("%d", &val);
            push(&st, val);
            printf("Stack- ");
            display(st);
            break;
        }
        case 2:
        {
            int x = pop(&st);
            printf("Popped element is: %d\n", x);
            printf("Stack- ");
            display(st);
            break;
        }
        case 3:
        {
            size(st);
            break;
        }
        }
    } while (choice != 4);
}