// implimenting queue using stack
#include <iostream>
using namespace std;
void enqueue(int q[], int *front, int *rear, int v, int n)
{
    if (*rear == n - 1)
    {
        cout << "Queue if full.";
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
int main()
{
    int n, v;
    cout << "Enter size of queue: ";
    cin >> n;
    int q[n];
    int front = -1, rear = -1;
    enqueue(q, &front, &rear, 12, n);
    enqueue(q, &front, &rear, 13, n);
    enqueue(q, &front, &rear, 14, n);
    enqueue(q, &front, &rear, 15, n);
    enqueue(q, &front, &rear, 16, n);
    display(q, front, rear);
    v = dequeue(q, &front, &rear);
    if (v != -1)
        cout << "element that is dequed is: " << v << endl;
    v = dequeue(q, &front, &rear);
    if (v != -1)
        cout << "element that is dequed is: " << v << endl;
    v = dequeue(q, &front, &rear);
    if (v != -1)
        cout << "element that is dequed is: " << v << endl;
    v = dequeue(q, &front, &rear);
    if (v != -1)
        cout << "element that is dequed is: " << v << endl;
    v = dequeue(q, &front, &rear);
    if (v != -1)
        cout << "element that is dequed is: " << v << endl;
    display(q, front, rear);
    return 0;
}