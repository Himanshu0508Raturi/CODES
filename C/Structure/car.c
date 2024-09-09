//total cost per car.
#include<stdio.h>
struct car 
{
	int id,rr,d;
	char md[10];
};
void udf(struct car [],int);
void main()
{
	struct car a[3];
	int i;
	for(i=0;i<3;i++)
	{
		printf("Enter car ID: ");
		scanf("%d",&a[i].id);
		printf("\nEnter model name:");
		scanf(" %[^\n]s",a[i].md);
		printf("\nENter number of days:");
		scanf("%d",&a[i].d);
		printf("\nEnter rate per day: ");
		scanf("%d",&a[i].rr);
	
	}
	udf(a,3);
	
}
void udf(struct car a[], int n)
{
	int i,tl;
	int t[3];
	for(i=0;i<n;i++)
	{
		tl=a[i].d*a[i].rr;
		t[i]=tl;
	}
	for(i=0;i<n;i++)
	{
		printf("Total cost for car (%d) is \n",i+1);
		printf("%d ",t[i]);
	}
	

}