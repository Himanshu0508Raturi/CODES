// to perform deletion operation in singly linked lists.
// at beginning, at end, at (i)th position.
#include <stdio.h>
#include <stdlib.h>

// Define the node structure
struct node
{
    int data;
    struct node *next;
};
void display(struct node *head)
{
    struct node *temp;
    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
void deletefrombeginning(struct node *head)
{
    struct node *temp;
    temp = head;
    head = head->next;
    free(temp);
    display(head);
}
void deletefromend(struct node *head)
{
    struct node *temp, *pre_node;
    temp = head;
    while (temp->next != NULL)
    {
        pre_node = temp;
        temp = temp->next;
    }
    pre_node->next = NULL;
    free(temp);
    display(head);
}
void deletefromI(struct node *head)
{
    struct node *temp, *next_node;
    int pos, i;
    printf("Enter position: ");
    scanf("%d", &pos);
    temp = head;
    for (i = 1; i < pos - 1; i++)
    {
        temp = temp->next;
    }
    next_node = temp->next;
    temp->next = next_node->next;
    free(next_node);
    display(head);
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
    printf("\nEnter 1 to delete from beggining, 2 from end and 3 from (i)th position.\n");
    scanf("%d", &ch);
    if (ch == 1)
    {
        deletefrombeginning(head);
    }
    else if (ch == 2)
    {
        deletefromend(head);
    }
    else if (ch == 3)
    {
        deletefromI(head);
    }
    else
    {
        printf("Invalid input.\n");
    }
}
