#include <stdio.h>
#define n 10
int st[n],top = -1;
int create()
{
    int top = -1;
    return (top);
}
void push(int v)
{
    if((top) == n-1)
    {
        printf("Overflow condition.\n");
    }else
    {
        st[++(top)] = v;
    }
}
int pop()
{   int r ;
    if((top) == -1)
    {
        printf("Underflow condition.\n");
    }else
    {
        r  = st[(top)--];
    }
    return r;
}
int Isempty()
{
    if((top) == -1)
    {
        return 1;
    }else
    {
        return 0;
    }
}
void size()
{
    printf("%d ",top + 1);
}
void print()
{
    int i;
    printf("Stack- ");
    // for(i = (top) ; i >= 0 ; i--)
    // {
    //     printf("%d ",st[i]);
    // }
    for(i = 0 ; i<= top; i++)
    {
        printf("%d ",st[i]);
    } 
    printf("\n");
}
void main()
{
    //printf("Enter Size: ");
    //scanf("%d",&n);
    int t,i;
    scanf("%d",&t);
    for(i = 0 ; i <t ; i++)
    {
    int choice = 10, k, v;
    int top = create();
    do
    {
        printf("Press:\n1 to push\n2 to pop\n3 to calculate size\n4 to exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            scanf("%d", &k);
            push(k);
            break;
        case 2:
            v = pop();
            break;
        case 3:
            size();
            break;
        }
    } while (choice != 4);
    print();
    }
}