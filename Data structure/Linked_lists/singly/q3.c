/*Assume that you have a sorted singly ll, with a pointer p at the first nodeof ll. write a c function to delete all node that have odd
information in that ll*/
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *p = NULL;
void create()
{
    struct node *new_node, *temp;
    int i, n;
    printf("Enter number of element\n");
    scanf("%d", &n);
    printf("Enter element\n");
    for (i = 0; i < n; i++)
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        scanf("%d", &new_node->data);
        new_node->next = NULL;
        if (p == NULL)
        {
            p = temp = new_node;
        }
        else
        {
            temp->next = new_node;
            temp = new_node;
        }
    }
}
void del(struct node *curr_node)
{
    struct node *pre_node = p;
    while (pre_node->next != curr_node)
    {
        pre_node = pre_node->next;
    }
    pre_node->next = curr_node->next;
    free(curr_node);
}
void oddinfo()
{
    struct node *temp = p;
    while (temp != NULL)
    {
        if ((temp->data) % 2 != 0)
        {
            del(temp);
            temp = temp->next;
        }
    }
}
void display()
{
    struct node *temp = p;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void main()
{
    create();
    display();
    oddinfo();
    display();
}