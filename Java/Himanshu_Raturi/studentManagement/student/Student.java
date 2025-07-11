package student;
public class Student
{
    int Studentid;
    String name;
    int age;
    public Student(int Studentid ,String name , int age)
    {
        this.Studentid = Studentid;
        this.name = name;
        this.age = age;
    }
    public String getStudentInfo()
    {
        return "Student Id: " + Studentid + " Name: " + name + " Age: "+ age;
    }

}

