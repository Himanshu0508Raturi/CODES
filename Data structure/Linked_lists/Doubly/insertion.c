// to perform insertion operation at beginning, at end and after i(th) position.
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next, *prev;
};
struct node *head, *new_node;
void display()
{
    struct node *temp;
    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
void create()
{
    struct node *temp;
    int choice = 1;
    head = NULL;
    while (choice)
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        printf("Enter data: \n");
        scanf("%d", &new_node->data);
        new_node->next = new_node->prev = NULL;
        if (head == NULL)
        {
            head = temp = new_node;
        }
        else
        {
            temp->next = new_node;
            new_node->prev = temp;
            temp = new_node;
        }
        printf("Enter choice(0,1): ");
        scanf("%d", &choice);
    }
}
int getlen()
{
    struct node *temp;
    int l = 0;
    temp = head;
    while (temp != NULL)
    {
        l++;
        temp = temp->next;
    }
    return l;
}
void insertatbeginning()
{
    new_node = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter data for new node: \n");
    scanf("%d", &new_node->data);
    new_node->prev = NULL;
    new_node->next = head;
    head->prev = new_node;
    head = new_node;
}
void insertatend()
{
    struct node *temp;
    new_node = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter data for new node: \n");
    scanf("%d", &new_node->data);
    new_node->next = NULL;
    temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
    new_node->prev = temp;
}
void insertatI()
{
    struct node *temp, *pre_node;
    int pos, i, l;
    printf("Enter position: \n");
    scanf("%d", &pos);
    if (pos == 1)
    {
        insertatbeginning();
    }
    else if (pos == (l = getlen()))
    {
        insertatend();
    }
    else
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        printf("Enter data for new node: \n");
        scanf("%d", &new_node->data);

        temp = head;
        for (i = 1; i <= pos; i++) // for i(th) pos i<pos.
        {
            pre_node = temp;
            temp = temp->next;
        }
        new_node->next = temp;
        temp->prev = new_node;
        pre_node->next = new_node;
        new_node->prev = pre_node;
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
        insertatbeginning();
        display();
    }
    else if (dec == 2)
    {
        insertatend();
        display();
    }
    else if (dec == 3)
    {
        insertatI();
        display();
    }
    else
    {
        printf("Invalid input: ");
    }
}
/*// to perform insertion operation at beginning, at end and at i(th) position.
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next, *prev;
};
struct node *head, *new_node;
void display()
{
    struct node *temp;
    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
void create()
{
    struct node *temp;
    int choice = 1;
    head = NULL;
    while (choice)
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        printf("Enter data: \n");
        scanf("%d", &new_node->data);
        new_node->next = new_node->prev = NULL;
        if (head == NULL)
        {
            head = temp = new_node;
        }
        else
        {
            temp->next = new_node;
            new_node->prev = temp;
            temp = new_node;
        }
        printf("Enter choice(0,1): ");
        scanf("%d", &choice);
    }
}
void insertatbeginning()
{
    new_node = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter data for new node: \n");
    scanf("%d", &new_node->data);
    new_node->prev = NULL;
    new_node->next = head;
    head->prev = new_node;
    head = new_node;
}
void insertatend()
{
    struct node *temp;
    new_node = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter data for new node: \n");
    scanf("%d", &new_node->data);
    new_node->next = NULL;
    temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
    new_node->prev = temp;
}
void insertatI()
{
    struct node *temp, *pre_node;
    int pos, i;
    new_node = (struct node *)malloc(sizeof(struct node));
    printf("Enter data for new node: \n");
    scanf("%d", &new_node->data);
    printf("Enter position: \n");
    scanf("%d", &pos);
    temp = head;
    for (i = 1; i < pos; i++)
    {
        pre_node = temp;
        temp = temp->next;
    }
    new_node->next = temp;
    temp->prev = new_node;
    pre_node->next = new_node;
    new_node->prev = pre_node;
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
        insertatbeginning();
        display();
    }
    else if (dec == 2)
    {
        insertatend();
        display();
    }
    else if (dec == 3)
    {
        insertatI();
        display();
    }
    else
    {
        printf("Invalid input: ");
    }
}*/