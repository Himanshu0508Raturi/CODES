#include<stdio.h>
//this programme to convert degree celcius to kelvin.
float main()
{
    float t;
    printf("Enter the temperature in celcius\n",t);
    scanf("%f",&t);
    printf("temperature in kelvin is %f",273.15+t );
    return 0;
}