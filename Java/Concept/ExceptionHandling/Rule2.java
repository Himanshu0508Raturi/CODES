/* If the superclass method does not declare an exception, 
subclass overridden method cannot declare the checked exception but 
can declare unchecked exception.  */
import java.io.*;

class Parent
{
    void msg()
    {
        System.out.println("parent");
    }
}

class Child extends Parent
{
    void msg() throws ArithmeticException*
    {
        System.out.println("child");
    }

  public static void main(String[] args)
  {
    Parent p = new Child();
    p.msg();
  }
}
public class Rule2 {}
