#include <iostream>
#include <string>
using namespace std;

class card
{
public:
    virtual void is_check(string no)
    {
    }
};
class masterCard : public card
{
public:
    void is_check(string no)
    {
        if (no[0] == '5' && (no[1] == '1' || no[1] == '2' || no[1] == '3' || no[1] == '4' || no[1] == '5') && (no.length() == 16 || no.length() == 19))
        {
            cout << "Given card is a valid master card" << endl;
        }
        else
        {
            cout << "Given card is not a valid master card" << endl;
        }
    }
};
class visa : public card
{
public:
    void is_check(string no)
    {
        if (no[0] == '4' && (no.length() == 13 || no.length() == 16 || no.length() == 19))
        {
            cout << "Given card is a valid visa card" << endl;
        }
        else
        {
            cout << "Given card is not a valid visa card" << endl;
        }
    }
};
class AmericanExpress : public card
{
public:
    void is_check(string no)
    {
        if (no[0] == '3' && (no[1] == '4' || no[1] == '7') && (no.length() == 15 || no.length() == 18))
        {
            cout << "Given card is a valid American Express card" << endl;
        }
        else
        {
            cout << "Given card is not a valid  American Express card" << endl;
        }
    }
};
int main()
{
    string crd_no;

    card *ob;

    cout << "Press\n1 for MasterCard.\n2 for Visa,\n3 for American Express\n"
         << endl;
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:
    {
        cout << "Enter card number." << endl;
        cin.ignore();
        getline(cin, crd_no);
        masterCard ms;
        ob = &ms;
        ob->is_check(crd_no);
        break;
    }
    case 2:
    {
        cout << "Enter card number." << endl;
        cin.ignore();
        getline(cin, crd_no);
        visa vs;
        ob = &vs;
        ob->is_check(crd_no);
        break;
    }
    case 3:
    {
        cout << "Enter card number." << endl;
        cin.ignore();
        getline(cin, crd_no);
        AmericanExpress am;
        ob = &am;
        ob->is_check(crd_no);
        break;
    }
    default:
    {
        cout << "Invalid Input" << endl;
        break;
    }
    }
    cout << "************************************************************" << endl;
    cout << "Executed by: Himanshu Raturi, CSE3(A2), Class Roll no: 32" << endl;
    cout << "************************************************************" << endl;
    return 0;
}