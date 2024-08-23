#include<iostream>
#include<string>
using namespace std;
void total_bill(int unit,float * bill)
{
    if(unit <= 100)
    {
        *bill= unit*0.60;
    }else if(unit >= 100 && unit<300)
    {
        *bill=100*0.60 + (unit-100)*0.80;
    }else if(unit>300)
    {
        *bill= 100 *0.60 + 200*0.80 + (unit - 300)*0.90;
    }
    if(*bill>300)
    {
        *bill += 50;
        *bill += *bill*0.15;
    }
}
void main()
{   
    int unit;
    string str;
    float bill=0;
    cout<<"Enter name"<<endl;
    getline(cin,str);
    cout<<"Enter unit: "<<endl;
    cin>>unit;
    total_bill(unit,&bill);
    cout<<"Name is: "<<str<<endl;
    cout<<"Total bill is: "<<bill<<endl; 
    
}