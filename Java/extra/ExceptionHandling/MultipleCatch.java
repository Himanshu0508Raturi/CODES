//package CODES.Java.extra.ExceptionHandling;

public class MultipleCatch {
    public static void main(String args[])
    {
        try
        {
            int a[] = new int[5];
            a[5] = 30/0;
            String s = null;
            System.out.println(s.length());
            int n = Integer.parseInt("Hello");
        }catch(ArithmeticException e)
        {
            System.out.println("Division by zero not possible"); 
        }catch(ArrayIndexOutOfBoundsException e)
        {
            System.out.println("task 2 completed");
        }catch(Exception e)
        {
            System.out.println("common task completed");
        }
        System.out.print("Rest of the code.");
    }  
}
