package CODES.Java.extra.Inheritance;

abstract class A {

  void display() {
    System.out.println("Display version of Parent Class");
  }
}

class singleInheritance extends A {

  void display() {
    System.out.println("hello");
  }

  public static void main(String args[]) {
    B b = new B();
    b.display();
  }
}
