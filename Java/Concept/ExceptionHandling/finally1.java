//package CODES.Java.extra.ExceptionHandling;

public class finally1 {
    public static void main(String args[])
    {
        try
        {
            int x = 25/5;
            System.out.println(x);
        }catch(NullPointerException e)
        {
            System.out.println(e);
        }catch(ArithmeticException e)
        {
            System.out.println(e);
        }
        finally
        {
            System.out.println("Finally block always executed Irrespective of exceptpion occured or not.");
        }
        System.out.println("Rest of code.");
    }
}
