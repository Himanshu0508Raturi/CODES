/*WAP to input numbers in a file then read the number from the file if number is divisible by 5 then calculate sum of digit using function
and write it into another file otherwise calculate product of digit using function and write it into third file.*/
#include <stdio.h>
int sd(int);
int pd(int);
void main()
{
    FILE *fp, *fd, *fpd;
    int n, num, i;
    printf("Enter limit: ");
    scanf("%d", &n);
    printf("\nEnter numbers: ");
    fp = fopen("File.txt", "w+");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num);
        putw(num, fp);
    }
    rewind(fp);
    fd = fopen("div.txt", "w+");
    fpd = fopen("pro.txt", "W+");
    for (i = 0; i < n; i++)
    {
        num = getw(fp);
        if (num % 5 == 0)
        {
            putw(sd(num), fd);
        }
        else
        {
            putw(pd(num), fpd);
        }
    }
    fclose(fp);
    fclose(fd);
    fclose(fpd);
}
int sd(int n)
{
    int s = 0;
    while (n > 0)
    {
        s = s + n % 10;
        n = n / 10;
    }
    return s;
}
int pd(int x)
{
    int p = 1;
    while (x > 0)
    {
        p = p * (x % 10);
        x = x / 10;
    }
    return p;
}