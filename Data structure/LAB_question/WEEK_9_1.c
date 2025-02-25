/*Design an algorithm and write a program to implement circular linked list. The program should
implement following operations:
a) Create(k) - creates a circular linked list node with value k.
b)InsertFront() - insert node at the front of list.
c) InsertEnd() - insert node at the end of list.
d)InsertIntermediate() - insert node at any specified position of list.
e) DeleteFront() - delete node from the front of list.
f) DeleteEnd() - delete node from the end of list.
g)DeleteIntermediate() - delete node from any specified position of list.
h)Size() - return size of circular linked list.
i)IsEmpty() - checks whether list is empty or not*/
#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} node;
node *create(int k)
{
    node *temp = (node *)malloc(sizeof(node));
    temp->data = k;
    temp->next = temp;
    return temp;
}
void InsertFront(node **head, int v)
{
    node *new_node = create(v);
    if ((*head) == NULL)
    {
        (*head) = new_node;
    }
    else
    {
        node *tail = *head;
        while (tail->next != *head)
        {
            tail = tail->next;
        }
        new_node->next = *head;
        tail->next = new_node;
        *head = new_node;
    }
}
void InsertEnd(node **head, int v)
{
    node *new_node = create(v);

    if (*head == NULL)
    {
        *head = new_node;
    }
    else
    {
        node *tail = *head;
        while (tail->next != (*head))
        {
            tail = tail->next;
        }
        tail->next = new_node;
        new_node->next = (*head);
    }
}
void InsertIntermediate(node **head, int v, int p)
{
    node *new_node = create(v);
    node *temp = (*head);
    node *pretemp = (*head);
    for (int i = 1; i < p; i++)
    {
        pretemp = temp;
        temp = temp->next;
    }
    pretemp->next = new_node;
    new_node->next = temp;
}
void DeleteFront(node **head)
{
    node *temp = (*head), *tail = (*head);
    while (tail->next != (*head))
    {
        tail = tail->next;
    }
    (*head) = (*head)->next;
    temp->next = NULL;
    printf("Node Deleted: %d\n", temp->data);
    free(temp);
    tail->next = (*head);
}
void DeleteEnd(node **head)
{
    node *temp = (*head);
    node *pretemp = (*head);
    while (temp->next != (*head))
    {
        pretemp = temp;
        temp = temp->next;
    }
    pretemp->next = (*head);
    temp->next = NULL;
    printf("Node Deleted: %d\n", temp->data);
    free(temp);
}
void DeleteIntermediate(node **head, int p)
{
    node *temp = (*head);
    node *pretemp = (*head);
    for (int i = 1; i < p; i++)
    {
        pretemp = temp;
        temp = temp->next;
    }
    pretemp->next = temp->next;
    temp->next = NULL;
    printf("Node Deleted: %d\n", temp->data);
    free(temp);
}
int size(node *head)
{
    int l = 1;
    if (head == NULL)
    {
        return 0;
    }
    else
    {
        node *temp = head;
        do
        {
            l++;
            temp = temp->next;
        } while ((temp->next != head));
    }
    return l;
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
void display(node *head)
{
    node *temp = head;
    do
    {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("\n");
}
void main()
{
    node *head = NULL;
    int choice, v, p;
    printf("Press:\n1 insert node at front.\n2 insert node at end.\n3 insert node at specific position.\n4 delete node from front.\n5 delete node from end.\n6 delete node from specific position.\n7 find size of linked list.\n8 exit\n");
    do
    {
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            scanf("%d", &v);
            InsertFront(&head, v);
            printf("circular Linked List: ");
            display(head);
            break;
        }
        case 2:
        {
            scanf("%d", &v);
            InsertEnd(&head, v);
            printf("circular Linked List: ");
            display(head);
            break;
        }
        case 3:
        {
            scanf("%d %d", &v, &p);
            InsertIntermediate(&head, v, p);
            printf("circular Linked List: ");
            display(head);
            break;
        }
        case 4:
        {
            DeleteFront(&head);
            printf("circular Linked List after deletion: ");
            display(head);
            break;
        }
        case 5:
        {
            DeleteEnd(&head);
            printf("circular Linked List after deletion: ");
            display(head);
            break;
        }
        case 6:
        {
            scanf("%d", &p);
            DeleteIntermediate(&head, p);
            printf("circular Linked List after deletion: ");
            display(head);
            break;
        }
        case 7:
        {
            int s = size(head);
            printf("%d\n", s);
            break;
        }
        }
    } while (choice != 8);
}