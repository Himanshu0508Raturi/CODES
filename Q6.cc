/* The daily maximum temperatures recorded in 5 cities during the month of 
January (for all 31days) have been tabulated as follows: 
Cities 
    Day     Delhi   Mumbai  Kolkatta    Chennai     Dehradun 
1      
2
.
.
.
.           
10      
Write a program to read the table elements into a two-dimensional array 
temperature, and to find the city and day corresponding to (a) the highest 
temperature and (b) the lowest temperature.*/
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int tmp[10][5]={
        {12,13,14,15,12},
        {16,17,19,13,10},
        {9,24,20,22,23},
        {25,28,29,15,26},
        {32,40,33,34,30}},i,j;
    string city[]={"Delhi", "Mumbai", "Kolkatta", "Chennai", "Dehradun" };
    char choice = 'y';
    cout<<setw(10)<<"Day"<<setw(10)<<city[0]<<setw(10)<<city[1]<<setw(10)<<city[2]<<setw(10)<<city[3]<<setw(10)<<city[4]<<endl;
   for(i= 0 ; i< 10 ;i++)
   {
        cout<<setw(10)<<i+1;
        for(j = 0 ; j< 5 ;j++)
        {
            cout<<setw(10)<<tmp[i][j]<<setw(10);
        }
        cout<<endl;
   }
   int max = 0,maxi,maxj;
    for(i=0 ; i<10 ; i++)
    {
        for(j=0 ; j<5 ; j++)
        {
            if(tmp[i][j] > max)
            {
                max = tmp[i][j];
                maxi=i;
                maxj=j;
            }
        }
    }
   cout << city[maxj] << " has the maximum temperature of " << max << " on day " << maxi + 1 << endl;
    //for min.
   int min = tmp[0][0],mini=0,minj=0;
    for(i=0 ; i<10 ; i++)
    {
        for(j=0 ; j<5 ; j++)
        {
            if(tmp[i][j] < min)
            {
                min = tmp[i][j];
                mini=i;
                minj=j;
            }
        }
    }
   cout << city[minj] << " has the minimum temperature of " << min << " on day " << mini + 1 << endl;

    return 0;

}