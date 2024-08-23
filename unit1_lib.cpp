#include<iostream>
#include<iomanip>
using namespace std;
class Tellcal
{
    private:
    string phno;
    string sname;
    int n;
    float billamt;

    public:
    //creating a constructor
    Tellcal(string a, string b , int c)
    {
        phno=a;
        sname=b;
        n=c;
    }
    //creating a compute function to calculate the bill
    void compute()
    {
        if(n <= 100)
        {
            billamt = 500;
        }else if(n < 200 )
        {
            billamt= 500 + (n-100)*1;
        }else if(n < 300)
        {
            billamt=600 + (n - 200)*1.20;
        }else
        {
            billamt= 720 + (n-300)*1.50;
        }
        }

    void display()
    {
        cout<<"\t\t\t"<<"*****Bharat Sanchar Nigam Ltd.*****"<<endl;
        cout<<"Phone Number: "<<phno<<"\t\t\t"<<"Subscriber Name: "<<sname<<endl;
        cout<<"Number of calls: "<<n<<"\t\t\t"<<"Bill amount: "<<billamt<<endl;
        cout<<"*************************************************"<<endl;
    }
};
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
