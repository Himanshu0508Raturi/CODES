/*If the superclass method declares an exception, subclass 
overridden method can declare same, subclass exception or no 
exception but cannot declare parent exception.*/
import java.io.*;

class Parent {

  void msg() throws ArithmeticException {
    System.out.println("parent");
  }
}

class Child extends Parent {

  void msg() throws Exception
  {
    System.out.println("child");
  }

  public static void main(String args[]) {
    Parent p = new Child();
    try {
      p.msg();
    } catch (Exception e) {}
  }
}

public class Rule3 {}
