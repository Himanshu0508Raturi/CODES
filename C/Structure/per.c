/*create a structure student which stores info. like name of student , roll. no. and marks in 5 subject then write a program to input
info. of N number of student then print the percentage of all students.*/
#include <stdio.h>
struct student
{
    char name[20];
    int rn, m[5];
};
void main()
{
    struct student s[10];
    int i, j, n,sum=0;
    float p[10];
    printf("Enter the number of students.\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter name of %d student.\n",i+1);
        fflush(stdin);
        gets(s[i].name);
        printf("Enter roll. no.\n");
        scanf("%d",&s[i].rn);
        printf("Enter marks of five sub.\n");
        sum=0;
        for(j=0;j<5;j++)
        {
            scanf("%d",&s[i].m[j]);
            sum+=s[i].m[j];
        }
        p[i]= (float ) sum/5;
    }
    for(i=0;i<n;i++)
    {
        printf("%f ",p[i]);
    }
}