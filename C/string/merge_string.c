// to input two strings and then merge them into 1st string.
//It is known as concatenation of two string.

#include<stdio.h>

void main()
{
    char str[50],str1[50];
    int i,l;
    printf("Enter 1st string.\n");
    gets(str);
    printf("Enter 2nd string.\n");
    gets(str1);
    l=strlen(str);
    printf("%d",l);
    str[l]=' ';
    for(i=0; str1[i] != '\0';i++)
    {
        str[l+1+i]= str1[i];
    }
    str[l+1+i]='\0';
    puts(str);


}

//We has a string library function for this but it doesn't insert space between it:- strcat(str1,str);
/*#include<stdio.h>
#include<string.h>
void main()
{
    char str[50],str1[50];
    printf("Enter 1st string.\n");
    gets(str);
    printf("Enter 2nd string.\n");
    gets(str1);
    strcat(str1,str);
    puts(str1);
}*/