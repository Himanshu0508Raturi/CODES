//package CODES.Java.extra.FileHandling;

import java.io.*;
class Student implements Serializable
{
  int id;
  String name;
  Student(int id, String name)
  {
    this.id = id;
    this.name = name;
  }
}
public class ObjectStreamDemo {
      public static void main(String[] args) throws Exception {
    // Serialization
    Student s = new Student(1, "Himanshu");
    ObjectOutputStream oos = new ObjectOutputStream(new FileOutputStream("student.ser"));
    oos.writeObject(s);
    oos.close();    

    // Deserialization
    ObjectInputStream ois = new ObjectInputStream(new FileInputStream("student.ser"));
    Student s2 = (Student) ois.readObject();
    ois.close();
    System.out.println("ID: " + s2.id + ", Name: " + s2.name);
  }
}
