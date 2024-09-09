/*//to extract 1st N character of a string.
#include<stdio.h>
#include<string.h>
void main()
{
    char str[50];
    int i,n;
    printf("Enter a string.\n");
    gets(str);
    printf("Enter N.\n");
    scanf("%d",&n);
    for(i=0; i<=n ;i++)
    {
        putchar(str[i]);
    }
    str[i]='\0';
} */

// Online C compiler to run C program online
#include <stdio.h>

int main() {
int *ptr;
  
  {
      int a=5;
      ptr=&a;
  }
   printf("%d %d",ptr,*ptr);
    return 0;
}