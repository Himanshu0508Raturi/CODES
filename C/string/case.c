/*Write a program using pointer variables to read a character until * is entered.If the character is in uppercase print it in 
lowercase and vise versa. also count the number of vowels and consonents.*/
#include<stdio.h>

void main()
{
    char ch,*p;
    int v=0,c=0;
    p=&ch;
    printf("Enter * to exit.\n");
    while(1)
    {
        printf("Enter a character.\n");
        scanf(" %c",p);
       if(*p=='*')
       {
        break;
       }
       if(*p>='a' && *p<='z')
       {
            *p=*p-32;
       }else if(*p>='A' && *p<='Z')
       {
         *p=*p+32;
       }

       if(*p=='a' || *p=='e' || *p=='i' || *p=='o' || *p=='u'|| *p=='A' || *p=='E' || *p=='I' || *p=='O' || *p=='U')
       {
            v++;
       }else if ((*p >= 'A' && *p <= 'Z') || (*p >= 'a' && *p <= 'z'))
       {
        c++;
       }
       printf("%c.\n",*p);
    }
    printf("Vowels are %d.\nconsonents are %d.\n",v,c);

}