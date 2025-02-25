#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} node;
node *create(int v)
{
    node *temp = (node *)malloc(sizeof(node));
    temp->data = v;
    temp->next = NULL;
    return temp;
}
void insert(node **head, int v)
{
    node *new_node = create(v);
    if ((*head) == NULL)
    {
        *head = new_node;
    }
    else
    {
        node *temp = (*head);
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }
}
void split_odd_even(node *head, node **ev_head, node **od_head)
{
    int l = 1;
    node *temp = head;
    node *dummy_odd = create(-1), *t1 = dummy_odd;
    node *dummy_even = create(-1), *t2 = dummy_even;
    while (temp != NULL)
    {
        if (l % 2 == 0)
        {
            t2->next = temp;
            temp = temp->next;
            t2 = t2->next;
        }
        else
        {
            t1->next = temp;
            temp = temp->next;
            t1 = t1->next;
        }
        l++;
    }
    t1->next = NULL;
    t2->next = NULL;
    (*ev_head) = dummy_even->next;
    (*od_head) = dummy_odd->next;
}
void display(node *head)
{
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}
void main()
{
    node *head = NULL;
    int ch, v;
    printf("Press:\n1 to insert node.\n2 to exit.\n");
    do
    {
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
        {
            scanf("%d", &v);
            insert(&head, v);
            break;
        }
        }
    } while (ch != 2);
    printf("Original List: ");
    display(head);
    node *evenHead, *oddHead;
    split_odd_even(head, &evenHead, &oddHead);
    printf("Even numbered nodes list: ");
    display(evenHead);
    printf("Even numbered nodes list: ");
    display(oddHead);
}