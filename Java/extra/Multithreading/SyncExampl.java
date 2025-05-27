//package CODES.Java.extra.Multithreading;
// Implementing Synchronization-Example 
class Account
{
    int balance;
    public Account()
    {
        balance = 5000;
    }
    public synchronized void withdrawal(int bal)
    {
        if(bal <= balance)
        {
            System.out.println("Amount Withdraw " + bal);
            try
            {
                Thread.sleep(1000);
            }catch(InterruptedException e)
            {
                System.out.println(e);
            }
            balance -= bal;
            System.out.println("Balance remaining: " + balance);
        }
    }
}
class Amtthread extends Thread
{
    Account obj;
    public Amtthread(Account a)
    {
        obj = a;
    }
    public void run()
    {
        obj.withdrawal(500);
    }
}
public class SyncExampl {
    public static void main(String[] args) {
        Account a1 = new Account();
        //Amtthread c1 = new Amtthread(a1);
        //Thread t1 = new Thread(c1,"ABC");
        //Thread t2 = new Thread(c1,"XTZ");
        Amtthread t1 = new Amtthread(a1);
        Amtthread t2 = new Amtthread(a1);
        t1.start();
        t2.start();
    }
}
