/*WAP to read the details of student until a "-1" is entered and simultaneously write the data to file.*/
#include <stdio.h>
#include <string.h>
struct dob
{
    int d, m, y;
};
struct student
{
    int rn, fs;
    char name[15];
    struct dob ad;
};
void main()
{
    struct student a;
    FILE *fp;
    fp = fopen("Structure1.txt", "w+");
    printf("Enter roll no and press '-1' to exit: ");
    scanf("%d", &a.rn);
    while (a.rn != -1)
    {
    printf("Enter name of student: ");
    fflush(stdin);
    gets(a.name);
    printf("\nEnter fees: ");
    scanf("%d", &a.fs);
    printf("\nEnter DOB: ");
    scanf("%d%d%d", &a.ad.d, &a.ad.m, &a.ad.y);
    fprintf(fp,"%s\n%d\n%d\n%d-%d-%d\n",a.name,a.rn,a.fs,a.ad.d,a.ad.m,a.ad.y);
    printf("Enter roll no: and press '-1' to exit: ");
    scanf("%d", &a.rn);
    }
    fclose(fp);
}