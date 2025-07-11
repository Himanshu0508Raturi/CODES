//package CODES.Java.extra.Multithreading;
// Multithreading using thread class
class A extends Thread
{
    public void run()
    {
        for(int i = 1 ; i<= 5 ; i++)
        {
            System.out.println("From Thread " + currentThread().getName() + " i = " +i);
        }
        System.out.println("Exit from A");
    }
}
class B extends Thread
{
    public void run()
    {
        for(int i = 1 ; i<= 5 ; i++)
        {
            System.out.println("From Thread " + currentThread().getName() + " i = " +i);
        }
        System.out.println("Exit from B");
    }
}
class C extends Thread
{
    public void run()
    {
        for(int i = 1 ; i<= 5 ; i++)
        {
            System.out.println("From Thread " + currentThread().getName() + " i = " +i);
        }
        System.out.println("Exit from C");
    }
}
public class Method_1 {
    public static void main(String[] args) //throws InterruptedException
    {
        A t1 = new A();
        B t2 = new B();
        C t3 = new C();
        t1.start();
        t2.start();
        t3.start();
        try
        {
            t1.join();
            t2.join();
            t3.join();
        }catch(InterruptedException e)
        {
            System.out.println(e);
        }
        System.out.println("Exit from Main.");
    }
}
