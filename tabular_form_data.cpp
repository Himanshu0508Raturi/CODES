//to print data in tabular form.
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int survey[4][4]={0},city_code,car_code,i,j;
    char choice = 'y';
    do
    {
        cout<<"Enter city code (delhi:0 , mumbai:1 , chennai:2 , kolkata:3 )"<<endl;
        cin>>city_code;
        cout<<"Enter car code (alto:0 , ignis:1 , brezza:2 , wagonar:3 )"<<endl;
        cin>>car_code;
        survey[city_code][car_code]++;
        cout<<"Do you want to continue(y/n): "<<endl;
        cin>>choice;
    }while(choice != 'n');
    cout<<setw(10)<<"delhi"<<setw(10)<<"mumbai"<<setw(10)<<"chennai"<<setw(10)<<"kolkata"<<endl;
    cout<<"alto"<<endl<<"ignis"<<endl<<"brezza"<<endl<<"wagonr"<<endl;
    for(i=0; i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            cout<<setw(10)<<survey[i][j]<<setw(5);
        }
        cout<<endl;
    }
    return 0;
}