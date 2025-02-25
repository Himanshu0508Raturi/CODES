// to create a linked list and perform traversal operation at run time .
#include <stdio.h>
#include <stdlib.h>

// Define the node structure
struct node
{
    int data;
    struct node *next;
};

void main()
{
    struct node *head = NULL, *new_node, *temp;
    int choice;
    while (choice)
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &new_node->data);
        new_node->next = NULL;
        if (head == NULL)
        {
            head = temp = new_node;
        }
        else
        {
            temp->next = new_node;
            temp = new_node;
        }
        printf("Enter choice to continue(0,1): ");
        scanf("%d", &choice);
    }
    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
/*// to create a linked list and perform traversal operation at run time .
#include <stdio.h>
#include <stdlib.h>

// Define the node structure
struct node
{
    int data;
    struct node *next;
};

void main()
{
    struct node *head= NULL, *new_node, *temp;
    int i,n;
    printf("Enter number of nodes: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        printf("Enter data for %d node: ",i+1);
        scanf("%d", &new_node->data);
        new_node->next = NULL;
        if(head==NULL)
        {
            head=temp=new_node;
        }else
        {
            temp->next=new_node;
            temp=new_node;
        }
    }
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }

}
*/
