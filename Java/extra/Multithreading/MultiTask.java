//package CODES.Java.extra.Multithreading;
// How to perform multiple tasks by multiple threads (multitasking in multithreading).
class Simple1 extends Thread
{
    public void run()
    {
        System.out.println("Task 1.");
    }
}
class Simple2 extends Thread
{
    public void run()
    {
        System.out.println("Task 2.");
    }
}
public class MultiTask {
    public static void main(String[] args)
    {
        Simple1 t1 = new Simple1();
        Simple2 t2 = new Simple2();
        t1.start();
        t2.start();    
    }
}
