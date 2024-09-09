/*create a structure student which stores info. like name of student ,roll no. and marks in five subject then write a prigram to store
info. about one student and print its percentage.*/
#include<stdio.h>
struct student //This is known as array within a structure.
{
    char name[20];
    int rn;
    int m[5];
};
void main()
{
    struct student a;
    int i,sum=0;
    float avg;
    printf("Enter name of student.\n");
    fflush(stdin);//It clear buffer memory of keyboard.
    gets(a.name);
    printf("Enter roll no.\n");
    scanf("%d",&a.rn);
    printf("Enter marks of five subject.\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a.m[i]);
        sum = sum + a.m[i];
    }
    avg=(float)sum/5;
    printf("Percentage is %f.\n",avg);




}