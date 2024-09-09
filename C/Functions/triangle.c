/*Write a program that determines the type of a triangle based on its sides' lengths. Ask the user to
 input the lengths of three sides, and then classify the triangle as equilateral, isosceles, or scalene
 using functions. */
 #include<stdio.h>

 int tri(int,int,int);
 void main(){
    int a,b,c,r;
    printf("Enter the three sides.\n");
    scanf("%d%d%d",&a,&b,&c);
    r=tri(a,b,c);
    if(r=0)
    {
        printf("equilateral");
    }if(r=1)
    {
        printf("Isosceles");
    }if(r=2)
    {
        printf("scalene");
    }
 }
    int tri(int x, int y, int z)
    {
         if(x==y && y ==z)
        {
            return 0;
        }else if(x==y || x==z || y==z)
        {
             return 1;
        }else if(x!=y!=z)
        {
             return 2;
        }

    }

 