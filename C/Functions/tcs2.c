#include<stdio.h>

void main()
{
    char ch;
    int a=0,e=0,i=0,o=0,u=0;
    printf("Enter a stream of  characters and 1 to quit.\n");
    while(ch != '1')
    {
        scanf("%c",&ch);
        
        if (ch=='a'|| ch=='A')
        {
            a++;
        }else if(ch=='e'|| ch=='E')
        {
            e++;
        }else if(ch=='i'|| ch=='I')
        {
            i++;
        }else if(ch=='o'|| ch=='O')
        {
            o++;
        }else if(ch=='u'|| ch=='U')
        {
            u++;
        }
        printf("%c",ch);
    }
    printf("\nA= %d times.\n",a);
    printf("E= %d times.\n",e);
    printf("I= %d times.\n",i);
    printf("O= %d times.\n",o);
    printf("U= %d times.\n",u);
}