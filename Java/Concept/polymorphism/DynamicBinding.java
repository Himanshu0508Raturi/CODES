package CODES.Java.extra.polymorphism;
class Person {

  void walk() {
    System.out.println("Can Run....");
  }
}

class Employee extends Person {

  void walk() {
    System.out.println("Running Fast...");
  }
}

public class DynamicBinding {

  public static void main(String arg[]) {
    Person p = new Employee(); //upcasting
    p.walk();
  }
}
