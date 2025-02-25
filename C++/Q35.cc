#include <list>
#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
    list<int> numbers;
    int num;
    cout << "Enter integers(enter a negative number to stop):\n";
    while (true)
    {
        cin >> num;
        if (num < 0)
        {
            break;
        }
        numbers.push_back(num);
    }
    // sort list and remove duplicates.
    numbers.sort();
    numbers.unique();
    // Display unique elements.
    cout << "Unique elements in the list: ";
    for (int n : numbers)
    {
        cout << n << " ";
    }
    cout << "\n************************************************************" << endl;
    cout << "Executed by: Himanshu Raturi, CSE3(A2), Class Roll no: 32" << endl;
    cout << "************************************************************" << endl;

    return 0;
}