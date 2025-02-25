/*Enqueue  - fast
dequeue - slow*/
// this is  Method 2
#include <iostream>
using namespace std;
void push(int st[], int *top, int x, int n)
{
    if ((*top) == n - 1)
    {
        cout << "stack is full";
    }
    else
    {
        (*top)++;
        st[*top] = x;
    }
}
int pop(int st[], int *top)
{
    if (*top == -1)
    {
        cout << "Stack is empty.";
    }
    else
    {
        return st[(*top)--];
    }
}
void enqueue2(int st1[], int *top1, int x, int n)
{
    if (*top1 == n - 1)
    {
        cout << "Queue is full";
    }
    else
    {
        push(st1, top1, x, n);
    }
}
int dequeue2(int st1[], int st2[], int *top1, int *top2, int n)
{
    if (*top1 == -1 && *top2 == -1)
    {
        cout << "Queue is empty." << endl;
        return -1;
    }

    if (*top2 == -1)
    {
        while (*top1 != -1)
        {
            push(st2, top2, pop(st1, top1), n);
        }
    }
    return pop(st2, top2);
}

void display2(int st1[], int st2[], int *top1, int *top2, int n)
{
    while ((*top1) != -1)
    {
        push(st2, top2, pop(st1, top1), n);
    }
    for (int i = *top2; i >= 0; i--)
    {
        cout << st2[i] << " ";
    }
}
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int st1[n], st2[n], top1 = -1, top2 = -1;
    enqueue2(st1, &top1, 10, n);
    enqueue2(st1, &top1, 15, n);
    enqueue2(st1, &top1, 19, n);
    display2(st1, st2, &top1, &top2, n);
    cout << "\nDequeue element is: " << dequeue2(st1, st2, &top1, &top2, n) << endl;
    display2(st1, st2, &top1, &top2, n);
    return 0;
}