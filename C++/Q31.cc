#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;
class Student
{
    int rollNumber;
    string name;
    int age;
    string course;

public:
    void getDetails()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
        cin.ignore();
        cout << "Enter Name : ";
        getline(cin, name);
        cout << "Enter Age: ";
        cin >> age;
        cin.ignore();
        cout << "Enter Course : ";
        getline(cin, course);
    }
    void showDetails() const
    {
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Course: " << course << endl;
    }
    void writeToFile(ofstream &file) const
    {
        file << rollNumber << "|" << name << "|" << age << "|" << course << endl;
    }
    static bool parseFromLine(const string &line, Student &student)
    {
        stringstream ss(line);
        string temp;
        if (getline(ss, temp, '|'))
            student.rollNumber = stoi(temp);
        else
            return false;
        if (getline(ss, student.name, '|'))
            ;
        else
            return false;
        if (getline(ss, temp, '|'))
            student.age = stoi(temp);
        else
            return false;
        if (getline(ss, student.course))
            ;
        else
            return false;
        return true;
    }
    int getRollNumber() const
    {
        return rollNumber;
    }
};
void addStudent()
{
    ofstream file("students.txt", ios::app);
    if (!file)
    {
        cerr << "Error opening file." << endl;
        return;
    }
    Student student;
    student.getDetails();
    student.writeToFile(file);
    file.close();
    cout << "Student added successfully." << endl;
}
void searchStudent()
{
    ifstream file("students.txt");
    if (!file)
    {
        cerr << "Error opening file." << endl;
        return;
    }
    int rollNumber;
    cout << "Enter Roll Number to search: ";
    cin >> rollNumber;
    string line;
    Student student;
    bool found = false;
    while (getline(file, line))
    {
        if (Student::parseFromLine(line, student) && student.getRollNumber() == rollNumber)
        {
            cout << "Record found:" << endl;
            student.showDetails();
            found = true;
            break;
        }
    }
    file.close();
    if (!found)
    {
        cout << "Record not found." << endl;
    }
}
void deleteStudent()
{
    ifstream file("students.txt");
    ofstream tempFile("temp.txt");
    if (!file || !tempFile)
    {
        cerr << "Error opening file." << endl;
        return;
    }
    int rollNumber;
    cout << "Enter Roll Number to delete: ";
    cin >> rollNumber;
    string line;
    Student student;
    bool found = false;
    while (getline(file, line))
    {
        if (Student::parseFromLine(line, student))
        {
            if (student.getRollNumber() != rollNumber)
            {
                tempFile << line << endl;
            }
            else
            {
                found = true;
            }
        }
    }
    file.close();
    tempFile.close();
    remove("students.txt");
    rename("temp.txt", "students.txt");
    if (found)
    {
        cout << "Record deleted successfully." << endl;
    }
    else
    {
        cout << "Record not found." << endl;
    }
}
void displayAllStudents()
{
    ifstream file("students.txt");
    if (!file)
    {
        cerr << "Error opening file." << endl;
        return;
    }
    string line;
    Student student;
    cout << "Student Records:\n"
         << endl;
    while (getline(file, line))
    {
        if (Student::parseFromLine(line, student))
        {
            student.showDetails();
            cout << "----------------------" << endl;
        }
    }
    file.close();
}
int main()
{
    int choice;
    do
    {
        cout << "\nMenu:\n";
        cout << "1. Add Student\n";
        cout << "2. Search Student\n";
        cout << "3. Delete Student\n";
        cout << "4. Display All Students\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();
        switch (choice)
        {
        case 1:
            addStudent();
            break;
        case 2:
            searchStudent();
            break;
        case 3:
            deleteStudent();
            break;
        case 4:
            displayAllStudents();
            break;
        case 5:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);
    cout << "\n************************************************************" << endl;
    cout << "Executed by: Himanshu Raturi, CSE3(A2), Class Roll no: 32" << endl;
    cout << "************************************************************" << endl;
    return 0;
}