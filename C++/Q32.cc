/* Write a program that reads 10 integer values from the user, stores them in a vector, and then:
• Displays the elements in the vector.
• Finds and displays the largest and smallest elements in the vector.*/
// wap to enter 10 element in the vector and display from user
#include <iostream>
#include <vector>
#include <algorithm> //for max and min function
using namespace std;
int main()
{
    vector<int> numbers(10);
    cout << "Enter 10 integers " << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> numbers[i];
    }
    // display  element
    cout << "Element in the vector" << endl;
    for (int num : numbers)
    {
        cout << num << " ";
    }
    // find and display largest and smalest numbers
    int max = *max_element(numbers.begin(), numbers.end());
    int min = *min_element(numbers.begin(), numbers.end());
    cout << "\nLargest Number = " << max << endl;
    cout << "Minimun Number = " << min << endl;
    cout << "************************************************************" << endl;
    cout << "Executed by: Himanshu Raturi, CSE3(A2), Class Roll no: 32" << endl;
    cout << "************************************************************" << endl;
    return 0;
}