//package CODES.Java.extra.Multithreading;
/* Write a Java program that creates three threads. First thread displays “Good Morning” every one second, the second thread
displays “Hello” every two seconds and the third thread displays “Welcome” every threeseconds. */
class A extends Thread
{
    synchronized public void run()
    {
        try
        {
            while(true)
            {
                sleep(1000);
                System.out.println("Good Morning");
            }
        }catch(InterruptedException e)
        {
            System.out.println(e);
        }
    }
} 
class B extends Thread
{
    synchronized public void run()
    {
        while(true)
        {
            try
            {
                sleep(2000);
                System.out.println("Hello");
            }catch(InterruptedException e)
            {
                System.out.println(e);
            }
        }
    }
}
class C extends Thread
{
    synchronized public void run()
    {
        while(true)
        {
            try
            {
                sleep(3000);
                System.out.println("Welcome");
            }catch(InterruptedException e)
            {
                System.out.println(e);
            }
        }
    }
}
public class ThreadQues {
    public static void main(String[] args) {
        A t1 = new A();
        B t2 = new B();
        C t3 = new C();
        t1.start();
        t2.start();
        t3.start(); 
    }
}
