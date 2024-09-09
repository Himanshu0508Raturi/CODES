/*Write a program that determines the type of a triangle based on its sides' lengths. Ask the user to
 input the lengths of three sides, and then classify the triangle as equilateral, isosceles, or scalene.*/
#include<stdio.h>

void main(){
    
        int s1,s2,s3;
        printf("Enter three sides of triangle: ");
        scanf("%d%d%d",&s1,&s2,&s3);

        if(s1==s2 && s2 ==s3)
        {
            printf("It is an equilateral triangle\n");
        }else if(s1==s2|| s1==s3 || s2==s3)
        {
             printf("It is an isosceles triangle\n");
        }else if(s1!=s2!=s3)
        {
             printf("It is an scalene triangle\n");
        }



}