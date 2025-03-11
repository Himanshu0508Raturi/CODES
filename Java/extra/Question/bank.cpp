#include <bits/stdc++.h>
using namespace std;
class MyException : public exception
{
public:
    const char *what()
    {
        return "ERROR!! Insufficient Balance";
    }
};
class Receiver
{
private:
    int bal;

public:
    void setbalance(int bal)
    {
        this->bal = bal;
    }
};
class bank
{
private:
    string id = "N.A.";
    int pass = 0;
    int accno = 0;
    int bal = 0;

public:
    void createAccount()
    {
        cout << "Create user ID: ";
        cin >> id;
        cout << "Create Password: ";
        cin >> pass;
        int confirmPass;
        cout << "Conform password: ";
        cin >> confirmPass;
        while (confirmPass != pass)
        {
            cout << "Passwords do not match. Please try again: ";
            cin >> confirmPass;
        }
        cout << "Account Created successfully." << endl;
        cout << "Enter Account Number: ";
        cin >> accno;
        cout << "Enter balance amount: ";
        cin >> bal;
    }
    void insideLogin()
    {
        int choice = 1;
        do
        {
            cout << "\nPress:\n1. Check Balance." << endl;
            cout << "2. Transfer Money." << endl;
            cout << "3. Exit" << endl;
            cin >> choice;
            switch (choice)
            {
            case 1:
                cout << "Current Balance is: " << bal << endl;
                break;
            case 2:
            {
                int amt;
                cout << "Enter Amount to Transfer: ";
                cin >> amt;
                try
                {
                    if (bal < amt)
                    {
                        MyException exp;
                        throw exp;
                    }
                    else
                    {
                        Receiver r;
                        r.setbalance(amt);
                        bal -= amt;
                        cout << amt << " has been successfully transfered." << endl;
                        cout << "Current Balance is: " << bal;
                    }
                }
                catch (MyException &ex)
                {
                    cout << ex.what();
                    throw;
                }
                break;
            }
            case 3:
                cout << "Exiting" << endl;
            }
        } while (choice != 3);
    }
    void login()
    {
        string enteredId;
        cout << "Enter Id: ";
        cin >> enteredId;
        int enteredPass;
        cout << "Enter password: ";
        cin >> enteredPass;
        while (enteredId != id && enteredPass != pass)
        {
            cout << "Wrong credential!! Try again" << endl;
            cout << "Enter ID: ";
            cin >> enteredId;
            cout << "Enter Password: ";
            cin >> enteredPass;
        }
        cout << "Login Successfully!!" << endl;
        insideLogin();
    }
};
int main()
{
    int choice = 1;
    int n;
    cout << "Enter Number of user: ";
    cin >> n;
    vector<bank> user(n);
    cout << "Welcome to my bank" << endl;
    for (int i = 0; i < n; i++)
    {
        do
        {
            cout << "\nUser " << (i + 1) << " Options:\n"
                 << "1. Create Account\n"
                 << "2. Login\n"
                 << "3. Exit\n"
                 << "Choose an option: ";
            cin >> choice;
            switch (choice)
            {
            case 1:
            {
                user[i].createAccount();
                break;
            }
            case 2:
            {
                try
                {
                    user[i].login();
                }
                catch (...)
                {
                    cout << "An error occured. Terminating...." << endl;
                }
                break;
            }
            case 3:
            {
                cout << "Exiting for user " << i + 1 << endl;
                break;
            }
            }
        } while (choice != 3);
    }
    return 0;
}