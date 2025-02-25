// to perform deletion operation in circular linked lists.
// at beginning, at end, at (i)th position.
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *head, *temp;

void create()
{
    struct node *new_node;
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
void display()
{
    temp = head;
    while (temp->next != head)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("%d", temp->data);
    printf("\n");
}
void deletefrombeg()
{
    temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    head = head->next;
    free(temp->next);
    temp->next = head;

    printf("After deletion link list is:- \n");
    display();
}
void deletefromend()
{
    struct node *pre_node;
    temp = head;
    while (temp->next != head)
    {
        pre_node = temp;
        temp = temp->next;
    }
    pre_node->next = head;
    free(temp);
    printf("After deletion link list is:- \n");
    display();
}
void deletefromI()
{
    struct node *pre_node;
    int pos, i;
    printf("Enter position: ");
    scanf("%d", &pos);
    temp = head;
    for (i = 1; i < pos; i++)
    {
        pre_node = temp;
        temp = temp->next;
    }
    pre_node->next = temp->next;
    free(temp);
    printf("After deletion link list is:- \n");
    display();
}
void main()
{
    int dec;
    create();
    printf("Linked list is : \n");
    display();
    printf("Enter 1 to delete at beginning, 2 at end and 3 at i(th) position: ");
    scanf("%d", &dec);
    if (dec == 1)
    {
        deletefrombeg();
    }
    else if (dec == 2)
    {
        deletefromend();
    }
    else if (dec == 3)
    {
        deletefromI();
    }
    else
    {
        printf("Invalid input.");
    }
}