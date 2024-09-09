/*WAP to read and display the information of all the students in the class . Then edit the details of the (i)th student and redisplay
the entire information.*/
#include <stdio.h>
struct student
{
    char name[20];
    int rn, fs;
    struct date
    {
        int d, m, y;
    } dob;
};
void show(struct student[], int);
void edit(struct student[], int);
void main()
{
    struct student s[10];
    int i, n, sg, e;
    printf("Enter the number of students.\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter roll.no:");
        scanf("%d", &s[i].rn);
        printf("\nEnter name:");
        scanf(" %[^\n]s", s[i].name);
        printf("\nEnter fees:");
        scanf("%d", &s[i].fs);
        printf("\nEnter DOB:");
        scanf("%d%d%d", &s[i].dob.d, &s[i].dob.m, &s[i].dob.y);
    }
    show(s, n);
    printf("enter 1 to edit the details otherwise press 0.\n");
    scanf("%d", &sg);
    if (sg == 0)
    {
        // do nothing;
    }
    else if (sg == 1)
    {
        printf("Enter the roll no. of that student whose record has to be edited:");
        scanf("%d", &e);
        edit(s, e);
        show(s, n);
    }
}
void show(struct student s[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\n*****Details of student %d*****", i + 1);
        printf("\nName:          %s", s[i].name);
        printf("\nRoll.no:       %d", s[i].rn);
        printf("\nDOB:           %d-%d-%d", s[i].dob.d, s[i].dob.m, s[i].dob.y);
        printf("\nfees:          Rs.%d\n", s[i].fs);
    }
}
void edit(struct student s[], int x)
{
    printf("\nEnter new roll no:");
    scanf("%d", &s[x - 1].rn);
    printf("\nEnter new name:");
    scanf(" %[^\n]s", s[x - 1].name);
    printf("\nEnter fees:");
    scanf("%d", &s[x - 1].fs);
    printf("\nEnter DOB:");
    scanf("%d-%d-%d", &s[x - 1].dob.d, &s[x - 1].dob.m, &s[x - 1].dob.y);
}