// to find the length of a linked list.
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
int getlength(struct node *head)
{
    int c=0;
    struct node *temp;
    temp=head;
    while(temp != NULL)
    {
        c++;
        temp=temp->next;
    }
    return c;
}
void main()
{
    struct node *head = NULL, *node, *temp;
    int choice,l;
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
        printf("Enter choice(0,1): ");
        scanf("%d", &choice);
    }
    l=getlength(head);
    printf("%d",l);
}