/*create a structure information to store info. like one ineteger,one char,one float type value thrn write a program to input data from
one information and print it.*/
#include <stdio.h>
struct info
{
    int x;
    char y;
    float z;
};
void main()
{
    struct info d;
    printf("Enter one int. one char and one float value.\n");
    scanf("%d %c %f", &d.x, &d.y, &d.z);
    printf("%d %c %f", d.x, d.y, d.z);
}