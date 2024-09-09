/* A class Telcall calculates the monthly phone bill of a consumer. Some of the 
members of the class are given below: 
Class name:  
Data members/instance variable : phno(phone Number), sname(subscriber Name ) 
n(number of calls made) and amt (bill amount). 

Member function/methods:  
TelCall()   : Parameterized constructor to assign values to data members. 
Void compute( )  : to calculate the phone bill amount base on the slabs given below. 
Void display( )  : to display the details in the specified format. 

Number of calls         Rate
1 – 100               Rs. 500/- rental charge only 
101 - 200             Rs 1.00 per call + rental charge 
201 - 300             Rs. 1.20 per call + rental charge 
above 300             Rs. 1.50 per call + rental charge*/
#include<iostream>
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
        cout<<"\t\t"<<"*****Bharat Sanchar Nigam Ltd.*****"<<endl;
        cout<<"Phone Number: "<<phno<<"\t\t\t"<<"Subscriber Name: "<<sname<<endl;
        cout<<"Number of calls: "<<n<<"\t\t\t"<<"Bill amount: "<<billamt<<endl;
        cout<<"************************************************************"<<endl;
    }
};
int main()
{
    int vn;
    string vsname,vphno;// v implies for variable name.
    cout<<"Enter subscriber name: "<<endl;
    cin>>vsname;
    cout<<"Enter phone number: "<<endl;
    cin>>vphno;
    cout<<"Enter amount of call: "<<endl;
    cin>>vn;
    Tellcal s1(vphno,vsname,vn);  // first create a object.
    s1.compute();
    s1.display();
    return 0;
}
