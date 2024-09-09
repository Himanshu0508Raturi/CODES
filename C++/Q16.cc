//6. Write a C++ program to declare a class. Declare pointer to class. Initialize and display the
// contents of the class member. 
#include<iostream>
using namespace std;

class Myclass
{
    private:
        int data;
    public: 
    Myclass(int val): data(val){};
        void display()
        {
            cout<<"Data: "<<data<<endl;
        }
};

int main()
{
    Myclass obj; // create an object
    Myclass *ptr = &obj;//create a pointer to object
    ptr->data=20;
    ptr->display();
    return 0;
}