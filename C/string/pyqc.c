#include<stdio.h>
#include<string.h>
void replace(char []);
void main()
{
    char str[30];

    printf("Enter a string: ");
    gets(str);
    replace(str);
    puts(str);

}
void replace(char str[])
{
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        {
            str[i]='X';
        }
    }
}