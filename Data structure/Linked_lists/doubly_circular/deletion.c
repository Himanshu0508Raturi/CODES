// deletion in a doubly circular LL.
//  at the beginning,at end and at i(th) pos.
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev, *next;
} *head, *tail; // tail is at last node.
void create()
{
    int choice = 1;
    head = NULL;
    while (choice)
    {
        struct node *new_node;
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
    struct node *tail;
    tail = head;
    do
    {
        printf("%d ", tail->data);
        tail = tail->next;
    } while (tail != head);
    printf("\n");
}
void deleteatbeg()
{
    struct node *temp;
    temp = head;
    head = head->next;
    head->prev = tail;
    tail->next = head;
    free(temp);
    printf("After deletion link list become: \n");
    display();
}
void deleteatend()
{
    struct node *temp;
    temp = tail;
    tail = tail->prev;
    tail->next = head;
    head->prev = tail;
    free(temp);
    printf("After deletion link list become: \n");
    display();
}
void deleteatI()
{
    struct node *current_node, *pre_node, *next_node;
    int pos, i;
    printf("Enter position: ");
    scanf("%d", &pos);
    current_node = head;
    for (i = 1; i < pos; i++)
    {
        pre_node=current_node;
        current_node=current_node->next;
    }
    next_node=current_node->next;
    pre_node->next=next_node;
    next_node->prev=pre_node;
    free(current_node);
    printf("After deletion link list become: \n");
    display();
}
void main()
{
    int dec;
    create();
    display();
    printf("\nEnter 1 to delete at beggining, 2 at end and 3 at (i)th position.\n");
    scanf("%d", &dec);
    if (dec == 1)
    {
        deleteatbeg();
    }
    else if (dec == 2)
    {
        deleteatend();
    }
    else if (dec == 3)
    {
        deleteatI();
    }
    else
    {
        printf("Invalid input: ");
    }
}