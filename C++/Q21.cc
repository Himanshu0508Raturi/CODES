#include <iostream>
using namespace std;
class department
{
private:
    string name;
    int faculty_count;
    string head_of_department;

public:
    department(string deptName = "", int faculty = 0, string head = "") : name(deptName), faculty_count(faculty), head_of_department(head) {}

    void displayDepartmentInfo() const
    {
        if (name != "")
        {
            cout << "Department: " << name << endl;
            cout << "Faculty count: " << faculty_count << endl;
            cout << "Head of department: " << head_of_department << endl;
        }
    }
};
class university
{
private:
    string universityName;
    department deprt[10];
    int departmentCount;

public:
    university(string uniName) : universityName(uniName), departmentCount(0) {}

    void addDepartment(const department &dept)
    {
        if (departmentCount < 10)
        {
            deprt[departmentCount++] = dept;
        }
        else
        {
            cout << "Cannot add more department." << endl;
        }
    }

    void display_uni_info() const
    {
        cout << "University: " << universityName << endl;
        cout << "Department- " << endl;
        for (int i = 0; i < departmentCount; i++)
        {
            deprt[i].displayDepartmentInfo();
            cout << "-------------" << endl;
        }
    }
};
int main()
{
    university myUniversity("Graphic Era Hill University");
    // creating department objects.
    department cseDept("Computer science", 30, "Prof. Bordoloi");
    department eceDept("Electronics ", 25, "Prof. Dubey");
    department mechDept("Mechanical", 20, "Prof. Kumar");
    cseDept.displayDepartmentInfo();
    // adding department
    myUniversity.addDepartment(cseDept);
    myUniversity.addDepartment(eceDept);
    myUniversity.addDepartment(mechDept);

    // displaying university and department
    myUniversity.display_uni_info();
    cout << "\n";
    cout << "************************************************************" << endl;
    cout << "Executed by: Himanshu Raturi, CSE3(A2), Class Roll no: 32" << endl;
    cout << "************************************************************" << endl;
    return 0;
}