package CODES.Java.extra.Inheritance;

// Create a super class.
class A {

  A() {
    System.out.println("Inside A's constructor.");
  }
}

// Create a subclass by extending class A.
class B extends A {

  B() {
    System.out.println("Inside B's constructor.");
  }
}

// Create another subclass by extending B.
class C extends B {

  C() {
    System.out.println("Inside C's constructor.");
  }
}

public class multiLevel {

  public static void main(String args[]) {
    //C c = new C();
    System.gc();
  }
}
