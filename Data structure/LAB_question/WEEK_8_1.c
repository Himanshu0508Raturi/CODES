/*Write an algorithm and a program to implement doubly linked list. The program should
implement following operations:
a) Create(k) - create a doubly linked list node with value k.
b)InsertFront(k) - insert node at the front of the linked list.
c) InsertEnd(k) - insert a node at the end of the linked list.
d)InsertIntermediate(k,p) - insert a node at specific position p.
e) DeleteFront() - delete a node from the front of the linked list.
f) DeleteEnd() - delete a node from the end of the linked list.
g)DeleteIntermediate(p) – delete a node from a specific position p.
h)Size() - returns the size of doubly linked list.
i)  IsEmpty() - checks whether the list is empty or not.
j)  FindMiddle() - returns the contents of middle node of the list.*/
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
void insertFront(node **head, int k)
{
    node *new_node = create(k);
    if ((*head) == NULL)
    {
        (*head) = new_node;
    }
    else
    {
        new_node->next = (*head);
        (*head) = new_node;
        node *temp = new_node->next;
        temp->prev = new_node;
    }
}
void InsertEnd(node **head, int k)
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
void InsertIntermediate(node **head, int k, int p)
{
    node *new_node = create(k);
    node *temp = (*head);
    for (int i = 1; i < (p - 1); i++)
    {
        temp = temp->next;
    }
    new_node->next = temp->next;
    temp->next->prev = new_node;
    temp->next = new_node;
    new_node->prev = temp;
}
void DeleteFront(node **head)
{
    node *temp = (*head);
    (*head) = (*head)->next;
    (*head)->prev = NULL;
    temp->prev = temp->next = NULL;
    printf("Node Deleted: %d\n", temp->data);
    free(temp);
}
void DeleteEnd(node **head)
{
    node *temp = (*head);
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->prev->next = NULL;
    temp->next = temp->prev = NULL;
    printf("Node Deleted: %d\n", temp->data);
    free(temp);
}
int size(node *head)
{
    int l = 0;
    while (head != NULL)
    {
        l++;
        head = head->next;
    }
    return l;
}
void DeleteIntermediate(node **head, int p)
{
    node *temp = (*head);
    for (int i = 1; i < p; i++)
    {
        temp = temp->next;
    }
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    temp->next = temp->prev = NULL;
    printf("Node Deleted: %d\n", temp->data);
    free(temp);
}

void IsEmpty(node *head)
{
    if (head == NULL)
    {
        printf("List is Empty.\n");
    }
    else
    {
        printf("List is not empty.\n");
    }
}
int FindMiddle(node *head)
{
    node *slow = head, *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return (slow->data);
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
void main()
{
    node *head = NULL;
    int choice = 10, v, p;
    printf("Press:\n1 insert node at front.\n2 insert node at end.\n3 insert node at specific position.\n4 delete node from front.\n5 delete node from end.\n6 delete node from specific position.\n7 find size of linked list.\n8 find middle element of the list.\n9 exit\n");
    while (choice != 9)
    {
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            scanf("%d", &v);
            insertFront(&head, v);
            printf("Doubly Linked List: ");
            display(head);
            break;
        }
        case 2:
        {
            scanf("%d", &v);
            InsertEnd(&head, v);
            printf("Doubly Linked List: ");
            display(head);
            break;
        }
        case 3:
        {
            scanf("%d %d", &v, &p);
            InsertIntermediate(&head, v, p);
            printf("Doubly Linked List: ");
            display(head);
            break;
        }
        case 4:
        {
            DeleteFront(&head);
            printf("Doubly Linked List after deletion: ");
            display(head);
            break;
        }
        case 5:
        {
            DeleteEnd(&head);
            printf("Doubly Linked List after deletion: ");
            display(head);
            break;
        }
        case 6:
        {
            scanf("%d", &p);
            DeleteIntermediate(&head, p);
            printf("Doubly Linked List after deletion: ");
            display(head);
            break;
        }
        case 7:
        {
            int s = size(head);
            printf("%d ", s);
            break;
        }
        case 8:
        {
            int m = FindMiddle(head);
            printf("Middle element is: %d\n", m);
            break;
        }
        }
    }
}