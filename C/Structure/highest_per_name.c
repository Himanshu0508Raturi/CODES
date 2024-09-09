/*create a structure student which stores info. like name of student , roll. no. and marks in 5 subject then write a program to store
info. of N students and then print the name of that student whose percentage is highest.
#include <stdio.h>
struct student
{
    char name[20];
    int rn, m[5];
};
void main()
{
    struct student s[10];
    int i, j, n,sum=0,max,ind;
    float p[10];
    printf("Enter the number of students.\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter name of (%d) student.\n",i+1);
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
        p[i]=sum/5;
    }
    max=p[0];
    for(i=1;i<n;i++)
    {
        if(max<p[i])
        {
            max=p[i];
             ind=i;
        }
    }
    fflush(stdin);
    puts(s[ind].name);
}*/
// main solution.
#include <stdio.h>
struct student
{
    char name[30];
    int roll_no, m[5];
    float p;
};
void main()
{
    struct student s[10];
    int i, j, sum = 0, n, max = 0, ind;
    printf("Enter the number of students.\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter name of (%d) student.\n", i + 1);
        fflush(stdin); // it clear buffer memory of keyboard.
        gets(s[i].name);
        printf("Enter roll. no.\n");
        scanf("%d", &s[i].roll_no);
        printf("Enter marks of five sub.\n");
        sum = 0;
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &s[i].m[j]);
            sum += s[i].m[j];
        }
        s[i].p = sum / 5;
    }
    max = s[0].p;
    for (i = 1; i < n; i++)
    {
        if (max < s[i].p)
        {
            max = s[i].p;
            ind = i;
        }
    }
    puts(s[ind].name);
}