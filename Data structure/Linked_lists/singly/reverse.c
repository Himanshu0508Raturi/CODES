// To reverse a singly linked lists.
#include <stdio.h>
#include <stdlib.h>

// Define the node structure
struct node
{
    int data;
    struct node *next;
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
void rev()
{
    struct node *next_node, *current_node, *pre_node;
    pre_node = NULL;
    current_node = next_node = head;
    while (next_node != NULL)
    {
        next_node = next_node->next;
        current_node->next = pre_node; // It create reverse link.
        pre_node = current_node;
        current_node = next_node;
    }
    head = pre_node;
}
void main()
{
    struct node *new_node, *temp;
    head = NULL;
    int choice;
    while (choice)
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &new_node->data);
        new_node->next = NULL;
        if (head == NULL)
        {
            head = temp = new_node;
        }
        else
        {
            temp->next = new_node;
            temp = new_node;
        }
        printf("Enter choice to continue(0,1): ");
        scanf("%d", &choice);
    }
    display();
    rev();
    printf("\nList after reverse.\n");
    display();
}
