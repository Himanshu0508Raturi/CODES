//package CODES.Java.extra.Multithreading;
//  single tasking using a thread 
// In this program, a single thread t1 is used to execute three tasks. 

class Mythread implements Runnable
{
    public void run()
    {
        task1();
        task2();
        task3();
    }
    void task1()
    {
        System.out.println("This is task 1.");
    }
    void task2()
    {
        System.out.println("This is task 2.");
    }
    void task3()
    {
        System.out.println("This is task 3.");
    }
}
public class SingleTask {
    public static void main(String[] args) {
        Mythread obj = new Mythread();
        Thread t = new Thread(obj);
        t.start();
    }
}
