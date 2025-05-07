package CODES.Java.extra.Question;

class operation
{
    synchronized void pTable(int x)
    {
        for(int i = 1 ; i <= 10 ; i++)
        {
            System.out.println(i*x);
        }
    }
    synchronized void counterNumber(int x)
    {
        for(int i = 1 ; i <= 10 ; i++)
        {
            System.out.println(x+i);
        }
    }
}
class A extends Thread
{
    operation obj;
    A(operation obj)
    {
        this.obj = obj;
    }
    public void run()
    {
        obj.pTable(19);
    }
}
class B extends Thread
{
    operation obj;
    B(operation obj)
    {
        this.obj = obj;
    }
    public void run()
    {
        obj.counterNumber(60);
    }
}
public class multiThQues {
    public static void main(String args[]) throws InterruptedException
    {
        operation obj = new operation();
        A t1 = new A(obj);
        B t2 = new B(obj);
        t1.start();
        t1.join();
        t2.start();
        t2.join();
        System.out.println("Remaining part of main function.");
    }
}
