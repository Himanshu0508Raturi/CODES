//sort using udf
#include<stdio.h>
struct emp
{
	int an,amt;
	char name[10];

};
void udf(struct emp [],int,struct emp);
void main()
{
	struct emp a[3],temp;
	int i;
	for(i=0;i<3;i++)
	{
		printf("Enter name(%d).\n",i+1);
		scanf(" %[^\n]s",a[i].name);
		printf("Enter acc. no.\n");
		scanf("%d",&a[i].an);
		printf("Enter amount.\n");
		scanf("%d",&a[i].amt);
	
	}
	
	udf(a,3,temp);
	printf("Amount in sorted order is:\n");
	for(i=0;i<3;i++)
	{
		printf("%d ",a[i].amt);
	}
	
}
void udf(struct emp a[],int n,struct emp tmp)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i].amt>a[j].amt)
			{
				tmp = a[i];
				a[i] = a[j];
				a[j]=tmp;
			}
		
		}
	}

}