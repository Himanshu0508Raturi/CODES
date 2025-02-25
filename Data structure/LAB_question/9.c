#include<stdio.h>
#include<string.h>
void push(char st[], int *top , int n ,char v)
{
    if((*top) == n-1)
    {
        printf("Overflow condition.\n");
    }else
    {
        st[++(*top)] = v;
    }
}
char pop(char st[] , int *top)
{   char r ;
    if((*top) == -1)
    {
        printf("Underflow condition.\n");
    }else
    {
        r  = st[(*top)--];
    }
    return r;
}
int Isempty(int *top)
{
    if((*top) == -1)
    {
        return 1;
    }else
    {
        return 0;
    }
}
int check_balance(int curr_elem , int pop_element)
{
    if(curr_elem == ')' && pop_element == '(')
    {
        return 1;
    }
    if(curr_elem == ']' && pop_element == '[')
    {
        return 1;
    }
    if(curr_elem == '}' && pop_element == '{')
    {
        return 1;
    }
}
void main()
{
    int t,i;
    scanf("%d",&t);
    for(i = 0 ; i <t ; i++)
    {
    int n,count=0;
    char str[30];
    //printf("Enter expression: ");
    gets(str);
    char st[strlen(str)];
    int top = -1;
    int i;
    for(i = 0 ; i < strlen(str) ; i++)
    {
        if(str[i] == '(' || str[i] == '{' || str[i] == '[')
        {
            push(st , &top , n , str[i]);
        }
        else if(str[i] == ')' || str[i] == '}' || str[i] == ']')
        {
            if(check_balance(str[i],pop(st , &top)))
            {
                count++; 
            }
        }
    }
    printf("%d",count*2);
    }
}