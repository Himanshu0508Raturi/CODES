/* Assume a character array str[]={"CALENDAR YEAR2023"}. Develop a c program using a pointer to segregate the string and the number
 into two different variables without using any inbuilt function.Display the string and the number to the output.*/
#include <stdio.h>
#include <stdlib.h>
void main()
{
    char str[40], mstr[20], *ps, *pms;
    int num[10] = {0}, *pn;
    int i,j=0,k=0;
    printf("Enter a string\n");
    gets(str);
    ps = str;
    pms = mstr;
    pn = num;
    for (i = 0; *(ps + i) != '\0'; i++)
    {
        if (*(ps + i) >= 'a' && *(ps + i) <= 'z' || *(ps + i) >= 'A' && *(ps + i) <= 'Z' || *(ps + i) == ' ')
        {
            *(pms + j) = *(ps + i);
            j++;
        }
        else if(*(ps + i) >= '0' && *(ps + i) <= '9')
        {
            *(pn + k) = *(ps + i)-'0';  // Convert ASCII to integer
           k++;
        }
    }
    *(pms + j) = '\0';  // Null-terminate the string
    puts(mstr);
    pms = mstr;
    pn = num;
    for (i = 0; i < k; i++)
    {
        printf("%d", *(pn + i));
    }
}