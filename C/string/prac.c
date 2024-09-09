/*1. Write a structure to store the name, account number and balance of customers (more
than 10) and store their information.
i. Write a function to print the names of all the customers having balance less than
$200.
ii. Write a function to add $100 in the balance of all the customers having more than
$1000 in their balance and then print the incremented value of their balance.*/
#include <stdio.h>
struct info
{
    char name[30];
    int an, bl;
};
void bal(struct info *);
void inc(struct info *);
void main()
{
    struct info s[10];
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("Enter name of customer  %d: \n",i+1);
        fflush(stdin);
        gets(s[i].name);
        printf("Enter account number: \n");
        scanf("%d",&s[i].an);
        printf("Enter balance in $: \n");
        scanf("%d",&s[i].bl);
    }
    bal(s);
    inc(s);


}
void bal(struct info *p)
{
    int i;
    for(i=0;i<10;i++)
    {
        if(p[i].bl<200)
        {
            puts(p[i].name);
        }
    }
}
void inc(struct info *pc)
{
    int i;
    for(i=0;i<10;i++)
    {
        if(pc[i].bl>1000)
        {
            pc[i].bl=pc[i].bl+100;
            printf("%d",pc[i].bl);
        }
    }
}