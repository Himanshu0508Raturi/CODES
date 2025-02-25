/*Write an algorithm and a program that will split a circularly linked list into two circularly linked
list provided position from where circular linked list has to be splitted.*/
#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} node;
node *create(int v)
{
    node *temp = (node *)malloc(sizeof(node));
    temp->data = v;
    temp->next = temp;
    return temp;
}
void insert(node **head, int k)
{
    node *new_node = create(k);
    if ((*head) == NULL)
    {
        (*head) = new_node;
    }
    else
    {
        node *temp = (*head);
        while (temp->next != (*head))
        {
            temp = temp->next;
        }
        temp->next = new_node;
        new_node->next = (*head);
    }
}
void display(node *list)
{

    node *temp = list;
    do
    {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != list);
    printf("\n");
}
void split(node *head, int p)
{
    node *temp = head;
    for (int i = 1; i < p; i++)
    {
        temp = temp->next;
    }
    node *head2 = temp->next;
    temp->next = head;
    node *temp2 = head2;
    while (temp2->next != head)
    {
        temp2 = temp2->next;
    }
    temp2->next = head2;
    printf("First part of list: ");
    display(head);
    printf("Second part of list: ");
    display(head2);
}
void main()
{
    node *head = NULL;
    int choice, v, p;
    printf("Press.\n1. to insert in list1.\n2. to exit\n");
    do
    {
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            scanf("%d", &v);
            insert(&head, v);
            break;
        }
        }
    } while (choice != 2);
    scanf("%d", &p);
    printf("Original Linked List: ");
    display(head);
    split(head, p);
}