#include<stdio.h>
#include<string.h>
void main()
{
    char str[50],a[50];
    int i,f=0,l;
    printf("Enter a string.\n");
    gets(str);
    strcpy(a,str);
    strrev(str);
    for(i=0; str[i]!='\0';i++)
    {
        if(str[i]==a[i])
        {
            f++;
        }
    }
    l=strlen(str);
    if(f==l)
    {
        printf("Its a pallindrome string.\n");
    }else
    {
        printf("Its not a pallindrome string.\n");
    }
    
    
}