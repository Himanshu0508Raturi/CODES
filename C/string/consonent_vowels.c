/* To read a string from the user and store all vowels and consonents into two different character arrays. Print the content of both 
the arrays to the console*/
#include<stdio.h>
#include<string.h>
void main()
{
    char str[30],strv[30],strc[30];
    int i,j=0,k=0;
    printf("Enter a  string.\n");
    gets(str);
    for(i=0; str[i] != '\0';i++)
    {
        if(str[i]=='a'|| str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' )
        {
            strv[j]=str[i];
            j++;
        }else
        {
            strc[k]=str[i];
            k++;
        }
    }
    strv[k]='\0';
    strc[j]='\0';
    puts(strc);
    puts(strv);

}