#include <iostream>
using namespace std;
namespace A
{
    class one
    {
        int x;

    public:
        one(int val) : x(val) {}
        void display()
        {
            cout << "x is :" << x << endl;
        }
    };
}
namespace B
{
    class one
    {
        int y;

    public:
        one(int val) : y(val) {}
        void display()
        {
            cout << "y is :" << y << endl;
        }
    };
}
int global = 5;
int main()
{
    int local = 10;
    A::one a(10);
    a.display();
    B::one b(20);
    b.display();
    cout << "Global Variable: " << global << endl;
    cout << "local Variable: " << local << endl;
    cout << "\n";
    cout << "************************************************************" << endl;
    cout << "Executed by: Himanshu Raturi, CSE3(A2), Class Roll no: 32" << endl;
    cout << "************************************************************" << endl;
    return 0;
}
