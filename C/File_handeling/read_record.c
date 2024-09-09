//WAP to read the records of a particular student from a file.
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
    struct student a[10];
    FILE *fp;
    int r,n,i;
    printf("Enter number of students:\n");
    scanf("%d",&n);
    fp = fopen("Structure1.txt", "w+");
    for(i=0;i<n;i++)
    {
    printf("Enter name of student(%d): ",i+1);
    fflush(stdin);
    gets(a[i].name);
    printf("Enter roll no(%d): ",i+1);
    scanf("%d", &a[i].rn);
    printf("Enter fees(%d): ",i+1);
    scanf("%d", &a[i].fs);
    printf("Enter DOB(%d): ",i+1);
    scanf("%d%d%d", &a[i].ad.d, &a[i].ad.m, &a[i].ad.y);
    fprintf(fp,"%s\n%d\n%d\n%d-%d-%d\n",a[i].name,a[i].rn,a[i].fs,a[i].ad.d,a[i].ad.m,a[i].ad.y);
    
    }
    rewind(fp);
    printf("\nEnter the roll no. of that student whose record has to be read.");
    scanf("%d",&r);
    for(i=0;i<n;i++)
    {
        if(r==a[i].rn)
        {
            printf("Name is: %s",a[i].name);
            printf("\nRoll No: %d",a[i].rn);
            printf("\nFees: ",a[i].fs);
            printf("\nDOB: %d-%d-%d",a[i].name,a[i].rn,a[i].fs,a[i].ad.d,a[i].ad.m,a[i].ad.y);
        }
    }
}