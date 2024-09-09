// to print the average of three numbers.
#include <stdio.h>

int main()
{
    float x, y, z;
    printf("enter 1st number: \n", x);
    scanf("%f", &x);

    printf("enter 2nd number: \n", y);
    scanf("%f", &y);

    printf("enter 3rd number: \n", z);
    scanf("%f", &z);

    float avg = (x + y + z) / 3;
    printf("the average of 3 number is:%f\n", avg);
    return 0;
}