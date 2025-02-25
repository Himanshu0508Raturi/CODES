#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *next, *prev;
};
typedef struct node node;
void insert_at_first(node **head, int v)
{
    node *new_node = (node *)malloc(sizeof(node));
    new_node->info = v;
    if (*head == NULL)
    {
        *head = new_node;
        (*head)->next = (*head)->prev = *head;
    }
    else
    {
        node *temp = (*head);
        new_node->next = *head;
        while (temp->next != *head)
        {
            temp = temp->next;
        }
        temp->next = new_node;
        new_node->prev = temp;
        *head = new_node;
    }
}
void insert_at_last(node **head, int v)
{
    node *new_node = (node *)malloc(sizeof(node));
    
    new_node->info = v;
    if (*head == NULL)
    {
        *head = new_node;
        new_node->next = new_node->prev = *head;
    }
    else
    {
        node *temp = *head;
        while (temp->next != *head)
        {
            temp = temp->next;
        }
        new_node->next = (*head);
        new_node->prev = temp;
        temp->next = new_node;
        (*head)->prev = new_node;
    }
}
void insert_in_between(node **head, int val_s, int val)
{
    node *temp = *head;
    node *new_node = (node *)malloc(sizeof(node));
    new_node->info = val;
    while (temp->info != val_s)
    {
        temp = temp->next;
    }
    new_node->next = temp->next;
    temp->next->prev = new_node;
    new_node->prev = temp;
    temp->next = new_node;
}
void display(node *head)
{
    node *temp = head;
    while ((head) != temp->next)
    {
        printf("%d ", temp->info);
        temp = temp->next;
    }
    printf("%d\n", temp->info);
    temp = temp->next;
}
void main()
{
    node *head = NULL;
    // insert_at_first(&head, 10);
    // insert_at_first(&head, 20);
    // insert_at_first(&head, 30);
    // insert_at_first(&head, 40);
    // insert_at_first(&head, 50);
    // printf("After Insert at first function: \n");
    // display(head);

    insert_at_last(&head, 10);
    insert_at_last(&head, 20);
    insert_at_last(&head, 30);
    insert_at_last(&head, 40);
    insert_at_last(&head, 50);
    printf("After Insert at last function: \n");
    display(head);

    printf("\nEnter the value after which you want to insert and enter new value: ");
    int val_s, val;
    scanf("%d%d", &val_s, &val);
    insert_in_between(&head, val_s, val);
    display(head);
}