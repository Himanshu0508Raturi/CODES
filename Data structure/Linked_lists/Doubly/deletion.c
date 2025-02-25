// to perform deletion operation in doubly linked lists.
// at beginning, at end, at (i)th position.
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next, *prev;
};
struct node *head, *temp;
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
void display()
{
    struct node *temp;
    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void create()
{
    struct node *new_node;
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
void deletefrombeginning()
{
    temp = head;
    head = head->next;
    head->prev = NULL;
    free(temp);
    printf("After deletion from beginning:\n");
    display();
}
void deletefromend()
{
    struct node *pre_node;
    temp = head;
    while (temp->next != NULL)
    {
        pre_node = temp;
        temp = temp->next;
    }
    pre_node->next = NULL;
    free(temp);
    printf("After deletion from end: \n");
    display();
}
void deletefromI()
{
    struct node *pre_node, *current_node, *next_node;
    int pos, i, l;
    printf("Enter position: \n");
    scanf("%d", &pos);
    if (pos == 1)
    {
        deletefrombeginning();
    }
    else if (pos == (l = getlen()))
    {
        deletefromend();
    }
    else
    {
        current_node = head;
        for (i = 1; i < pos; i++)
        {
            current_node = current_node->next;
        }
        pre_node = current_node->prev;
        next_node = current_node->next;
        pre_node->next = next_node;
        next_node->prev = pre_node;
        free(current_node);
        printf("After deletion Linked lists become: \n");
        display();
    }
}
void main()
{
    int dec;
    create();
    display();
    printf("Enter 1 to delete from start , 2 to delete from end and 3 to delete from i(th) position: \n");
    scanf("%d", &dec);
    if (dec == 1)
    {
        deletefrombeginning();
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