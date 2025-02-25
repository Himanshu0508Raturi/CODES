// abstract data type.
#include <stdio.h>
#include <stdlib.h>
struct myarray
{
    int total_size;
    int used_size;
    int *ptr;
};
void createarray(struct myarray *a,int tsize,int usize)
{
    (*a).total_size=tsize;
    a->used_size=usize;
    a->ptr=(int*)malloc(tsize*sizeof(int));
}
void setvalue(struct myarray *a)
{
    int i;
    for(i=0;i<a->used_size;i++)
    {
        printf("Enter elements\n");
        scanf("%d",&(a->ptr)[i]);
    }
}
void show(struct myarray *a)
{
    int i;
    for(i=0;i<a->used_size;i++)
    {
        printf("%d\t",(a->ptr)[i]);
    }
}
void add(struct myarray a)
{
    int i,sum=0;
    for(i=0;i<a.used_size;i++)
    {
        sum+=(a.ptr)[i];
    }
    printf("\nsum is: %d",sum);
}
void main()
{
    struct myarray marks;
    int t,u;
    printf("Enter total size and used size of array: \n");
    scanf("%d%d",&t,&u);
    createarray(&marks,t,u);
    printf("Running setval\n");
    setvalue(&marks);
    printf("Running show\n");
    show(&marks);
    //performing operation.
    add(marks);
    free(marks.ptr);
}
