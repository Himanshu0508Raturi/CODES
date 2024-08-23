#include<iostream>
#include "unit1_lib.cpp"
using namespace std;

int main()
{
    int choice =1,dec;
    string name,tyacc;
    int acno;
    float balamt=0;
    cout<<"Enter Name: "<<endl;
    getline(cin,name);
    cout<<"Enter type of account: "<<endl;
    getline(cin,tyacc);
    cout<<"Enter Account numbert: "<<endl;
    cin>>acno;
    // cin>>balamt;
    bank s1(name,tyacc, acno , balamt);// s1 is an object.
    do
    {
        cout<<"Press 1 to deposit amount. \n";
        cout<<"Press 2 to withdraw amount.\n";
        cout<<"Press 3 to display details,\n";
        cout<<"Press 4 to exit,\n";
        cin>>choice;
        switch(choice)
    {
        case 1: 
        int d;
            cout<<"Enter the amount of money to deposit: ";
            cin>>d;
            s1.deposit(d);
            break;

        case 2:
        int w;
            cout<<"Enter the amount of money to withdraw: ";
            cin>>w;
            s1.withdraw(w);
            break;

        case 3:
            s1.display();
            break;
    }
        
    }while(choice != 4);
    



    

   
    


}