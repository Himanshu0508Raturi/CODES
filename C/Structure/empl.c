/*Create a structure employee which store information like name of the employee,salary,date of joining and date of birth then write
a program to store info. of n employees and print the name of those employees whose year of joining is before 2000.*/
#include <stdio.h> // struct emp another way.
struct date        //  {
{                  //      char name[10];
    int d, m, y;   //      int s;
};                 //      struct date{
struct emp         //   int d,m,y;
{                  //      }j,b;
    char name[20]; //          };
    float sal;
    struct date dob, doj;
};
void main()
{
    struct emp s[10];
    int i, n;
    printf("Enter the number of employees.\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter name of (%d) employee.\n", i + 1);
        fflush(stdin);
        scanf(" %19[^\n]", s[i].name); // Read employee name, limited to 19 characters (with room for NULL)
        printf("Enter salary.\n");
        scanf("%f", s[i].sal);
        printf("Enter date of birth.\n");
        scanf("%d%d%d", &s[i].dob.d, &s[i].dob.m, &s[i].dob.y);
        printf("Enter year of joining.\n");
        scanf("%d%d%d", &s[i].doj.d, &s[i].doj.m, &s[i].doj.y);
    }
    printf("\nEmployees who joined before 2000:\n");
    for (i = 0; i < n; i++)
    {
        if (s[i].doj.y < 2000)
        {
            puts(s[i].name);
        }
    }
}