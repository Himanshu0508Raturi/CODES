/*write a menu driven program to calculate area of circle  and area of rectangle using switch case*/
#include<stdio.h>

void main(){

    char x,a,b;
    float l,br,r;    
    printf("Enter (a/A) to calculate the area of circle and (b/B) to calculate the area of rectangle: ");
    scanf("%c",&x);
    switch(x)
    {
        case 'A':
        case 'a': printf("Enter the radius of circle: ");
                scanf("%f",&r);
                printf("area is: %f",3.14*r*r);
                break;
                
        case 'B':
        case 'b': printf("Enter the length and breadth of rectangle: ");
                scanf("%f%f",&l,&br);
                printf("area is %f",2*(l+br));
                break;

        default: printf("Invalid output:");

    }

}