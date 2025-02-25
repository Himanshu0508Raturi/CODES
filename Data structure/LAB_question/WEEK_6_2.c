/* Design an algorithm and write a program to implement queue operations using minimum number of stacks*/
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
void push(stack *st, int data)
{
    node *new_node = create_node(data);
    if (!new_node)
    {
        printf("Not sufficient memory.");
    }
    else if (st->top == NULL)
    {
        st->top = new_node;
    }
    else
    {
        node *temp = st->top;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
        temp = new_node;
    }
}
int pop(stack *st)
{
    int v;
    if ((st)->top == NULL)
    {
        printf("Stack is empty.\n");
        return INT_MIN;
    }
    else
    {
        node *temp = (st)->top;
        (st)->top = (st)->top->next;
        temp->next = NULL;
        v = temp->info;
        free(temp);
    }
    return v;
}
int is_empty(stack *st)
{
    return st->top == NULL;
}
void display(stack *st)
{
    node *temp = st->top;
    while (temp != NULL)
    {
        printf("%d ", temp->info);
        temp = temp->next;
    }
    printf("\n");
}

void enqueue(stack *st, int data)
{
    push(st, data);
}
int dequeue(stack *st1, stack *st2)
{

    while (!is_empty(st1))
    {
        push(st2, pop(st1));
    }

    int dequed_val = pop(st2);
    while (!is_empty(st2))
    {
        push(st1, pop(st2));
    }
    return dequed_val;
}
void main()
{
    stack *st1 = (stack *)malloc(sizeof(stack));
    stack *st2 = (stack *)malloc(sizeof(stack));
    initialize_stack(st1);
    initialize_stack(st2);

    int choice = 1;
    do
    {
        printf("Press\n1. to enqueue.\n2. to dequeue.\n3. to exit.\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            int v;
            scanf("%d", &v);
            enqueue(st1, v);
            display(st1);
            break;
        }
        case 2:
        {
            int x;
            x = dequeue(st1, st2);
            printf("Element deleted from queue - %d\n", x);
            printf("Queue after deletion - ");
            display(st1);
            break;
        }
        }

    } while (choice != 3);
}