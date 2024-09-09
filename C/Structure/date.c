/* create a structure data which stores info. like day,month and year then write a program to input one date and print it in
(dd-mm-yyyy) this fromat*/
#include <stdio.h>
struct date
{
    int d, m, y;
};
void main()
{
    struct date t;
    printf("Enter a date.\n");
    scanf("%d%d%d", &t.d, &t.m, &t.y);
    printf("%d-%d-%d", t.d, t.m, t.y);
}