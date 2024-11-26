#include <iostream>
#include <exception>
#include <string>
using namespace std;
void validateAccount(const string &account)
{
    if (account.empty())
    {
        throw invalid_argument("Invalid account: Account number is empty.");
    }
}
void transferFunds(const string &account, double balance, double amount)
{
    try
    {
        validateAccount(account);
        if (balance < amount)
        {
            throw runtime_error("Insufficient balance for the transfer.");
        }
        cout << "Transferring $" << amount << " to account: " << account << endl;
    }
    catch (const exception &e)
    {
        cerr << "Error in transferFunds: " << e.what() << endl;
        throw;
    }
}
int main()
{
    try
    {
        string account = "123456789";
        double balance = 500.00;
        double amount = 600.00;
        transferFunds(account, balance, amount);
    }
    catch (const invalid_argument &e)
    {
        cout << "User Notification: " << e.what() << endl;
    }
    catch (const runtime_error &e)
    {
        cout << "User Notification: " << e.what() << endl;
    }
    cout << "End of Program" << endl;
    cout << "************************************************************" << endl;
    cout << "Executed by: Himanshu Raturi, CSE3(A2), Class Roll no: 32" << endl;
    cout << "************************************************************" << endl;
    return 0;
}