// implimentation of circular linked list.
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *tail, *head, *temp;

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
            tail = head = new_node;
        }
        else
        {
            tail->next = new_node;
            tail = new_node;
        }
        tail->next = head;
        printf("Enter choice(0,1): ");
        scanf("%d", &choice);
    }
}
void display()
{
    temp = head;
    while (temp->next != head)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("%d", temp->data);
}
void rev()
{
    struct node *prev, *current, *next;
    prev = tail;
    current = head;
    next = head->next;

    while (current != tail)
    {
        current->next = prev;
        prev = current;
        current = next;
        next = next->next;
    }
    current->next = prev;

    // Swap head and tail
    tail = head;
    head = current;

    printf("\nAfter reversing, the list is: \n");
    display();
}
void main()
{
    create();
    printf("Linked list is : \n");
    display();
    rev();
}