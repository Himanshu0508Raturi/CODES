/*Given a doubly linked list, design an algorithm and write a program to reverse this list without
using any extra space.*/
#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next, *prev;
} node;
node *create(int k)
{
    node *dlist = (node *)malloc(sizeof(node));
    dlist->data = k;
    dlist->next = dlist->prev = NULL;
    return dlist;
}
void Insert(node **head, int k)
{
    node *new_node = create(k);
    if ((*head) == NULL)
    {
        (*head) = new_node;
    }
    else
    {
        node *temp = (*head);
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
        new_node->prev = temp;
    }
}
void display(node *head)
{
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}
void rev(node **head)
{
    node *prev = NULL, *curr = (*head), *next;
    while (curr != NULL)
    {
        next = curr->next;
        curr->prev = next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    (*head) = prev;
}
void main()
{
    node *head = NULL;
    int choice, v;
    printf("Press:\n1 to insert element to linked list.\n2 to exit.\n");
    do
    {
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            scanf("%d", &v);
            Insert(&head, v);
            break;
        }
        }
    } while (choice != 2);
    printf("Doubly Linked List: ");
    display(head);
    rev(&head);
    printf("Rversed Doubly Linked List : ");
    display(head);
}