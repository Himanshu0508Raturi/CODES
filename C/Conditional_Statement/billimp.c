//WAP tp generate bill the charges will be as follow:-
/* for 1st 100 unit -> 5rupee/unit
   for 2nd 100 unit -> 6rupee/unit
   for 3rd 100 unit -> 7rupee/unit
    and for rest units -> 8rupee/unit
*/
#include<stdio.h>

void main(){
    int bill,unit;
    printf("Enter the unit: ");
    scanf("%d",&unit);
    if(unit<=100)
    {
        bill=unit*5;
    }else if(unit<=200)
    {
        bill=100*5+(unit-100)*6;
    }else if(unit<=300)
    {
        bill=100*5+100*6+(unit-200)*7;
    }else
    {
        bill=100*5+100*6+100*7+(unit-300)*8;
    }
    printf("%d\n",bill);
}
