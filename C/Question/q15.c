/*15.Develop a C program to display Name, Roll Number, Date of Birth and Date of Admission details of a student read from the
keyboard where the date of birth and date of admission further consists of three members such as day, month and year in a separate
structure. Implement using a C structure*/
#include <stdio.h>
struct date
{
    int d, m, y;
};
struct student
{
    char name[20];
    int rn;
    struct date dob, doa;
};
void main()
{
    struct student s;
    printf("Enter name : ");
    scanf(" %[^\n]s", s.name);
    printf("\nEnter roll no: ");
    scanf("%d", &s.rn);
    printf("\nEnter date of birth: ");
    scanf("%d%d%d", &s.dob.d, &s.dob.m, &s.dob.y);
    printf("\nEnter date of admission: ");
    scanf("%d%d%d", &s.doa.d, &s.doa.m, &s.doa.y);
    printf("\n*******details of student are.*******\n");
    printf("Name is: %s", s.name);
    printf("\nRoll no is: %d", s.rn);
    printf("\nDate of birth is :%d-%d-%d", s.dob.d, s.dob.m, s.dob.y);
    printf("\nDate of admission is:%d-%d-%d", s.doa.d, s.doa.m, s.doa.y);
}