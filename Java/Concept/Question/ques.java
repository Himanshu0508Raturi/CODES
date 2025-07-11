/*write a class display having void wish(String name) method that wishes hello to given string name . Between printing hello and 
provided string name apply delay of 500 ms . Suppose multiple threads are there and they are trying to access this wish() method 
concurrently on same object then irregular output will be there . write this application in such a way so that output becomes 
regular. */
//package CODES.Java.extra.Question;

class Display{
    public synchronized void  wish(String name)
    {
        System.out.print(Thread.currentThread().getName() + " Hello ");
        try
        {
            Thread.sleep(500);
        }catch(InterruptedException e)
        {
            System.out.println(e);
        }
        System.out.println(name);
    }
}
class A extends Thread
{
    Display t;
    A(Display t)
    {
        this.t = t;
    }
    public void run()
    {
        t.wish("Himanshu.");
    }
}
class B extends Thread
{
    Display t;
    B(Display t)
    {
        this.t = t;
    }
    public void run()
    {
        t.wish("Bhaumik.");
    }
}
public class ques {
    public static void main(String args[]) throws InterruptedException
    {
        Display d = new Display();
        A t1 = new A(d);
        B t2 = new B(d);
        t1.setName("Thread-1");
        t2.setName("Thread-2");
        t1.start();
        t2.start();
        t1.join();
        t2.join();
        System.out.println("Resume the main thread......");
    }
}
