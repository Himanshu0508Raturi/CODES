// Implement a function in C to search for a specific element in an array using pointers.
#include <stdio.h>

void main()
{
    int a[10], n, i, *p, num,f=0,c=0;
    printf("Enter number of elements.\n");
    scanf("%d", &n);
    printf("Enter elements.\n");
    p = a;
    for (i = 0; i < n; i++)
    {
        scanf("%d", (p + i));
    }
    p = a;
    printf("Enter number to search.\n");
    scanf("%d", &num);
    for (i = 0; i < n; i++)
    {
        if (num == *(p + i))
        {
           f=1;
           break;
        }else
        {
            c++;
        }
    }
    if(f==1)
    {
         printf("%d found at %d index.\n",num,c);
    }else
    {
        printf("Number not found.\n");
    }
}