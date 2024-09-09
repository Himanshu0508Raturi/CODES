/*write a c program to read 3 test score of a student and find the average of best two scores.
Assume a test of max. marks 25 each.
Name:Himanshu Raturi
Roll No.:33
Section:B2
Course:B.Tech
Branch:CSE
*/
#include<stdio.h>

void main(){

        float m1,m2,m3,avg;
        printf("Enter the score of 3 test.\n");
        scanf("%f%f%f",&m1,&m2,&m3);
        if(m1<m2 && m1<m3)
        {
            avg=(m2+m3)/2;
        }else if(m2<m1 && m2<m3)
        {
            avg=(m3+m1)/2;
        }else if(m3<m1 && m3<m2)
        {
            avg=(m1+m2)/2;
        }
        printf("Average of best two is %f",avg);
}