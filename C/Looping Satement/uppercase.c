#include<stdio.h>

void main()
{
    char ch;
    printf("Enter characters to flip case and 0 to quit.\n");
    while(ch != '0')
    {
        scanf("%c ",&ch);
        if(ch >='A' && ch<= 'Z')
        {
            ch=ch+32;   
        }else if(ch >='a' && ch<= 'z')
        {
            ch=ch-32;
        }else
        {
            continue;
        }
        printf("%c ",ch);  



    }




}