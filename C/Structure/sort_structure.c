/*create a structure emp which store info. like empid and emp salary, then write a program to store info. for [n] employye and sort
them on the basis of salary.*/
#include <stdio.h>
struct emp
{
    int id;
    float sal;
};
void main()
{
    struct emp s[10], temp;
    int i,n,j;
     printf("Enter the number of employees.\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter employee ID(%d).\n",i+1);
        scanf("%d",&s[i].id);
        printf("Enter salary.\n");
        scanf("%f",&s[i].sal);
    }
    //sorting logic.
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(s[i].sal>s[j].sal)
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
    printf("Sorting on the basis of salary was:\n");
    for(i=0;i<n;i++)
    {
        printf("%f ",s[i].sal);
    }

}