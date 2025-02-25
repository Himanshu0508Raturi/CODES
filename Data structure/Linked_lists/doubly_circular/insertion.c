// Insertion in a doubly circular LL.
//  at the beginning,at end and at i(th) pos.
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev, *next;
} *head, *tail, *new_node; // tail is at last node.
void create()
{
    int choice = 1;
    head = NULL;
    while (choice)
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &new_node->data);
        if (head == NULL)
        {
            head = tail = new_node;
            head->next = head;
            head->prev = head;
        }
        else
        {
            tail->next = new_node;
            new_node->prev = tail;
            new_node->next = head;
            head->prev = new_node;
            tail = new_node;
        }
        printf("Enter choice(0,1): ");
        scanf("%d", &choice);
    }
}
void display()
{
    struct node *temp;
    temp = head;
    do
    {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("\n");
}
void insertatbeg()
{
    new_node = (struct node *)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &new_node->data);
    new_node->next = head;
    tail->next = new_node;
    new_node->prev = tail;
    tail = tail->next;
    tail->prev = new_node;
    head = new_node;
    printf("After insertion new node is: \n");
    display();
}
void insertatend()
{
    new_node = (struct node *)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &new_node->data);
    tail->next = new_node;
    new_node->prev = tail;
    new_node->next = head;
    head->prev = new_node;
    printf("After insertion new node is: \n");
    display();
}
void insertatI()
{
    struct node *pre_node;
    int pos, i;
    printf("Enter position: \n");
    scanf("%d", &pos);
    if (pos == 1)
    {
        insertatbeg();
    }
    else
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        printf("Enter data for new node: \n");
        scanf("%d", &new_node->data);

        tail = head;
        for (i = 1; i <= pos; i++) // for i(th) pos i<pos.
        {
            pre_node = tail;
            tail = tail->next;
        }
        new_node->next = tail;
        tail->prev = new_node;
        pre_node->next = new_node;
        new_node->prev = pre_node;
        printf("After insertion new node is: \n");
        display();
    }
}
void main()
{
    int dec;
    create();
    display();
    printf("\nEnter 1 to insert at beggining, 2 at end and 3 at (i)th position.\n");
    scanf("%d", &dec);
    if (dec == 1)
    {
        insertatbeg();
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
        printf("Invalid input: ");
    }
}