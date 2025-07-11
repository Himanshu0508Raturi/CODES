//package CODES.Java.extra.Multithreading;

public class ThreadDemo implements Runnable
{
    public void run()
    {
        for(int i = 1 ; i <= 100 ; i++)
        {
            System.out.println(Thread.currentThread().getName() + " thread is running " + i);
        }
    }
    public static void main(String[] args) {
        ThreadDemo obj = new ThreadDemo();
        Thread t1 = new Thread(obj,"First");
        Thread t2 = new Thread(obj,"Second");
        t1.start();
        t2.start();
    }
}
