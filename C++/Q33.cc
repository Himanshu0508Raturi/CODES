#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> numbers;
    int num;
    cout << "Enter up to 20 integers: ";
    while (numbers.size() < 20)
    {
        cin >> num;
        if (num < 0)
            break;
        numbers.push_back(num);
    }
    cout << "List before modification\n";
    for (int n : numbers)
    {
        cout << n << " ";
    }
    if (!numbers.empty())
    {
        numbers.pop_front();
        numbers.pop_back();
    }
    cout << "\nList after removing first and last element\n";
    for (int n : numbers)
    {
        cout << n << " ";
    }
    cout << "\n************************************************************" << endl;
    cout << "Executed by: Himanshu Raturi, CSE3(A2), Class Roll no: 32" << endl;
    cout << "************************************************************" << endl;
    return 0;
}