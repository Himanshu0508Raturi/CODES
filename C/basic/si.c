#include<stdio.h>
//This is to calculate simple interest.
float main()
{
    float P,R,T;
    printf("Enter the principle amount(P)\n",P);
    scanf("%f",&P);
    
    printf("Enter the rate of interest(R)\n",R);
    scanf("%f",&R);

     printf("Enter the time duration(T)\n",T);
     scanf("%f",&T);

     printf("Simple interest is : %f",P*R/100*T/100);
     return 0;
}