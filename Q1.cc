/*Write a program in C++ to display the multiplication table vertically from 1 to n. */
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Input the number upto: ";
    cin>>n;
    cout<<"Multiplication table from 1 to "<<n<<endl;
    for(i=1; i<=10 ; i++)
    {
        for(j=1 ; j<=5 ;j++)
        {
            cout<<setw(5)<<j<<"*"<<i<<"="<<i*j<<setw(5);
        }
        cout<<endl;
    }
    return 0;
}