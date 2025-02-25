#include <stdio.h>
#include <string.h>
void push(char st[], int *top, int n, char v)
{
    if ((*top) == n - 1)
    {
        printf("Overflow condition.\n");
    }
    else
    {
        st[++(*top)] = v;
    }
}
char pop(char st[], int *top)
{
    char r;
    if ((*top) == -1)
    {
        printf("Underflow condition.\n");
    }
    else
    {
        r = st[(*top)--];
    }
    return r;
}
int Isempty(int *top)
{
    if ((*top) == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void rev(char st[],int *top, int n)
{
    if(Isempty(top))
    {
        return ;
    }
    char temp = pop(st, top);
    printf("%c", temp);
    rev(st, top, n);
    
}
void main()
{
    // int t,i;
    // scanf("%d",&t);
    // for(i = 0 ; i <= t ; i++)
    // {
    int n,i;
    char str[30];
    // printf("Enter string: ");
    gets(str);
    n = strlen(str);
    char st[n];
    int top = -1;
    for(i= 0 ; i < n ;i++)
    {
        push(st,&top,n,str[i]);
    }
    rev(st,&top, n);
    
}