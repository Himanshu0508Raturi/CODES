#include<iostream>
#include "unit1_lib.cpp"
using namespace std;

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
