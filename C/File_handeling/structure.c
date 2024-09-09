/*WAP to read the details of a student and then write it into a file and read the details of a student and then print it on the screen*/
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
    printf("Enter name of student: ");
    gets(a.name);
    printf("\nEnter roll no: ");
    scanf("%d", &a.rn);
    printf("\nEnter fees: ");
    scanf("%d", &a.fs);
    printf("\nEnter DOB: ");
    scanf("%d%d%d", &a.ad.d, &a.ad.m, &a.ad.y);
    fp = fopen("structure.txt", "w+");
    fprintf(fp, "%s\n%d\n%d\n%d-%d-%d", a.name, a.rn, a.fs, a.ad.d, a.ad.m, a.ad.y);//printing data to file
    rewind(fp);
    fscanf(fp, "%s %d %d %d-%d-%d", a.name, &a.rn, &a.fs, &a.ad.d, &a.ad.m, &a.ad.y);
    printf("Name is: %s",a.name);
    printf("\nRoll no: %d",a.rn);
    printf("\nFees: %d",a.fs);
    printf("\nDOB is: %d-%d-%d",a.ad.d, a.ad.m, a.ad.y);
    fclose(fp);

}