#include <stdio.h>
#include <stdlib.h>
struct node
{
    int constant;
    int exp;
    struct node *next;
};
typedef struct node node;
void insert(node **head, int exp, int cnst)
{ // CREATING LINKED LIST
    node *temp = (node *)malloc(sizeof(node));
    temp->constant = cnst;
    temp->exp = exp;
    temp->next = NULL;
    if ((*head) == NULL)
    {
        *head = temp;
        return;
    }
    node *temp2 = *head;
    while (temp2->next != NULL)
    {
        temp2 = temp2->next;
    }
    temp2->next = temp;
    return;
}
void add(node *head1, node *head2, node **ans)
{ // LISTS ARE NOT SORTED IN TERMS OF EXPONENT
    while (head1 != NULL && head2 != NULL)
    {
        if (head1->exp < head2->exp)
        {
            insert(ans, head1->exp, head1->constant);
            head1 = head1->next;
        }
        else if (head1->exp > head2->exp)
        {
            insert(ans, head2->exp, head2->constant);
            head2 = head2->next;
        }
        else
        {
            insert(ans, head1->exp, head1->constant + head2->constant); // EXPONENT ARE SAME
            head1 = head1->next;
            head2 = head2->next;
        }
    }
    while (head1)
    {
        insert(ans, head1->exp, head1->constant);
        head1 = head1->next;
    }
    while (head2)
    {
        insert(ans, head2->exp, head2->constant);
        head2 = head2->next;
    }
}
void display(node *ans)
{
    while (ans)
    {
        if (ans->next)
        {
            printf("%dx^%d + ", ans->constant, ans->exp);
            ans = ans->next;
        }
        else
        {
            printf("%dx^%d", ans->constant, ans->exp);
            ans = ans->next;
        }
    }
}
void main()
{
    node *head1 = NULL, *head2 = NULL, *ans = NULL;
    insert(&head1, 2, 3);
    insert(&head1, 1, 2);
    insert(&head1, 0, 1);
    insert(&head2, 2, 2);
    printf("EQUATION 1 = \n");
    display(head1);
    printf("\nEQUATION 2 = \n");
    display(head2);
    add(head1, head2, &ans);
    printf("\n Addition is: \n");
    display(ans);
}