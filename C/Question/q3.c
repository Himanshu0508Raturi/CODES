/*Develop a C program to accept the names in a 2-D array and then search a name entered by 
the user. Display an appropriate message to the output screen if found.*/
#include<stdio.h>
#include<string.h>
void main()
{
    char name[30][30],search[30];
    int i,n,flag=0;
    printf("Enter the numbers of names.\n");
    scanf("%d",&n);
    printf("Enter names.\n");
    for(int i=0; i<n;i++)
    {
       
        scanf("%s",&name[i]);
        
    }
    printf("Enter name to search.\n");
    scanf("%s",search);
    for(i=0; i<n;i++)
    {
        if(strcmp(name[i],search)==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("Name found at %d",i+1);
    }else
    {
        printf("Name not found");
    }

}