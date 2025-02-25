/*Given a sorted doubly linked list, design an algorithm and write a program to eliminate
duplicates from this list.*/
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
void Eliminate_Duplicate(node **head)
{
    node *temp = (*head);
    while (temp != NULL && temp->next != NULL)
    {
        if (temp->data == temp->next->data)
        {
            if (temp == (*head))
            {
                (*head) = (*head)->next;
                (*head)->prev = NULL;
                temp->next = NULL;
                free(temp);
                temp = (*head);
            }
            else
            {
                node *PreTemp = temp->prev;
                PreTemp->next = temp->next;
                temp->next->prev = PreTemp;
                if (temp->next != NULL)
                    temp->next = temp->prev = NULL;
                free(temp);
                temp = PreTemp->next;
            }
        }
        else
        {
            temp = temp->next;
        }
    }
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
    Eliminate_Duplicate(&head);
    printf("Linked List after deletion: ");
    display(head);
}