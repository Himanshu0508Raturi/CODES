#include <stdio.h>
    void main()
    {
        int i, j, temp, n, arr[30];
        printf("Enter the value of N \n");
        scanf("%d", &n);
        printf("Enter the numbers \n");
        for (i = 0; i < n; i++)
         {
            scanf("%d", &arr[i]);
 	    }
        for (i = 0; i < n; i++) 
        {
 
            for (j =0; j < n-1; j++)
            {
 
                if (arr[j] > arr[j+1]) 
                {
 
                    temp=  arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
 
        }
        printf("The numbers arranged in ascending order are given below \n");
        for (i = 0; i < n; i++)
            printf("%d ", arr[i]);
 
    }
 

