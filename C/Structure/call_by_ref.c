/*write a structure to store the roll. no. ,name ,age (between 12 to 15 ) and address of student (more than 10),store the info. of the
students.
1. write a function to print the name of all the students having age 15.
2. Write another function to print the names of all the students having even roll no.
3. write another function to display the details of student whose roll. no. is given(means for all).*/
#include <stdio.h>
#include <string.h>
struct info
{
    char name[15], add[20];
    int rn, age;
};
void age(struct info *, int);
void even(struct info *, int);
void detail(struct info *, int);
void main()
{
    struct info d[10];
    int i, n;
    printf("Enter the number of students.\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        fflush(stdin);
        printf("Enter name: ");
        gets(d[i].name);
        printf("\nEnter roll. no.: ");
        scanf("%d", &d[i].rn);
        printf("\nEnter age: ");
        scanf("%d", &d[i].age);
        printf("\nEnter address: ");
        fflush(stdin);
        gets(d[i].add);
    }
    age(d, n);
    even(d, n);
    detail(d,n);
}
void age(struct info *p, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (p[i].age == 15)
        {
            printf("\nName of student whose age is 15: %s", p[i].name);
        }
    }
}
void even(struct info *p, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (p[i].rn % 2 != 0)
        {
            printf("\nName of even roll no. student: %s",p[i].name);
        }
    }
}
void detail(struct info *p, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\nName is: %s", p[i].name);
        printf("\nRoll no: %d", p[i].rn);
        printf("\nAge is: %d", p[i].age);
        printf("\nAddress is: %s", p[i].add);
    }
}