// implimentation of stack using link list.
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *top = NULL;
void push(int x)
{
    struct node *new_node;
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = x;
    new_node->next = top;
    top = new_node;
}
void pop()
{
    struct node *temp;
    temp = top;
    printf("The pooped element is %d\n", top->data);
    top = top->next;
    free(temp);
}
void peek()
{
    printf("Topmost element is %d\n", top->data);
}
void isempty()
{
    struct node *temp;
    int c = 0;
    temp = top;
    if (top == NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        while (temp != NULL)
        {
            c++;
            temp = temp->next;
        }
        printf("there are %d element in stack\n", c);
    }
}
void display()
{
    struct node *temp;
    temp = top;
    if (top == NULL)
    {
        printf("No element in list\n");
    }
    else
    {
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}
void main()
{
    int choice = 1, data;
    do
    {
        printf("Enter input:-\n1.push operation\n2.pop operation\n3.peek operation\n4.display\nand 0 for exit.");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter data to put on stack:\n");
            scanf("%d", &data);
            push(data);
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        }
    } while (choice != 0);
}
