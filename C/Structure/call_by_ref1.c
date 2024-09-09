#include<stdio.h>
struct emp
{
    int id;
    float sal;
};
void dis(struct emp *);
void main()
{
    struct emp s;
    printf("Enter values.\n");
    scanf("%d%f",&s.id,&s.sal);
    dis(&s);
}
void dis(struct emp *p)
{
    printf("ID: %d",p->id);//1st way
    printf("\nSalary: %f",(*p).sal);//2nd way
}