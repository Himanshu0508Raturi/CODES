//package CODES.Java.extra.Multithreading;
// using Runnable interface
//package CODES.Java.extra.Multithreading;
// Multithreading using thread class
class A implements Runnable
{
    public void run()
    {
        for(int i = 1 ; i<= 5 ; i++)
        {
            System.out.println("From Thread A" + " i = " +i);
        }
        System.out.println("Exit from A");
    }
}
class B implements Runnable
{
    public void run()
    {
        for(int i = 1 ; i<= 5 ; i++)
        {
            System.out.println("From Thread B "  + " i = " +i);
        }
        System.out.println("Exit from B");
    }
}
class C implements Runnable
{
    public void run()
    {
        for(int i = 1 ; i<= 5 ; i++)
        {
            System.out.println("From Thread C " + " i = " +i);
        }
        System.out.println("Exit from C");
    }
}
public class Method_2 {
    public static void main(String[] args) //throws InterruptedException
    {
        A t1 = new A();
        Thread t1a = new Thread(t1);
        B t2 = new B();
        Thread t2a = new Thread(t2);
        C t3 = new C();
        Thread t3a = new Thread(t3);
        t1a.start();
        t2a.start();
        t3a.start();
        try
        {
            t1a.join();
            t2a.join();
            t3a.join();
        }catch(InterruptedException e)
        {
            System.out.println(e);
        }
        System.out.println("Exit from Main.");
    }
}

