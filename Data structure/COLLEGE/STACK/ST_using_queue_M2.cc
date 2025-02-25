// Stack using queue.
#include <iostream>
using namespace std;
void enqueue(int q[], int *front, int *rear, int v, int n)
{
    if (*rear == n - 1)
    {
        cout << "stack if full.";
        return;
    }
    else
    {

        if (*front == -1)
        {
            *front = 0;
        }
        q[++(*rear)] = v;
    }
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
int dequeue(int q[], int *front, int *rear)
{
    int v;
    if (*front == -1)
    {
        cout << "Queue is empty.";
        return -1;
    }
    else
    {

        v = q[*front];
        (*front)++;
        if (*front > *rear)
        {
            *front = -1;
            *rear = -1;
        }
    }
    return v;
}
void push(int q1[], int *front1, int *rear1, int x, int n)
{
    enqueue(q1, front1, rear1, x, n);
}
int pop(int q1[], int q2[], int *front1, int *rear1, int *front2, int *rear2, int n)
{
    int i;
    for (i = 0; i < n - 1; i++)
    {
        enqueue(q2, front2, rear2, dequeue(q1, front1, rear1), n);
    }
    int popedElement = dequeue(q1, front1, rear1);

    // Swapping references.
    swap(*front1, *front2);
    swap(*rear1, *rear2);
    return popedElement;
}
int main()
{
    int n;
    cout << "Enter size of stack: ";
    cin >> n;
    int q1[n], q2[n];
    int front1 = -1, rear1 = -1;
    int front2 = -1, rear2 = -1;
    push(q1, &front1, &rear1, 10, n);
    push(q1, &front1, &rear1, 20, n);
    push(q1, &front1, &rear1, 30, n);
    push(q1, &front1, &rear1, 40, n);
    push(q1, &front1, &rear1, 50, n);
    display(q1, front1, rear1);
    int v = pop(q1, q2, &front1, &rear1, &front2, &rear2, n);
    cout << "\nPoped element is: " << v << endl;
    display(q1, front1, rear1);
    return 0;
}