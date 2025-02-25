#include <stdio.h>
#include <stdlib.h>
int res(int arr[][50], int n, int key)
{
	int i=0, j = n - 1;
	while(i >= 0 && i<n && j>=0 && j<n)
	{
		if (arr[i][j] > key)
		{
			j--;
		}
		else if (arr[i][j] == key)
		{
			return 1;
		}
		else if (arr[i][j] < key)
		{
			i++;
		}
	}
	return -1;
}
void main()
{
	int t,i;
    scanf("%d",&t);
    for(i = 0 ; i <t ; i++)
    {
	int t,i;
	scanf("%d",&t);
	for(i=0 ; i <t ; i++)
	{
	 int i, j, n, key, r;
	scanf("%d", &n);
	int arr[50][50];
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	scanf("%d", &key);
	r = res(arr, n, key);
	if (r == 1)
	{
		printf("present");
	}
	else
	{
		printf("Not present.");
	}
	}
	}
}