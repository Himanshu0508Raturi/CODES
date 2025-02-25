// implementin stack using queue without stl Method 1.
// error in this.
#include <iostream>
using namespace std;
void enqueue(int q[], int *front, int *rear, int x, int n)
{
    if ((*rear) == n - 1)
    {
        cout << "Stack is full" << endl;
    }
    else
    {
        if (*front == -1)
        {
            *front = 0;
        }
        q[++(*rear)] = x;
    }
}
int dequeue(int q[], int *front, int *rear)
{
    if (*front == -1 || *front > *rear)
    { // Empty queue check
        cout << "Queue is empty" << endl;
        return -1; // Error value, you may choose a different value for error handling
    }
    int value = q[*front]; // Get front element
    if (*front == *rear)
    { // Last element in queue
        *front = -1;
        *rear = -1; // Reset queue
    }
    else
    {
        (*front)++;
    }
    return value;
}
void display(int q[], int front, int rear)
{
    int i;
    for (i = front; i <= rear; i++)
    {
        if (i != -1)
        {
            cout << q[i] << " ";
        }
    }
}
void push(int q1[], int q2[], int *front1, int *front2, int *rear1, int *rear2, int x, int n)
{
    enqueue(q2, front2, rear2, x, n);
    while ((*rear1) != -1)
    {
        enqueue(q2, front2, rear2, dequeue(q1, front1, rear1), n);
    }
    swap(*front1, *front2);
    swap(*rear1, *rear2);
}
int pop(int q1[], int *front1, int *rear1)
{
    return dequeue(q1, front1, rear1);
}
int main()
{
    int n;
    cout << "Enter size of stack: ";
    cin >> n;
    int q1[n], front1 = -1, rear1 = -1;
    int q2[n], front2 = -1, rear2 = -1;
    push(q1, q2, &front1, &front2, &rear1, &rear2, 10, n);
    push(q1, q2, &front1, &front2, &rear1, &rear2, 20, n);
    push(q1, q2, &front1, &front2, &rear1, &rear2, 30, n);
    push(q1, q2, &front1, &front2, &rear1, &rear2, 40, n);
    push(q1, q2, &front1, &front2, &rear1, &rear2, 50, n);
    display(q1, front1, rear1);
    return 0;
}