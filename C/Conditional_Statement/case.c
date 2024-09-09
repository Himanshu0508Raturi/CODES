#include<stdio.h>

void main(){
    char ch;
    printf("Enter the character: \n");
    scanf("%c",&ch);

    if('a'<=ch && ch<='z')
    {
        printf("%c is a lower case.\n",ch);
        printf("Its upper case is %c",ch-32);
    }else if('A'<=ch && ch<='Z')
    {
        printf("%c is a uppercase.\n",ch);
        printf("Its lower case is %c",ch+32);
    }





}
