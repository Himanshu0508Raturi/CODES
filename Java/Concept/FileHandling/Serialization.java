import java.io.*;
class Employee implements Serializable
{
    int id , salary;
    String name;
    Employee(int id , int salary , String name)
    {
        this.id = id;
        this.salary = salary;
        this.name = name;
    }
}
public class Serialization {
    public static void main(String[] args) throws Exception 
    {
        Employee obj = new Employee(10, 50000, "Himanshu");
        ObjectOutputStream oos = new ObjectOutputStream(new FileOutputStream("employee.ser"));
        oos.writeObject(obj);
        oos.close();

        ObjectInputStream ois = new ObjectInputStream(new FileInputStream("employee.ser"));
        Employee e = (Employee) ois.readObject();
        ois.close();
        System.out.println("Name: " + e.name + " Id: " + e.id + " Salary: " + e.salary);
    }
}
