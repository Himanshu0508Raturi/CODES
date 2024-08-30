//to print data in tabular form.
/*Create a Java program to perform survey on four different model of  Maruti 
(Maruti -K10, Zen-Astelo, Wagnor, Maruti- SX4)   owned by person living in four 
metro cities(Delhi, Mumbai, Chennai & Kolkatta). Display  tabulated  report like 
format given below:  
         Maruti-k10    Zen-Astelo    Wagnor    Maruti-SX4 
Delhi     
Mumbai          
Cheenai     
Kolkatta     
Calculate numbers of cars of different model in each metro city.  */
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
        cout<<"Enter car code (Maruti-K10 :0 , Zen-Astelo :1 , Wagnor:2 , Maruti-SX4 :3 )"<<endl;
        cin>>car_code;
        survey[city_code][car_code]++;
        cout<<"Do you want to continue(y/n): "<<endl;
        cin>>choice;
    }while(choice != 'n');
    cout<<setw(20)<<"delhi"<<setw(10)<<"mumbai"<<setw(10)<<"chennai"<<setw(10)<<"kolkata"<<endl;
    cout<<"Maruti-K10";
    for(i=0; i<4;i++)
    {
       cout<<setw(10)<<survey[i][0]<<setw(5);
       
    }
    cout<<endl;
    cout<<"Zen-Astelo";
    for(i=0; i<4;i++)
    {
       cout<<setw(10)<<survey[i][1]<<setw(5);
       
    }
     cout<<endl;
    cout<<"Wagnor";
    for(i=0; i<4;i++)
    {
       cout<<setw(10)<<survey[i][2]<<setw(5);
       
    }
     cout<<endl;
    cout<<"Maruti-SX4";
    for(i=0; i<4;i++)
    {
       cout<<setw(10)<<survey[i][3]<<setw(5);
       
    }
    return 0;
}