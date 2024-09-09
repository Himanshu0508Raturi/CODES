//program to chech two strings are equal or not.
/* #include<stdio.h>
#include<string.h>
void main()
{
    char str[50],str1[50];
    int i,l,p=0;
    printf("Enter 1st string.\n");
    gets(str);
    printf("Enter 2nd string.\n");
    gets(str1);
    if(strlen(str) != strlen(str1))
    {
        printf("Strings are not equal.\n");
    }else
    {
        for(i=0; str[i] != '\0'; i++)
        {
            if(str[i] == str1[i])
            {
                p++;
            }
        }
    }
    if(p== strlen(str))
    {
        printf("Strings are equal.\n");
    }else
    {
        printf("Strings are not equal.\n");
    }
} */
// but the above code is not optimistic.
//so we write a optimistic and time efficient code.
/*#include<stdio.h>
#include<string.h>
void main()
{
    char str[50],str1[50];
    int i,flag=0;
    printf("Enter 1st string.\n");
    gets(str);
    printf("Enter 2nd string.\n");
    gets(str1);
    if(strlen(str) != strlen(str1))
    {
        printf("Strings are not equal.\n");
    }else
    {
        for(i=0; str[i] != '\0'; i++)
        {
            if(str[i] != str1[i])
            {
                flag=1;
                break;
            }
        }
    }
    if(flag == 0)
    {
        printf("Strings are equal.\n");
    }else
    {
        printf("Strings are not equal.\n");
    }
}*/
//we have also a string library function for this:- strcmp(str,str1);
#include<stdio.h>
#include<string.h>
void main()
{
    char str[50],str1[50];
    printf("Enter 1st string.\n");
    gets(str);
    printf("Enter 2nd string.\n");
    gets(str1);
    if(strcmp(str,str1) == 0)//returns 0 if strings are equal and other than 0 if strings are not equal;
    {
        printf("Equal.\n");
    }else
    {
        printf("Not equal.\n");
    }

}
