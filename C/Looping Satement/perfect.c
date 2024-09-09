/*#include<stdio.h>
void perfect(int);
void main()
{  int m,n;
    printf("Enter lower range and upper range.\n");
    scanf("%d%d",&m,&n);
 for( ;m<=n;m++)
{  perfect(m);}
}
void perfect(int x){
    int ans=0;
    int temp=x;
    for(int i=1;i<=temp/2;i++)
    {
        if(temp%i==0){
            ans=ans+i;}
    }  
    if(ans==x) 
    {
        printf("%d is an perfect number.\n",x);
        }
        
        }
*/

//perfect number in a range.
#include<stdio.h>
int perfect(int);
void main()
{
    int m,n;
    printf("Enter m and n: ");
    scanf("%d%d",&m,&n);
    while(m<=n)
    {
        if(perfect(m)==1)
    {
        printf("%d is a perfect number.\n",m);
    }else
    {
        printf("%d is not a perfect number.\n",m);
    }
        m++;
    }
    
}

int perfect(int x)
{
    int ans=0,temp=x;
    for(int i=1; i<=temp/2;i++)
    {
        if(temp%i==0)
        {
            ans=ans+i;
        }
        
    }
    if(ans==x)
        {
            return 1;
        }else
        {
            return 0;
        }
}
