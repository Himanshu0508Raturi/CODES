/*Q4. Draw a flowchart to pass an array to a function, receive it through pointer and replace
each element with its cube. Print the resultant array in main*/
#include <stdio.h>
#include <math.h>
void cube(int *, int);
void main()
{
    int a[20], n, i;
    printf("Enter number of elements.\n");
    scanf("%d", &n);
    printf("Enter elements.\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    cube(a, n);
    printf("Elements after cubes are:-\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
void cube(int *p, int x)
{
    int i;
    for (i = 0; i < x; i++)
    {
        *(p + i) = pow(*(p + i), 3);
    }
}