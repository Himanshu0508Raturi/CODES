#include <stdio.h>
void reverse(int arr[], int start, int end) {
    int temp;
    int i, j;
    for (i = start, j = end - 1; i < j; i++, j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

int main()
{
    int t,i;
    scanf("%d",&t);
    for(i = 0 ; i <t ; i++)
    {
    int n, arr[20], k;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);
    if(k>n)
    {
        k = k % n;
    }                               
    reverse(arr,0,k);            
    reverse(arr,k,n);             
    reverse(arr, 0, n);            
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    }
}
