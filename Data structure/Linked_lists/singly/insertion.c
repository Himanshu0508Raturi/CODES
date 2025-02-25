// to perform insertion operation in singly linked lists.
// at beginning, at end, at (i)th position.
#include <stdio.h>
#include <stdlib.h>

// Define the node structure
struct node
{
    int data;
    struct node *next;
};
void Insertatbeginning(struct node *head)
{
    struct node *new_node, *temp;
    new_node = (struct node *)malloc(sizeof(struct node));
    printf("Enter data at new node: ");
    scanf("%d", &new_node->data);
    new_node->next = head;
    head = new_node;
    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
void Insertatend(struct node *head)
{
    struct node *new_node, *temp;
    new_node = (struct node *)malloc(sizeof(struct node));
    printf("Enter data at new node: ");
    scanf("%d", &new_node->data);
    new_node->next = NULL;
    temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
int getlength(struct node *head)
{
    int c = 0;
    struct node *temp;
    temp = head;
    while (temp != NULL)
    {
        c++;
        temp = temp->next;
    }
    return c;
}
void Insertati(struct node *head)
{
    struct node *temp, *new_node;
    int pos, i, r;
    printf("Enter position: \n");
    scanf("%d", &pos);
    if (pos > (r = getlength(head)))
    {
        printf("Not possible.");
    }
    else
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        printf("Enter new node data: ");
        scanf("%d", &new_node->data);
        temp = head;
        for (i = 1; i < pos; i++)
        {
            temp = temp->next;
        }
        new_node->next = temp->next;
        temp->next = new_node;
        temp = head;
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }
}
void main()
{
    struct node *head = NULL, *node, *temp;
    int choice, ch;
    while (choice)
    {
        node = (struct node *)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &node->data);
        node->next = NULL;
        if (head == NULL)
        {
            head = temp = node;
        }
        else
        {
            temp->next = node;
            temp = node;
        }
        printf("Enter choice to continue(0,1): ");
        scanf("%d", &choice);
    }
    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\nEnter 1 to insert at beggining, 2 at end and 3 at (i)th position.\n");
    scanf("%d", &ch);
    if (ch == 1)
    {
        Insertatbeginning(head);
    }
    else if (ch == 2)
    {
        Insertatend(head);
    }
    else if (ch == 3)
    {
        Insertati(head);
    }
    else
    {
        printf("Invalid input.\n");
    }
}
