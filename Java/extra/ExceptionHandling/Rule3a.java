/*Example in case subclass overridden method declares subclass 
exception  */
import java.io.*;

class Parent {

  void msg() throws Exception {
    System.out.println("parent");
  }
}

class Child extends Parent {

  void msg() throws ArithmeticException {
    System.out.println("child");
  }

  public static void main(String args[]) {
    Parent p = new Child();
    try {
      p.msg();
    } catch (Exception e) {}
  }
}

public class Rule3a {}
