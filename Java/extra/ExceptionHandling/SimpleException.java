//package CODES.Java.extra.ExceptionHandling;

public class SimpleException
{
  public static void main(String args[]) 
  {
    try 
    {
      int data = 50 / 0;
    } catch (ArithmeticException e)
    {
      System.out.println(e);
    }
    System.out.println("rest of the code...");
  }
}
