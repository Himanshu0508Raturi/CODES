/*Design an algorithm and write a program to concatenate two circularly linked lists.*/
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
node *concatenate(node *l1, node *l2)
{
    node *temp1 = l1, *temp2 = l2;
    if (l1 == NULL)
        return l2;
    if (l2 == NULL)
        return l1;
    while (temp1->next != l1)
    {
        temp1 = temp1->next;
    }
    while (temp2->next != l2)
    {
        temp2 = temp2->next;
    }
    temp1->next = l2;
    temp2->next = l1;
    return l1;
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
void main()
{
    node *list1 = NULL, *list2 = NULL;
    int choice, v;
    printf("Press.\n1. to insert in list1.\n2. to exit\n");
    do
    {
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            scanf("%d", &v);
            insert(&list1, v);
            break;
        }
        }
    } while (choice != 2);

    printf("Press.\n1. to insert in list2.\n2. to exit\n");
    do
    {
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            scanf("%d", &v);
            insert(&list2, v);
            break;
        }
        }
    } while (choice != 2);
    printf("First Circular Linked List: ");
    display(list1);
    printf("second Circular Linked List: ");
    display(list2);
    node *list3 = concatenate(list1, list2);
    printf("Final concatenated List: ");
    display(list3);
}