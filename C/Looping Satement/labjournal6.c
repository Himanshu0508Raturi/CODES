/*Program to print pattern.
A
CD
FGH
JKLM
OPQRS
Name:- Himanshu Raturi
Roll no.:- 33
Section:- B2
Course:- B.Tech
Branch:- CSE
*/
#include<stdio.h>

void main()
{
    int n;
    char ch=65;
    printf("Enter n.\n");
    scanf("%d",&n);
    for(int i=1; i<=n; i++,ch++)
    {
        for(int j=1; j<=i; j++,ch++)
        {
            printf("%c",ch);
        }
        printf("\n");
    }
}