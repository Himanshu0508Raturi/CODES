/*Design an algorithm and write a program to reverse a queue.*/
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
void display()
{
    for (int i = front; i <= rear; i++)
    {

        printf("%d ", q[i]);
    }
    printf("\n");
}
void reverse()
{
    for (int i = front, j = rear; i <= j; i++, j--)
    {
        int temp = q[i];
        q[i] = q[j];
        q[j] = temp;
    }
}
void main()
{
    int choice = 1;
    int v, r;
    create();
    do
    {
        printf("Press\n1 to insert.\n2 to exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:

            scanf("%d", &v);
            Enqueue(v);
            break;
        }
    } while (choice != 2);
    printf("Initial queue: ");
    display();
    reverse();
    printf("Reverse queue: ");
    display();
}