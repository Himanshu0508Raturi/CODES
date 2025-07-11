class Table
{
    public synchronized void pTable(int x)
    {
        for(int i = 1; i <= 10 ; i++)
        {
            System.out.println(i*x);
            try
            {
                Thread.sleep(1000);
            }catch(InterruptedException e)
            {
                System.out.println(e);
            }
        }
        
    }
}
class A extends Thread
{
    Table t;
    A(Table t)
    {
        this.t = t;
    }
    public void run()
    {
        t.pTable(2);
        System.out.println("Thread A finished.");
    }
}
class B extends Thread
{
    Table t;
    B(Table t)
    {
        this.t = t;
    }
    public void run()
    {
        t.pTable(5);
        System.out.println("Thread B finished.");
    }
}
public class synchronizedMultiThreading {
    public static void main(String args[]) throws InterruptedException
    {
        Table tt = new Table();
        A t1 = new A(tt);
        B t2 = new B(tt);
        t1.start();
        t2.start();
        t1.join();
        t2.join();
        System.out.println("End of main Program.");
    }
}
