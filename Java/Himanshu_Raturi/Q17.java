//package CODES.Java.Himanshu_Raturi;
import java.util.Scanner;
class MyException extends Exception
{
    public MyException(String message)
    {
        super(message);
    }
}
class Mycalculator
{
    int n , p;
    void power(int n , int p)
    {
        try
        {
            if(n < 0 || p < 0)
            {
                throw new MyException("n and p should be non-negative.");
            }else if (n == 0 || p == 0)
            {
                throw new MyException("Both n and p are zero.");
            }
            System.out.println(Math.pow(n,p));
            
        }catch(MyException e)
        {
            System.out.println(e.getMessage());
        }
    }
}

public class Q17 {
    public static void main(String args[])
    {
        Mycalculator obj = new Mycalculator();
        int n,p;
        System.out.print("Enter n and p: ");
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        p = sc.nextInt();
        obj.power(n, p);
        System.out.println("End of main program.");
    }
}
