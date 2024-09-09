// To input a string and store it in reverse order without using 2nd string.
#include<stdio.h>
#include<string.h>
void main()
{
    char str[50],str1[50];
    int i,l,r,temp;
    printf("Enter a string.\n");
    gets(str);
    printf("String before reverse.\n");
    puts(str);
    l= strlen(str);
    for(i=0,r=l-1;i<l/2;i++,r--)
    {
        temp=str[i];
        str[i]=str[r];
        str[r]=temp;
    }
    printf("string after reverse.\n");
    puts(str);

} 
//we also have a predefine library function for this:- strrev(str);
/*#include<stdio.h>
#include<string.h>
void main()
{
    char str[50];
    printf("Enter a string.\n");
    gets(str);
    printf("String before reverse.\n");
    puts(str);
    strrev(str);
    printf("string after reverse.\n");
    puts(str);

}*/