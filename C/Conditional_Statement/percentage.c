#include<stdio.h>

void main(){
    float m1,m2,m3,m4,per,tm;
    printf("Enter marks of four subjects: \n");
    scanf("%f%f%f%f",&m1,&m2,&m3,&m4);
    tm=m1+m2+m3+m4;
    per=tm/4;
    if(per>=85)
    {
        printf("Grade A\n");
    }else if(per<85 && per>=70) 
    {
        printf("Grade B\n");
    }else if(per<70 && per>=55)
    {
        printf("Grade c\n");
    }else if(per<55 && per>=40)
    {
        printf("Grade D\n");
    }else if(per<40)
    {
        printf("Grade E\n");
    }else
    {
        printf("Thank you\n");
    }
    
}