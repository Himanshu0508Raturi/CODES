/*16.Develop a C program to find total and average sales of 'N' employees by reading the details such as empcode, name, and
sales using array of structures.*/
#include <stdio.h>
struct empl
{
    int cd;
    char name[20];
    float sales;
};
void main()
{
    struct empl s[20];
    int i, n;
    float sum = 0;
    printf("Enter the number of employee.\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter name of employee(%d):", i + 1);
        scanf(" %[^\n]s", s[i].name);
        printf("\nEnter code:");
        scanf("%d", &s[i].cd);
        printf("\nEnter sales:");
        scanf("%f", &s[i].sales);
        sum = sum + s[i].sales;
    }
    printf("Total sale is %f", sum);
    printf("\nAverage sale is %f", sum / n);
}