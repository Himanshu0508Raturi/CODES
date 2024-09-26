/*. Demonstrate the order of execution of constructors and destructors in a multilevel
inheritance scenario.*/
#include<iostream>
using namespace std;
class base
{
    public:
    base()
    {
        cout<<"Base class constructor."<<endl;
    }
    ~base()
    {
        cout<<"Base class destructor."<<endl;
    }
};
class Derived_A : public base
{
    public:
    Derived_A()
    {
        cout<<"Derived_A class constructor."<<endl;
    }
    ~Derived_A()
    {
        cout<<"Derived_A class destructor."<<endl;
    }
};
class Derived_B : public Derived_A
{
    public:
    Derived_B()
    {
        cout<<"Derived_B class constructor."<<endl;
    }
    ~Derived_B()
    {
        cout<<"Derived_B class destructor."<<endl;
    }
};

int main()
{
    Derived_B obj;


    
    cout << "\n";
    cout << "************************************************************" << endl;
    cout << "Executed by: Himanshu Raturi, CSE3(A2), Class Roll no: 32" << endl;
    cout << "************************************************************" << endl;
    return 0;
}