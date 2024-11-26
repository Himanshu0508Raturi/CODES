#include <iostream>
using namespace std;

class shape
{
public:
    virtual void draw()
    {
        printf("Drawing shape.\n");
    }
    virtual void erase()
    {
        printf("Erasing shape.\n");
    }
};
class circle : public shape
{
public:
    void draw()
    {
        printf("Drawing circle.\n");
    }
    void erase()
    {
        printf("Erasing circle.\n");
    }
};
class triangle : public shape
{
public:
    void draw()
    {
        printf("Drawing triangle.\n");
    }
    void erase()
    {
        printf("Erasing triangle.\n");
    }
};
class square : public shape
{
public:
    void draw()
    {
        printf("Drawing square.\n");
    }
    void erase()
    {
        printf("Erasing square.\n");
    }
};
int main()
{
    shape *ob;

    circle cr;
    ob = &cr;
    ob->draw();
    ob->erase();
    cout << endl;

    triangle tr;
    ob = &tr;
    ob->draw();
    ob->erase();
    cout << endl;
    square sr;
    ob = &sr;
    ob->draw();
    ob->erase();
    cout << "************************************************************" << endl;
    cout << "Executed by: Himanshu Raturi, CSE3(A2), Class Roll no: 32" << endl;
    cout << "************************************************************" << endl;
}