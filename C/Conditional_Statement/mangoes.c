#include<stdio.h>
void main(){

    int nm,y;
    float bill;
    printf("Enter the number of mangoes and years of known: \n");
    scanf("%d%d",&nm,&y);
    bill=nm*5.0;
     
    if(nm>10)//condition 1
    {
        if(y>2)//condition 2
        {
            bill=0.9*bill;
        }//condition 1 and condition 2 both are checked.
         printf("bill=%f\n",bill);
    }
    else//its (if) is upper nearest if.
    {
        printf("bill=%f",bill);
    }

}
