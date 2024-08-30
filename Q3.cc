/*An electricity board charges the following rates to domestic users to discourage 
large consumption of energy.  
For the first 100 units: - 60 P per unit  
For the next 200 units: -80 P per unit  
Beyond 300 units: -90 P per unit 
All users are charged a minimum of Rs 50 if the total amount is more than Rs 300 
then an additional surcharge of 15% is added.  
Implement a C++ program to read the names of users and number of units  
consumed and display the charges with names */
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
int main()
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
    return 0;
}