/* Design a UDF that returns the count of special characters present in a sentence passed to it 
using pointer to the calling program. Implement a C program to read a string in the main 
program and display all the count of the special characters returned by the function to the 
console.*/
#include<stdio.h>
int count(char [],char *);
void main()
{
    char str[40],c;
    int i;
    printf("Enter a string.\n");
    gets(str);
    c=count(str,&c);
    printf("Numbers of special characters are %d.\n",c);
}
int count(char str[], char *p)
{
    int i;
    char *ptr,k=0;
    ptr=str;
    for(i=0; *(ptr+i) != '\0'; i++)
    {   
        if(*(ptr+i) >='a' && *(ptr+i) <= 'z' || *(ptr+i) >='A' && *(ptr+i) <= 'Z')
        {
            //do nothing.
        }else
        {
            k++;
        }
    }
    return k;
}