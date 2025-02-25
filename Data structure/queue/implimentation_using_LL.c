// implimentation of queue using array.
#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front = NULL;
struct node *rear = NULL;
void inqueue(int x)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = NULL;
    if (front == NULL && rear == NULL)
    {
        front = rear = newnode;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
    }
}
void dequeue()
{
    struct node *temp;
    temp = front;
    if (front == NULL && rear == NULL)
    {
        printf("Queue is empty.\n");
    }
    else
    {
        front = front->next;
        free(temp);
    }
}
void peek()
{
    if (front == NULL && rear == NULL)
    {
        printf("Queue is empty.\n");
    }
    else
    {
        printf("%d", front->data);
    }
}
void display()
{
    struct node *temp;
    temp = front;
    if (front == NULL && rear == NULL)
    {
        printf("Queue is empty.\n");
    }
    else
    {
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}
void main()
{
    int choice = 1, data;
    do
    {
        printf("Enter input:-\n1.inqueu operation\n2.dequeue operation\n3.peek operation\n4.display\nand 0 for exit.\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter data to put on stack:\n");
            scanf("%d", &data);
            inqueue(data);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        }
    } while (choice != 0);
}