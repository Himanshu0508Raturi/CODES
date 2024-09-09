//to input a string then copy that string into another string.
#include<stdio.h>

void main()
{
    char str[50],str1[50];
    int i;
    printf("Enter a string.\n");
    gets(str);
    for(i=0;str[i] !='\0';i++)
    {
        str1[i]=str[i];
    }
    str1[i]='\0';
    printf("1st string is:\n");
    puts(str);
    printf("2nd string is:\n");
    puts(str1);

}
//we also have a predefine library function for this:- strcpy(str1,str); 2nd parameter string copy into first.
#include<stdio.h>
#include<string.h>
void main()
{
    char str[50],str1[50];
    printf("Enter a string.\n");
    gets(str);
    strcpy(str1,str);
    printf("1st string is:\n");
    puts(str);
    printf("2nd string is:\n");
    puts(str1);

}