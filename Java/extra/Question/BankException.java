//package CODES.Java.extra.Question;
import java.util.Scanner;
class LowBalanceException extends RuntimeException
{
    LowBalanceException(String message)
    {
        super(message);
    }
}
class Bank
{
    int accNo;
    Double balance;
    String name;
    Bank(int accNo ,Double balance ,String name)
    {
        this.accNo = accNo;
        this.balance = balance;
        this.name = name;
    }
    void deposit(int amt)
    {
        balance += amt;
        System.out.println("INR "+ amt + " has been successfully deposited into your account.");
        System.out.println("Current Balance: INR " + balance);
    }
    void withdrawal(int amt)
    {
        try
        {
            if(amt > balance)
            {
                throw new LowBalanceException("Error!! Withdrawal amount is more than current balance.");
            }
            balance -= amt;
            System.out.println("INR " + amt + " has been successfully withdraw from your account.");
        }catch(LowBalanceException e)
        {
            System.out.println(e.getMessage());
        }
        
    }
    void display()
    {
        System.out.println("Details are:");
        System.out.println("name: " + name);
        System.out.println("Account Number: " + accNo);
        System.out.println("Balance: " + balance);
    }
}
public class BankException {
    public static void main(String args[])
    {
        Bank obj = new Bank(1221 , 5000.00 ,"Himanshu");
        obj.deposit(1000);
        obj.withdrawal(7000);
        obj.display();
        System.out.println("End of main program.");
    }
}
