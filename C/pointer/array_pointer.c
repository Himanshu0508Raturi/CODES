//to input N numbers in an array then print them using pointer.
#include<stdio.h>

void main()
{
    float a[50],*p;
    int i,n;
    printf("Enter numbers of elements.\n");
    scanf("%d",&n);
    printf("Enter elemets.\n");
    p=a;//p=&a[0]
    for(i=0 ; i<n; i++)
    {
        scanf("%f",p+i);
    }
    printf("Elemets are.\n");
    for(i=0 ;i<n; i++)
    {
        printf("%f", *(p+i));
    }


}

