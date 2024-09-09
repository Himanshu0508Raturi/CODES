#include<stdio.h>
//this programme to convert degree kelvin to celcius.
float main()
{
    float t;
    printf("Enter the temperature in kelvin\n",t);
    scanf("%f",&t);
    printf("Temperature in celcius is %f",t-273.15);
    return 0;
}