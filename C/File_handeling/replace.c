/* sample input: This is CSE.
That is BCA*/
//this is wrong.
#include <stdio.h>

void main()
{
    FILE *fp, *f1, *f2, *f3;
    char ch, ch1, ch2;
    fp = fopen("replace.txt", "w+");
    printf("Enter a sentence and press (enter) ctrl+z (enter ) to exit\n");
    while ((ch = getchar()) != EOF)
    {
        putc(ch, fp);
    }
    rewind(fp);
    f1 = fopen("replace1.txt", "w+");
    printf("Enter the word you want to replace\n");
    while ((ch = getchar()) != EOF)
    {
        putc(ch, f1);
    }
    rewind(f1);
    f2 = fopen("replace2.txt", "w+");
    printf("Enter the word you want to replace with\n");
    while ((ch = getchar()) != EOF)
    {
        putc(ch, f2);
    }
    rewind(f2);
    f3 = fopen("Ans.txt", "w+");
    while ((ch = getc(fp)) != EOF)
    {

        if (ch == (ch1 = getc(f1)))
        {
            char x = getc(f2);
            putc(x, f3);
        }else
        {
            putc(ch,f3);
        }
    }
    while ((ch = getc(fp)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(fp);
    fclose(f1);
    fclose(f2);
}
