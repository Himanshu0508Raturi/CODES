#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node node;
void insert_at_last(node **head, int v)
{
    node *new_node = (node *)malloc(sizeof(node));
    new_node->data = v;
    if (*head == NULL)
    {
        *head = new_node;
        new_node->next = *head;
    }
    else
    {
        node *temp = (*head);
        while (temp->next != *head)
        {
            temp = temp->next;
        }
        temp->next = new_node;
        new_node->next = *head;
    }
}
bool check_cycle(node *head)
{
    node *turtoise = head, *rabbit = head;
    while (rabbit != NULL && rabbit->next != NULL)
    {
        rabbit = rabbit->next->next; // rabbit takes two steps
        turtoise = turtoise->next;   // and turtoise takes single steps
        if (rabbit == turtoise)      // the moment they both are equal means cycle found
        {
            return true;
            break;
        }
    }
    return false;
}
void main()
{
    node *head = NULL;
    insert_at_last(&head, 10);
    insert_at_last(&head, 20);
    insert_at_last(&head, 30);
    insert_at_last(&head, 40);
    insert_at_last(&head, 50);

    if (check_cycle(head))
    {
        printf("Cycle found.\n");
    }
    else
    {
        printf("Cycle Not found.\n");
    }
}