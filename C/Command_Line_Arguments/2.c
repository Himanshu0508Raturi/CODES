main(int argc, char *argv[])
{
    int i, a;
    a = str_to_int(argv[i]);
    printf("a=%d", a);
    getch();
}
int str_to_int(char *str[])
{
    int x, i;
    for (x = 0, i = 0; str[i]; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            x = x * 10 + (str[i] - 48);
        }
        else
        {
            break;
        }
    }
    return (x);
}