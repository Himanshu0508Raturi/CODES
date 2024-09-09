/*TO input n integer number in a file and separate them into two different files based the number is even or odd.*/
#include <stdio.h>
#include <stdlib.h>
void main()
{
    FILE *fp, *fe, *fo;
    int n, i, *p;
    printf("Enter number of elements\n");
    scanf("%d", &n);
    p = (int *)malloc(n * sizeof(int));
    printf("Enter %d elements\n", n);
    fp = fopen("main.txt", "w+");
    for (i = 0; i < n; i++)
    {
        scanf("%d", (p + i));
        fprintf(fp, "%d ", *(p + i)); // fprint is used to put any value(int,char,float) into file.
    }
    rewind(fp);
    fe = fopen("even.txt", "w+");
    fo = fopen("odd.txt", "w+");
    for (i = 0; i < n; i++)
    {
        fscanf(fp, "%d", (p + i));
        if (*(p + i) % 2 == 0)
        {
            fprintf(fe, "%d ", *(p + i));
        }
        else
        {
            fprintf(fo, "%d ", *(p + i));
        }
    }
    fclose(fp);
    fclose(fe);
    fclose(fo);
}