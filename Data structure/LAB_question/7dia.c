#include<stdio.h>
#include<stdlib.h>
int top = -1,n;
int *ptr;
void create()
{
    ptr = (int *)calloc(n,sizeof(int));
}
void push(int x)
{
    if((top) == n-1)
    {
        printf("Overflow condition.\n");
    }else
    {
        (top)++;
        *(ptr + top) = x;
       // [++(top)] = v;
    }
}
int pop()
{
    if(top == -1)
    {
        printf("Underflow.");
    }else
    {
        int temp  = *(ptr + top);
        top--;
        return temp;
    }
}
void size()
{
    printf("%d ",top+1);
}
void print()
{
    int i;
    printf("Stack- ");
    for(i = (top) ; i >= 0 ; i--)
    {
        printf("%d \n", *(ptr + i));
    } 
    printf("\n");
}
void main()
{
    int t,i;
    scanf("%d",&t);
    for(i = 0 ; i <t ; i++)
    {
    printf("Enter N: ");
    scanf("%d",&n);
    int *p;
    create();
    int choice = 10, k, v;
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
            printf("%d\n",v);
            break;
        case 3:
           size();
            break;
        }
    } while (choice != 4);
    print();
    free(p);
    }

}