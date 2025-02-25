#include <stdio.h>

void main()
{
   int t,i;
    scanf("%d",&t);
    for(i = 0 ; i <t ; i++)
    {
   int arr[30], n, i, res = 0;
   scanf("%d", &n);
   for (i = 0; i < n; i++)
   {
      scanf("%d", &arr[i]);
      res = res ^ arr[i];
   }

   printf("%d", res);
   }
}