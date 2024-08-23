#include<iostream>
using namespace std;

int main()
{
    int tmp[10][5]={{12,33,45,67,45},{12,33,45,67,45},{12,73,45,97,25},{40,33,47,66,25},{02,73,42,67,5},{92,93,45,23,45},{14,18,20,23,25},{70,54,89,87,79},{10,33,46,60,45},{12,63,45,67,56}},i,j;
    string cities[]={"Delhi","Dehradun","Mumbai","Kolkata","Chennai"};
    char choice = 'y';
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
     for(i=0 ; i<10 ; i++)
    {
        for(j=0 ; j<5 ; j++)
        {
            cout<<tmp[i][j]<<" ";
        }
        cout<<endl;
    }
    for(i=0 ; i<10 ; i++)
    {
        cout<<"Day "<<i+1<<endl;



    }
    cout<<cities[maxj]<<" has maximum temp at day "<<maxi+1<<endl;
    return 0;

}