/*Design an algorithm and a program to implement queue using array. The program should
implement following queue operations:
a) Create() - create a queue
b) EnQueue(k) - insert an element k into the queue
c) DeQueue() - delete an element from the queue
d) IsEmpty() - check if queue is empty or not
e) Size() - finds the size of the queue*/
#include <stdio.h>
int n = 10;
int q[10], front, rear;
void create()
{
    front = -1;
    rear = -1;
}
void Enqueue(int k)
{
    if (rear == n - 1)
    {
        printf("Overflow condition.");
        return;
    }
    else
    {
        if (front = -1)
        {
            front = 0;
        }
        q[++(rear)] = k;
    }
}
void DeQueue()
{
    int v;
    if (front == -1)
    {
        printf("Underflow condition");
    }
    else
    {

        front++;
        if (front > rear)
        {
            front = -1;
            rear = -1;
        }
    }
}
int IsEmpty()
{
    return front = -1;
}
void size()
{
    printf("Size = %d\n", (rear - front) + 1);
}
void display()
{
    for (int i = front; i <= rear; i++)
    {

        printf("%d ", q[i]);
    }
}
void main()
{
    int choice = 1;
    int v, r;
    create();
    do
    {
        printf("Press\n1 to enqueue.\n2 to dequeue\n3 to calculate size\n4 to exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:

            scanf("%d", &v);
            Enqueue(v);
            break;
        case 2:
            DeQueue();
            break;

        case 3:
            size();
            break;
        }
    } while (choice != 4);
    display();
    printf("\n");
    size();
}