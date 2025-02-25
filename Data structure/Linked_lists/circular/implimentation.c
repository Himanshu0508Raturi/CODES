// implimentation of circular linked list.
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *head, *temp;

void create()
{
    struct node *new_node;
    int choice = 1;
    head = NULL;
    while (choice)
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &new_node->data);
        new_node->next = NULL;
        if (head == NULL)
        {
            temp = head = new_node;
        }
        else
        {
            temp->next = new_node;
            temp = new_node;
        }
        temp->next = head;
        printf("Enter choice(0,1): ");
        scanf("%d", &choice);
    }
}
void display()
{
    temp = head;
    while (temp->next != head)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("%d", temp->data);
}
void main()
{
    create();
    printf("Linked list is : \n");
    display();
}