/*18.	Develop a program in C to read a structure in the main program of an Employee that contains Name, EmpCode and Salary as
 the members. Write a function display the details of the employee in the following format.*/
#include <stdio.h>
struct date
{
    char d[15];
};
struct empl
{
    char name[20], cd[10];
    float salary;
    struct date b;
};
void show(struct empl[], int);
void main()
{
    struct empl s[20];
    int i, n;
    printf("Enter the number of employee.\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter name of employee(%d):", i + 1);
        scanf(" %[^\n]s", s[i].name);
        printf("\nEnter code:");
        scanf(" %[^\n]s", s[i].cd);
        printf("\nEnter date of birth.\n");
        scanf(" %[^\n]s", s[i].b.d);
        printf("\nEnter salary:");
        scanf("%f", &s[i].salary);
    }
    show(s, n);
}
void show(struct empl a[], int x)
{
    int i;
    for (i = 0; i < x; i++)
    {
        printf("      ABC corporation");
        printf("\nName:          %s", a[i].name);
        printf("\nEmpcode:       %s", a[i].cd);
        printf("\nDOB:           %s", a[i].b.d);
        printf("\nNett. Salary:  Rs.%f\n", a[i].salary);
    }
}