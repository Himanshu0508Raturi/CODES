#include <stdio.h>
#include <stdlib.h>
struct node
{
    char info;
    struct node *next;
};
typedef struct node node;

void insert(node **head, node **last, char *v)
{
    node *temp = (node *)malloc(sizeof(node));
    temp->info = *v;
    temp->next = NULL;
    if (*head == NULL)
    {
        *head = temp;
        *last = temp;
    }
    else
    {
        (*last)->next = temp;
        *last = temp;
    }
}
void reverse(node **head)
{
    node *pre_node, *current_node, *next_node;
    pre_node = NULL;
    current_node = next_node = *head;
    while (next_node != NULL)
    {
        next_node = next_node->next;
        current_node->next = pre_node; // It create reverse link.
        pre_node = current_node;
        current_node = next_node;
    }
    *head = pre_node;
}
void display(node *head)
{
    while (head != NULL)
    {
        printf("%C ", head->info);
        head = head->next;
    }
    printf("\n");
}
int check_pallindrome(node *head, node *mid, node *last)
{
    int f = 0;
    node *mid_next = mid->next;
    node *mid_pre = head;
    while (mid_pre != mid && mid_next != NULL)
    {
        if (mid_pre->info != mid_next->info)
        {
            f = 1; // means not equal.
        }
        mid_pre = mid_pre->next;
        mid_next = mid_next->next;
    }
    if (f == 1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    node *head = NULL, *last = NULL;
    insert(&head, &last, "r");
    insert(&head, &last, "a");
    insert(&head, &last, "c");
    insert(&head, &last, "e");
    insert(&head, &last, "c");
    insert(&head, &last, "a");
    insert(&head, &last, "r");

    // iTopiNonAvevanoNipoti
    // insert(&head, &last, "i");
    // insert(&head, &last, "t");
    // insert(&head, &last, "o");
    // insert(&head, &last, "p");
    // insert(&head, &last, "i");
    // insert(&head, &last, "n");
    // insert(&head, &last, "o");
    // insert(&head, &last, "n");
    // insert(&head, &last, "a");
    // insert(&head, &last, "v");
    // insert(&head, &last, "e");
    // insert(&head, &last, "v");
    // insert(&head, &last, "a");
    // insert(&head, &last, "n");
    // insert(&head, &last, "o");
    // insert(&head, &last, "n");
    // insert(&head, &last, "i");
    // insert(&head, &last, "p");
    // insert(&head, &last, "o");
    // insert(&head, &last, "t");
    // insert(&head, &last, "i");

    display(head);

    // finding middle of linked list.
    node *fastp = head, *slowp = head, *mid;
    while (fastp != NULL && fastp->next != NULL)
    {
        fastp = fastp->next->next;
        slowp = slowp->next;
    }
    mid = slowp;
    reverse(&mid->next);
    display(head);
    if (!check_pallindrome(head, mid, last))
    {
        printf("Not pallindrome.");
    }
    else
    {
        printf("pallindrome.");
    }
    return 0;
}