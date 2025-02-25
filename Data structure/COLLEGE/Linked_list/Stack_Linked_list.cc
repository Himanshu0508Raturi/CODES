//stack using L.L.
//push pop
#include<iostream>
using namespace std;
struct node
{
    int info;
    struct node *next;
};
typedef struct node node;
node* push(node *head , int v)
{
    node *temp = (node *)malloc(sizeof(node));
    temp->info=v;
    temp->next=head;
    head = temp;
    return head;
}
node* pop(node* top)
{
    //top represent head.
    if(top == NULL)
    {
        cout<<"Stack is empty"<<endl;
        return NULL;
    }
    node *temp = top;
    top = top->next;
    temp->next = NULL;
    cout<<"Deleted Value is: "<<temp->info<<endl;
    free(temp);
    return top;
}
void insert_in_between(node * head , int val_s, int x)
{
    node *new_node = (node *)malloc(sizeof(node));
    new_node->info=x;
    new_node->next=NULL;
    node *temp = head;
    while(temp!=NULL)
    {
        if(temp->info == val_s)
        {
            break;
        }
        temp = temp->next;
    }
    //cout<<temp->info;
    new_node->next = temp->next;
    temp->next=new_node;
    
}
void display(node *head)
{
    while(head != NULL)
    {
        cout<<head->info<<" ";
        head=head->next;
    }
    cout<<"\n";
}
int main()
{
    node *head  = NULL;
    head = push(head,10);
    head = push(head,20);
    head = push(head,30);
    head = push(head,40);
    head = push(head,50);
    display(head);
    head = pop(head);
    display(head);
    cout<<"Enter that element from the list after which you have to insert value: "<<endl;
    int val_s;
    cin>>val_s;
    cout<<"Enter value to insert: "<<endl;
    int x;
    cin>>x;
    insert_in_between(head,val_s,x);
    display(head);
    return 0;
}