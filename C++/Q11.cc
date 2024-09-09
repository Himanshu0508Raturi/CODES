/*. Design a class to represent bank account. Includes the following members: 
• Name of depositor 
• Account number 
• Type of account 
• Balance amount in the account 
Methods: 
• To assign initial values 
• To deposit an amount 
• To withdraw an amount after checking balance. 
• To display the name and balance. 
Write a program to incorporate the constructor to provide initial values.*/
#include<iostream>
using namespace std;
class bank
{
    private:
    string name,tyacc;
    int acno;
    float balamt;

    public:
    // using a constructor.
    bank(string vname, string vtyacc, int vacno , float vbalamt)
    {
        name = vname;
        tyacc=vtyacc;
        acno= vacno;
        balamt = vbalamt;
    }
    void deposit(int d)
    {
        balamt += d;
        cout<<d<<" has been deposited to you account."<<endl;
        cout<<"Your current balance is: "<<balamt<<endl;
       
    }
    void withdraw(int w)
    {
        if(w > balamt)
        {
            cout<<"Insufficient money in your account."<<endl;
        }else
        {
            balamt -= w;
        }
        cout<<w<<" has been withdraw from your account."<<endl;
        cout<<"Your current balance is: "<<balamt<<endl;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Balance is: "<<balamt<<endl;
    }

};
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
    cout<<"Enter Account number: "<<endl;
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