// write a c function to find the smallest element in a doubly ll.
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *prev, *next;
};
struct node *head = NULL, *tail = NULL;
void create()
{
    struct node *new_node;
    int choice = 1;
    while (choice)
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        printf("Enter data\n");
        scanf("%d", &new_node->data);
        new_node->next = new_node->prev = NULL;
        if (head == NULL)
        {
            head = tail = new_node;
        }
        else
        {
            tail->next = new_node;
            new_node->prev = tail;
            tail = new_node;
        }
        printf("Enter choice\n");
        scanf("%d", &choice);
    }
}
int small()
{
    struct node *temp = head;
    int s = temp->data;
    while (temp != NULL)
    {
        
        if (temp->data < s)
        {
            s = temp->data;
        }
        temp=temp->next;
    }
    return s;
}
void display()
{
    struct node *temp;
    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void main()
{
    create();
    display();
    printf("%d", small());
}