//Write a program in C which is a Menu-Driven Program to perform a simple calculation{+,-,*,/,√}.
#include<stdio.h>
#include<math.h>

void main(){

    float a,b;
    char op;

    printf("Enter a and b: ");
    scanf("%f%f",&a,&b);
    printf("Enter the operator: ");
    scanf(" %c",&op);//Add a space before %c to consume the newline character.

    switch(op)
    {
        case'+': printf("Sum is %f.",a+b);
                 break;

        case'-': printf("subt. is %f.",a-b);
                 break;

        case'*': printf("multi. is %f.",a*b);
                 break;

        case'/': printf("div is %f.",a/b);
                 break;

        case's': printf("square root of a is %f and b is %f.",sqrt(a),sqrt(b));
                 break;

        case'p':printf("a to the power b is %f.",pow(a,b));
                 break;

        default: printf("wrong input");
                 break;

    }



}
