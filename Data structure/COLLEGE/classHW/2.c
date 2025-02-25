#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} node;

void create(node **head, int v)
{
    node *new_node = (node *)malloc(sizeof(node));
    new_node->data = v;
    new_node->next = NULL;
    if (*head == NULL)
    {
        *head = new_node;
    }
    else
    {
        node *temp = *head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }
}
void positive_count(node *head, int *count)
{
    while (head != NULL)
    {
        if (head->data >= 0)
        {
            (*count)++;
        }
        head = head->next;
    }
}
void main()
{
    node *head = NULL;
    int count = 0;
    create(&head, 10);
    create(&head, 0);
    create(&head, -1);
    create(&head, -9);
    create(&head, 5);
    positive_count(head, &count);
    printf("%d", count);
}