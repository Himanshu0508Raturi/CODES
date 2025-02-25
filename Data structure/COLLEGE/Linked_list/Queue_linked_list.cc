// queue using L.L.
// enqueue dequeue
#include <iostream>
using namespace std;
struct node
{
    int info;
    struct node *next;
};
typedef struct node node;
void enqueue(node **head, node **last, int v)
{
    node *temp = (node *)malloc(sizeof(node));
    temp->info = v;
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
node *dequeue(node *front)
{

    if (front == NULL)
    {
        cout << "Stack is empty" << endl;
        return NULL;
    }
    node *temp = front;
    front = front->next;
    temp->next = NULL;
    cout << "Deleted Value is: " << temp->info << endl;
    free(temp);
    return front;
}
void insert_in_between(node *head, int val_s, int x)
{
    node *new_node = (node *)malloc(sizeof(node));
    new_node->info = x;
    new_node->next = NULL;
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->info == val_s)
        {
            break;
        }
        temp = temp->next;
    }
    // cout<<temp->info;
    new_node->next = temp->next;
    temp->next = new_node;
}
void display(node *head)
{
    while (head != NULL)
    {
        cout << head->info << " ";
        head = head->next;
    }
    cout << "\n";
}
int main()
{
    node *head = NULL, *last = NULL;
    /*head = */ enqueue(&head, &last, 10);
    /*head = */ enqueue(&head, &last, 20);
    /*head = */ enqueue(&head, &last, 30);
    /*head = */ enqueue(&head, &last, 40);
    /*head = */ enqueue(&head, &last, 50);
    display(head);
    // head = dequeue(head);
    // display(head);
    // head = dequeue(head);
    // display(head);
    cout << "Enter that element from the list after which you have to insert value: " << endl;
    int val_s;
    cin >> val_s;
    cout << "Enter value to insert: " << endl;
    int x;
    cin >> x;
    insert_in_between(head, val_s, x);
    display(head);
    return 0;
}