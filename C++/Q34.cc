#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
    map<string, int> studentscore;
    string name;
    int score;
    // add student score
    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter score: ";
    cin >> score;
    studentscore[name] = score;

    // search for a student and display score
    cout << "Enter Student name to be search: ";
    cin >> name;
    if (studentscore.find(name) != studentscore.end())
    {
        cout << name << " s score " << studentscore[name] << endl;
    }
    else
    {
        cout << "Student not found" << endl;
    }
    cout << "\n************************************************************" << endl;
    cout << "Executed by: Himanshu Raturi, CSE3(A2), Class Roll no: 32" << endl;
    cout << "************************************************************" << endl;
}