/*Create a class MyBank with following details- 
private double balance  
public MyBank(double balance) // constructor 
public void deposit(double amount)// to deposit amount 
public void withdraw (double amount) // to withdraw 
public double getBalance() // to fetch the balance of account 
Create another class MyTransaction, which is a thread class with following details- 
private MyBank account // Data member 
private double amount // Data member 
private boolean flag // Data member, it will be true for deposit and false for withdraw 
public MyTransaction (MyBank account, double amount, boolean flag)// constructor 
Also override the run() method to call deposit() and withdraw() methods. 
Create main thread where- 
Create an object of Mybank with initial balance 1000 Rs. Also create two threads of 
MyTransaction class named as depositeThread and withdrawThread, both must share the 
same object of Mybank class.  
For deposit thread the flag value must be true and for withdraw thread it must be false. Ex- 
MyTransaction depositThread=new MyTransaction(account,500,true);// 500 amount to be 
deposited 
MyTransaction withdrawThread=new MyTransaction(account,200,true);// 200 amount to be 
withdrawn 
Write your program in such a way that, threads can call deposit and withdraw methods in 
any order but the final balance of account will be consistent. You must input the deposit and 
withdrawing amount from user.   
Note: Provide the output for at least five different inputs. */
//package CODES.Java.extra.Question;
class BankAccount
{
    private double balance;
    public BankAccount(double balance)
    {
        this.balance = balance;
    }
    public void deposit(double amt)
    {
        synchronized(this)
        {
            balance += amt;
            System.out.println("INR: " + amt + " has been added to your account.");
            System.out.println("Net balance: INR " + balance);
        }
    }
    public void withdrawal(double amt)
    {
        synchronized(this)
        {
            if(amt > balance)
            {
                System.out.println("Insufficient amount.");
            }else
            {
                balance -= amt;
                System.out.println("INR: " + amt + " has been deducted from your account.");
                System.out.println("Net balance: INR " + balance);
            }
        }
    }
    double getBalance()
    {
        return balance;
    }
}
class Transaction extends Thread
{
    private BankAccount b;
    private double amt;
    private boolean deposit;
    public Transaction(double amt,BankAccount b ,boolean deposit)
    {
        this.b = b;
        this.amt = amt;
        this.deposit = deposit;
    }
    public void run() 
    {
        while(true)
        {
            if(deposit)
            {
                try
                {
                    b.deposit(amt);
                    Thread.sleep(500);
                }catch(InterruptedException e)
                {
                    System.out.println(e);
                }
            }else
            {
                try
                {
                    b.withdrawal(amt);
                    Thread.sleep(500);
                }catch(InterruptedException e)
                {
                    System.out.println(e);
                }
            }
        }
    }  
}
public class BankAcc {
    public static void main(String args[]) throws InterruptedException
    {
        BankAccount obj = new BankAccount(1000);
        Transaction depositThread = new Transaction(500, obj, true);
        Transaction withdrawalThread = new Transaction(600, obj, false);
        depositThread.start();
        withdrawalThread.start();
        depositThread.join();
        withdrawalThread.join();
        System.out.println(obj.getBalance());
    }
}
