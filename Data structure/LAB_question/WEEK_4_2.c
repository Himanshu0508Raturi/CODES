/* Design an algorithm and a program to implement two stacks by using only one array i.e. both the stacks should use the same array
for push and pop operation. Array should be divided in such a manner that space should be efficiently used if one stack contains very
large number of elements and other one contains only few elements.
#include <stdio.h>
void push(int st[], int *top, int n, int v)
{
    if ((*top) == n - 1)
    {
        printf("Overflow condition.\n");
    }
    else
    {
        st[++(*top)] = v;
    }
}
int pop(int st[], int *top)
{
    char r;
    if ((*top) == -1)
    {
        printf("Underflow condition.\n");
    }
    else
    {
        r = st[(*top)--];
    }
    return r;
}
void print(int st[], int top)
{
    int i;
    for (i = 0; i <= top; i++)
    {
        printf("%d ", st[i]);
    }
    printf("\n");
}

void main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int st1[0], st2[n - 1];
    int top1 = -1, top2 = -1;
    int choice = 10, k, v;
    do
    {
        printf("Press:\n1 to push in stack 1: \n2 to pop from stack 1: \n3 to push in stack 2: \n4 to pop from stack 2: \n5 to exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            scanf("%d", &k);
            push(st1, &top1, n, k);
            break;
        case 2:
            v = pop(st2, &top1);
            break;
        case 3:
            scanf("%d", &k);
            push(st2, &top2, n, k);
            break;
        case 4:
            v = pop(st2, &top2);
            break;
        }
    } while (choice != 5);
    printf("Stack 1: ");
    print(st1, top1);
    printf("Stack 2: ");
    print(st2, top2);
}*/
#include <stdio.h>

void push1(int arr[], int *top1, int top2, int v)
{
    if (*top1 + 1 == top2)
    {
        printf("Overflow condition for Stack 1.\n");
    }
    else
    {
        arr[++(*top1)] = v;
    }
}

void push2(int arr[], int top1, int *top2, int v)
{
    if (*top2 - 1 == top1)
    {
        printf("Overflow condition for Stack 2.\n");
    }
    else
    {
        arr[--(*top2)] = v;
    }
}

int pop1(int arr[], int *top1)
{
    if (*top1 == -1)
    {
        printf("Underflow condition for Stack 1.\n");
        return -1;
    }
    else
    {
        return arr[(*top1)--];
    }
}

int pop2(int arr[], int *top2, int n)
{
    if (*top2 == n)
    {
        printf("Underflow condition for Stack 2.\n");
        return -1;
    }
    else
    {
        return arr[(*top2)++];
    }
}

void print1(int arr[], int top1)
{
    printf("Stack 1: ");
    for (int i = 0; i <= top1; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void print2(int arr[], int top2, int n)
{
    printf("Stack 2: ");
    for (int i = n - 1; i >= top2; i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int top1 = -1, top2 = n;
    int choice, k, v;
    do
    {
        printf("Press:\n1 to push in Stack 1\n2 to pop from Stack 1\n3 to push in Stack 2\n4 to pop from Stack 2\n5 to exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            scanf("%d", &k);
            push1(arr, &top1, top2, k);
            break;
        case 2:
            v = pop1(arr, &top1);
            if (v != -1)
            {
                printf("%d\n", v);
            }
            break;
        case 3:
            scanf("%d", &k);
            push2(arr, top1, &top2, k);
            break;
        case 4:
            v = pop2(arr, &top2, n);
            if (v != -1)
            {
                printf("%d\n", v);
            }
            break;
        }
    } while (choice != 5);
    print1(arr, top1);
    print2(arr, top2, n);
    return 0;
}
