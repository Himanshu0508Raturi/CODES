#include<stdio.h>
#include<string.h>
void main()
{
    char str[50],a[50];
    int i,f=0;
    printf("Enter a string.\n");
    gets(str);
    strcpy(a,str);
    strrev(str);
    for(i=0; str[i]!='\0';i++)
    {
        if(str[i]!=a[i])
        {
            f=1;
        }
    }
    
    if(f==1)
    {
        printf("Its not a pallindrome string.\n");
    }else
    {
        printf("Its a pallindrome string.\n");
    }
    
    
}