//To insert a string into main text.
#include<stdio.h>
#include<string.h>

void main()
{
    char str[40],str1[20],strI[30];
    int i,p,j;
    printf("Insert main text.\n");
    gets(str);
    printf("Enter string to enter.\n");
    gets(strI);
    printf("Enter postiton .\n");
    scanf("%d",&p);
    for(i=0,j=0; str[i] != '\0',i <= strlen(str);i++)
    {
        
        if(i==p)
        {
            for(j=0; i <= strlen(str);j++)
            {
            str1[i]=strI[j];
            }
        }else
        {
            str1[i]=str[i];
        }
    }
    puts(str1);




}