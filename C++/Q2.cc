/*Write a program in C++ to display the sum of the series [ 9 + 99 + 999 + 9999 ...]*/
#include<iostream>
using namespace std;
int main()
{
    int n,i,j,sum=0, term =9;
    cout<<"Input number of terms: ";
    cin>>n;
    
        for(i = 1 ; i<=n ; i++)
        {
            for(j = 1 ; j<= i ;j++)
            {
                cout<<"9";
            }
            cout<<" ";
            sum += term;
            term = term * 10 + 9;
        }
        cout<<"\n"<<"Sum is: "<<sum<<endl;
        return 0;
}