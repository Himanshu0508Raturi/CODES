// implimentation of doubly circular linked list.
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev, *next;
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
        if (head == NULL)
        {
            head = temp = new_node;
            head->next = head;
            head->prev = head;
        }
        else
        {
            temp->next = new_node;
            new_node->prev = temp;
            new_node->next = head;
            head->prev = new_node;
            temp = new_node;
        }
        printf("Enter choice(0,1): ");
        scanf("%d", &choice);
    }
}
void display()
{
    struct node *temp;
    temp = head;
    do
    {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("\n");
}
void main()
{
    create();
    display();
}