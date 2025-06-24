/* Rule: If the superclass method does not declare an exception, 
subclass overridden method cannot declare the checked exception. */
import java.io.*;

class Parent
{
  void msg() throws IOException
  {
    System.out.println("parent");
  }
}

class Child extends Parent
{
    void msg() throws IOException
    {
      System.out.println("child");
      //throw new IOException("Error.");
      
    }

  public static void main(String args[])
  {
    Parent p = new Child();
    try
    {
      p.msg();
    }catch(IOException e)
    {
      System.out.println(e.getMessage());
    } 
  }
}

public class Rule1 {}
