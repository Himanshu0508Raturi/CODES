// implimentation of queue using array.
#include <stdio.h>
#define n 10
int queue[n];
int front = -1, rear = -1;
void inqueue(int x)
{
    if (rear == n - 1)
    {
        printf("Overflow condition. \n");
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }
    else
    {
        rear++;
        queue[rear] = x;
    }
}
void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("underflow condition. \n");
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        printf("Deleted element from queue is %d\n", queue[front]);
        front++;
    }
}
void display()
{
    int i;
    if (front == rear == -1)
    {
        printf("No element in queue. \n");
    }
    else
    {
        for (i = front; i < rear + 1; i++)
        {
            printf("%d ", queue[i]);
        }
    }
    printf("\n");
}
void peek()
{
    printf("%d", queue[front]);
    printf("\n");
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
