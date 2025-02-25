/*Write  an algorithm and  a program  to implement singly linked list.  The program  should
implement following operations:
a) Create(k) - create a linked list with single node of value k
b)InsertFront(k) - insert node of value k at the front of the linked list
c) InsertEnd(k) - insert a node of value k at the end of the linked list
d)InsertAnywhere(p) - insert a node at specific position p
e) DeleteFront() - delete a node from the front of the linked list
f) DeleteEnd() - delete a node from the end of the linked list
g)DeleteAnywhere(p) - delete a node from a specific position p
h)Size() - find the size of the linked list
i) IsEmpty() - checks if the linked list is empty or not
j) FindMiddle() - finds the middle element of the linked list*/
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
    temp->next = NULL;
    return temp;
}
void InsertFront(node **head, int k)
{
    node *new_node = create(k);
    if (new_node == NULL)
    {
        (*head) = new_node;
    }
    else
    {
        new_node->next = *head;
        *head = new_node;
    }
}
void InsertEnd(node **head, int k)
{
    node *new_node = create(k);
    if (new_node == NULL)
    {
        (*head) = new_node;
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
void InsertAnywhere(node *head, int p, int k)
{
    node *new_node = create(k);
    node *temp = head;
    for (int i = 1; i < p - 1; i++)
    {
        temp = temp->next;
    }
    new_node->next = temp->next;
    temp->next = new_node;
}
void deleteFront(node **head)
{
    node *temp = *head;
    (*head) = (*head)->next;
    temp->next = NULL;
    free(temp);
}
void deleteEnd(node **head)
{
    node *temp = *head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    node *del_node = temp->next;
    temp->next = NULL;
    free(del_node);
}
void DeleteAnywhere(node *head, int p)
{
    node *temp = head;
    for (int i = 1; i < p - 1; i++)
    {
        temp = temp->next;
    }
    node *del_node = temp->next;
    temp->next = del_node->next;
    del_node->next = NULL;
    free(del_node);
}
void size(node *head)
{
    int s = 0;
    while (head != NULL)
    {
        s++;
        head = head->next;
    }
    printf("size = %d \n", s);
}
void IsEmpty(node *head)
{
    if (head == NULL)
    {
        printf("List is empty.\n");
    }
    else
    {
        printf("List Is not Empty.\n");
    }
}
void FindMiddle(node *head)
{
    node *fast = head, *slow = head;
    while (fast->next != NULL && fast->next->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    printf("Middle Element Is %d", slow->data);
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
int main()
{
    int choice, k;
    node *head = NULL;
    printf("Press 1 to insert node at front\nPress 2 to insert node at end\nPress 3 to insert node at specific poisiton\nPress 4 to delete node from front\nPress 5 to delete node from end\nPress 6 to delete node from specific position\nPress 7 to find the size of the linked list\nPress 8 to find the middle element of the list\nPress 9 to exit\n");
    do
    {
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            scanf("%d", &k);
            InsertFront(&head, k);
            printf("Linked List: ");
            display(head);
            break;
        case 2:
            scanf("%d", &k);
            InsertEnd(&head, k);
            printf("Linked List: ");
            display(head);
            break;
        case 3:
        {
            int p;
            printf("Enter p\n");
            scanf("%d", &p);
            printf("Enter value.\n");
            scanf("%d", &k);
            InsertAnywhere(head, p, k);
            printf("Linked List: ");
            display(head);
            break;
        }
        case 4:
            deleteFront(&head);
            printf("Linked List: ");
            display(head);
            break;
        case 5:
            deleteEnd(&head);
            printf("Linked List: ");
            display(head);
            break;
        case 6:
        {
            int p;
            printf("Enter p: \n");
            scanf("%d", &p);
            DeleteAnywhere(head, p);
            printf("Linked List: ");
            display(head);
            break;
        }
        case 7:
            size(head);
            break;
        case 8:
            FindMiddle(head);
            break;
        }
    } while (choice != 9);
    return 0;
}