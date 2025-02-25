#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *next, *prev;
};
typedef struct node node;
void insert_at_first(node **head, node **last, int v)
{
    node *new_node = (node *)malloc(sizeof(node));
    new_node->info = v;
    new_node->next = new_node->prev = NULL;
    if (*head == NULL)
    {
        *head = *last = new_node;
    }
    else
    {
        (*head)->prev = new_node;
        new_node->next = *head;
        *head = new_node;
    }
}
void insert_at_last(node **head, node **last, int v)
{
    node *new_node = (node *)malloc(sizeof(node));
    new_node->info = v;
    new_node->next = new_node->prev = NULL;
    if (*head == NULL)
    {
        *head = *last = new_node;
    }
    else
    {
        new_node->prev = *last;
        (*last)->next = new_node;

        *last = new_node;
    }
}
void insert_in_between(node **head, int val_s, int val)
{
    node *temp = *head;
    node *new_node = (node *)malloc(sizeof(node));
    new_node->info = val;
    new_node->next = new_node->prev = NULL;
    while (temp->info != val_s)
    {
        temp = temp->next;
    }
    new_node->next = temp->next;
    temp->next->prev = new_node;
    temp->next = new_node;
    new_node->prev = temp;
}
void display(node *head)
{
    while ((head) != NULL)
    {
        printf("%d ", head->info);
        head = head->next;
    }
}
void main()
{
    node *head = NULL, *last = NULL;
    // insert_at_first(&head, &last, 10);
    // insert_at_first(&head, &last, 20);
    // insert_at_first(&head, &last, 30);
    // insert_at_first(&head, &last, 40);
    // insert_at_first(&head, &last, 50);
    // printf("After Insert at first function: \n");
    // display(head);

    insert_at_last(&head, &last, 10);
    insert_at_last(&head, &last, 20);
    insert_at_last(&head, &last, 30);
    insert_at_last(&head, &last, 40);
    insert_at_last(&head, &last, 50);
    printf("After Insert at last function: \n");
    display(head);

    printf("\nEnter the value after which you want to insert and enter new value: ");
    int val_s, val;
    scanf("%d%d", &val_s, &val);
    insert_in_between(&head, val_s, val);
    display(head);
}