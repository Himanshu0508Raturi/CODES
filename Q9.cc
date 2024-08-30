/*Write a C++ program to find the maximum occurring character in a string.*/
#include<iostream>
#include<string>
#include <climits>
using namespace std;

void find_min_max(int a[])
{
    int i, max = 0, min = INT_MAX, max_ind, min_ind;
    for (i = 0; i < 26; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            max_ind = i;
        }
        if (a[i] < min && a[i] > 0)
        {
            min = a[i];
            min_ind = i;
        }
    }
    cout << "Element(s) with maximum occurrence: " << endl;
    for (i = 0; i < 26; i++)
    {
        if (a[i] == max)
        {
            cout << " " << (char)(97 + i) << " occurs " << max << " times" << endl;
        }
    }
}

void count_occurrences(string str)
{
    int count[26] = {0}, i;
    for (i = 0; i < str.length(); i++)
    {
        if (isalpha(str[i]))
        {
            char lower_char = tolower(str[i]);
            count[lower_char - 97]++;
        }
    }

    find_min_max(count);
}

int main()
{
    string str;
    cout << "Enter a string: " << endl;
    getline(cin, str);

    count_occurrences(str);

    return 0;
}
