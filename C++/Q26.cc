#include <iostream>
#include <string>
#include <exception>
using namespace std;
class MyNation : public exception
{
    string s;

public:
    MyNation(string vs) : s(vs) {}
    const char *what()
    {
        return "Exception: Incorrect input";
    }
};
int main()
{
    string str;
    cout << "Enter a string" << endl;
    getline(cin, str);
    try
    {
        if (str != "jai hind" && str != "JAI HIND")
        {
            // MyNation obj(str);
            // throw obj;
            throw MyNation(str);
        }
        else
        {
            cout << "Correct input: " << str << endl;
        }
    }
    catch (MyNation &e)
    {
        cout << e.what() << endl;
    }
    cout << "End of main Program" << endl;
    cout << "************************************************************" << endl;
    cout << "Executed by: Himanshu Raturi, CSE3(A2), Class Roll no: 32" << endl;
    cout << "************************************************************" << endl;
    return 0;
}