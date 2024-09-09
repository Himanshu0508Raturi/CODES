/*Write a program in C to calculate and print the electricity bill of a given customer.
 The customer ID, name, and unit consumed by the user should be captured from the keyboard to display
  the total amount to be paid to the customer.

The charge are as follow :

Unit	                              Charge/unit
upto 199	                           @1.20
200 and above but less than 400        @1.50
400 and above but less than 600	       @1.80
600 and above	                       @2.00
If bill exceeds Rs. 400 then a surcharge of 15% will be charged and the minimum bill should be of
 Rs. 100/-*/
 #include<stdio.h>
#include<string.h>
 void main(){
        float bill,uc,ci,new_bill;
        char cn[100];
        printf("Enter the customer name:");
        scanf("%s",cn);
        printf("Enter customer Id:");
        scanf("%f",&ci);
        printf("Enter unit consumed: ");
        scanf("%f",&uc);
        printf("%s\n%f\n%f\n",cn,ci,uc);
        if(uc<=199)
        {
            bill=uc*1.20;
        }else if(uc<=400 && uc>=200)
        {
            bill=uc*1.50;
        }else if(uc<=600 && uc>=400)
        {
            bill=uc*1.80;
        }else if(uc>600)
        {
            bill=uc*2;
        }
        printf("Bill is %f\n",bill);
        if(bill>400){
            new_bill=bill*0.15;
        }
        printf("Surcharged amount is= %f\n",new_bill);
        printf("Net bill= %f\n",new_bill+bill);

 }