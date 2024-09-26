#include <iostream>
using namespace std;
class base
{
public:
    int publicvar;

private:
    int privatevar;

protected:
    int protectedvar;

public:
    base() : publicvar(1), protectedvar(2), privatevar(3) {}
    void showvars() const
    {
        cout << "base class - publicvar: " << publicvar << endl;
        cout << "base class - privatevar: " << privatevar << endl;
        cout << "base class - protectedvar: " << protectedvar << endl;
    }
};
class DerivedPublic : public base
{
public:
    void accessBaseMembers()
    {
        cout << "DerivedPublic class(public inheritance)" << endl;
        cout << "Publicvar: " << publicvar << endl; // it become protected here.
        cout << "protectedvar: " << protectedvar << endl;
        cout << "privatevar(Not Accessible): " << endl;
    }
};
class DerivedProtected : protected base
{
public:
    void accessBaseMembers()
    {
        cout << "DerivedProtected class(Protected inheritance)" << endl;
        cout << "Publicvar: " << publicvar << endl;
        cout << "protectedvar: " << protectedvar << endl;
        cout << "privatevar(Not Accessible): " << endl;
    }
};
class DerivedPrivate : private base
{
public:
    void accessBaseMembers()
    {
        cout << "DerivedPrivate class(Private inheritance)" << endl;
        cout << "Publicvar: " << publicvar << endl;
        cout << "protectedvar: " << protectedvar << endl;
        cout << "privatevar(Not Accessible): " << endl;
    }
};
int main()
{
    base base_obj;
    DerivedPrivate obj_private;
    DerivedProtected obj_protected;
    DerivedPublic obj_public;
    base_obj.showvars();
    cout<<endl;
    obj_private.accessBaseMembers();
    cout<<endl;
    obj_protected.accessBaseMembers();
    cout<<endl;
    obj_private.accessBaseMembers();
    cout << "\n";
    cout << "************************************************************" << endl;
    cout << "Executed by: Himanshu Raturi, CSE3(A2), Class Roll no: 32" << endl;
    cout << "************************************************************" << endl;
    return 0;
}