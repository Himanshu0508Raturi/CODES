#include <iostream>
#include <exception>
using namespace std;
class InvalidAgeException : public exception
{
public:
    int age;
    const char *what()
    {
        return "Exception: Age is less than 18\n";
    }
    InvalidAgeException(int a)
    {
        age = a;
    }
};
int main()
{
    int varage;
    cout << "Enter Age: " << endl;
    cin >> varage;
    try
    {
        if (varage < 18)
        {
            InvalidAgeException e(varage);
            throw e;
        }
        else
        {
            cout << "Age Entered is: " << varage << endl;
        }
    }
    catch (InvalidAgeException ob)
    {
        cout << ob.what();
    }
    cout << "End of main program" << endl;
    cout << "************************************************************" << endl;
    cout << "Executed by: Himanshu Raturi, CSE3(A2), Class Roll no: 32" << endl;
    cout << "************************************************************" << endl;
    return 0;
}