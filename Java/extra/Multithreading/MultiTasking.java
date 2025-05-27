//package CODES.Java.extra.Multithreading;
// Write a program to create more than one thread (Multi Tasking Using Threads)
class Theatre extends Thread 
{
    String str;
    Theatre(String str)
    {
        this.str = str;
    }
    public void run() 
    {
        for(int i = 1 ; i <= 10 ; i++)
        {
            System.out.println(str + ":" + i);
            try
            {
                Thread.sleep(2000);
            }catch(InterruptedException e)
            {
                System.out.println(e);
            }
        }
    }
}
public class MultiTasking {
    public static void main(String[] args) 
    {
        Theatre obj1 = new Theatre("Cut Ticket.");
        Theatre obj2 = new Theatre("Show Chair");
        obj1.start();
        obj2.start();
    }
}
/*🔹 Explanation
Two threads are created: t1 and t2.

obj1 does the "Cut Ticket" task.

obj2 does the "Show Chair" task.

Both threads run the run() method simultaneously.

Thread.sleep(2000) pauses the thread for 2 seconds.

While one thread is sleeping, the other can resume execution.

Thus, both threads run in parallel, showing true multithreading. */