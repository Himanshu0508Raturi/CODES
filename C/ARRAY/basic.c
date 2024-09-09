//initialization of arrays.
//in compile time
#include<stdio.h>

void main(){

    int a[9]={10,20,30,40,50,60,70,80,90};
    for(int i=0;i<9;i++)
    {
        printf("%d ",a[i]);
    }

}

/*//initialization of arrays.
//in run time.
#include<stdio.h>

int main(){

    int a[5];
    printf("Enter the element of array: \n");
    for(int i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i=0;i<=4;i++)
    {
        printf("%d ",a[i]);
    }
    

}*/