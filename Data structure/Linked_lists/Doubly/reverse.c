// to reverse a doubly linked lists.
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next, *prev;
};
struct node *head;
void display()
{
    struct node *temp;
    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
void create()
{
    struct node *temp, *new_node;
    int choice = 1;
    head = NULL;
    while (choice)
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        printf("Enter data: \n");
        scanf("%d", &new_node->data);
        new_node->next = new_node->prev = NULL;
        if (head == NULL)
        {
            head = temp = new_node;
        }
        else
        {
            temp->next = new_node;
            new_node->prev = temp;
            temp = new_node;
        }
        printf("Enter choice(0,1): ");
        scanf("%d", &choice);
    }
    printf("Linked lists is: \n");
}
void rev()
{
    struct node *current_node, *next_node, *tail;
    current_node = next_node = tail = head;
    while (tail->next != NULL)
    {
        tail = tail->next;
    }
    while (next_node != NULL)
    {
        next_node = current_node->next;
        current_node->next = current_node->prev;
        current_node->prev = next_node;
        current_node = next_node;
    }
    current_node = head;
    head = tail;
    tail = current_node;
    printf("\nAfter reverse: \n");
    display();
}
void main()
{
    create();
    display();
    rev();
}