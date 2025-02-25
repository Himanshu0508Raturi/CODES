import java.util.Scanner;
//import java.lang.*;
public class Q2
{
    public static void main(String args[])
    {
        System.out.println("The user is\n1.Term Deposit\n2.Recurring Deposit");
        Scanner sc = new Scanner(System.in);
        int Choice = sc.nextInt();
        switch(Choice)
        {
            case 1:
            {
                System.out.println("Enter Principle(P): ");
                int Princ = sc.nextInt();
                System.out.println("Enter rate of interest(r): ");
                float Rate = sc.nextFloat();
                System.out.println("Enter Time Period in years(t): ");
                int t = sc.nextInt();
                double Maturity = Princ*Math.pow(1+Rate/100,t);
                System.out.println("Maturity Amount is: " + Maturity);
                break;
            }
            case 2:
            {
                System.out.println("Enter Monthly installment(P): ");
                double p = sc.nextInt();
                System.out.println("Enter Rate of Interest(r): ");
                double r = sc.nextInt();
                System.out.println("Enter Time period(yrs): ");
                double t = sc.nextInt();
                double Maturity =  p * t + p * t*(t + 1) / 2 * r / 100 * 1 / 12;
                System.out.println("Maturity is: " + Maturity);
                break; 
            }
        }
        sc.close();
    }
    
}