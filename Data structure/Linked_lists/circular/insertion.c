// to perform deletion operation in singly linked lists.
// at beginning, at end, at (i)th position.
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *head, *temp, *new_node;

void display()
{
    temp = head;
    while (temp->next != head)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("%d\n", temp->data);
}

void create()
{
    int choice = 1;
    head = NULL;
    while (choice)
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &new_node->data);
        new_node->next = NULL;
        if (head == NULL)
        {
            temp = head = new_node;
        }
        else
        {
            temp->next = new_node;
            temp = new_node;
        }
        temp->next = head;
        printf("Enter choice(0,1): ");
        scanf("%d", &choice);
    }
}
int getlen()
{
    temp = head;
    int l = 1;
    while (temp->next != head)
    {
        l++;
        temp = temp->next;
    }
    return l;
}
void inseratbeg()
{
    temp = head;
    while (temp->next != head)
    {
        temp = temp->next; // temp is at last node.
    }
    new_node = (struct node *)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &new_node->data);
    new_node->next = head;
    head = new_node;
    temp->next = new_node;
    printf("After insertion at start link list is:\n");
    display();
}
void insertatend()
{
    temp = head; // temp work as a tail of link list.
    while (temp->next != head)
    {
        temp = temp->next; // temp is at last node.
    }
    new_node = (struct node *)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &new_node->data);
    temp->next = new_node;
    new_node->next = head;
    printf("After insertion at end link list is:\n");
    display();
}
void insertatI()
{
    int i, pos, l;
    printf("Enter position: ");
    scanf("%d", &pos);
    if (pos == 1)
    {
        inseratbeg();
    }
    else if (pos == (l = getlen()))
    {
        insertatend();
    }
    else
    {
        temp = head;
        new_node = (struct node *)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &new_node->data);
        for (i = 1; i < pos - 1; i++)
        {
            temp = temp->next;
        }
        new_node->next = temp->next;
        temp->next = new_node;
        printf("After insertion link lists is: \n");
        display();
    }
}
void main()
{
    int dec;
    create();
    printf("Linked list is : \n");
    display();
    printf("Enter 1 to insert at beginning, 2 at end and 3 at i(th) position: ");
    scanf("%d", &dec);
    if (dec == 1)
    {
        inseratbeg();
    }
    else if (dec == 2)
    {
        insertatend();
    }
    else if (dec == 3)
    {
        insertatI();
    }
    else
    {
        printf("Invalid input.");
    }
}