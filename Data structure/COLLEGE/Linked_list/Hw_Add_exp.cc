//queue using L.L.
//enqueue dequeue
#include<iostream>
using namespace std;
struct node
{
    int cons;
    int exp;
    struct node *next;
};
typedef struct node node;
void create_node(node **list1 ,int cons, int exp)
{
    node *new_node = (node *)malloc(sizeof(node));
    new_node->cons=cons;
    new_node->exp=exp;
    new_node->next=NULL;
    node *temp = *list1;
    if(*list1 == NULL)
    {
        *list1 = new_node;
    }else
    {   
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
        
    }
    
}

// node * add_list(node * list1 , node * list2)
// {
//     if(list1->exp > list2->exp)
//     {
//         list3 = create_node(list3,list1->exp,list1->cons);
//         list1=list1->next;
//     }else if(list1->exp < list2->exp)
//     {
//         create_node(list3,list2->)
//     }
// }
void display(node **head)
{
    while(*head != NULL)
    {
        cout<<(*head)->cons<<"x^"<<(*head)->exp<<"+";
        *head=(*head)->next;
    }
    cout<<"\n";
}
int main()
{
    node *list1  = NULL,*list2 = NULL;
    create_node(&list1,3,3);
    create_node(&list1,2,2);
    create_node(&list1,1,1);
    // create_node(&list2,2,2);
    // create_node(&list1,3,1);
    // create_node(&list1,1,0);
    display(&list1);
}
   