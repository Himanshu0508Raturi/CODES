package CODES.Java.Himanshu_Raturi;
import java.util.*;
class Pc1
{
    LinkedList<Integer> list = new LinkedList<>();
    int capacity = 2;
    public void produce() throws Exception
    {
        int v = 0;
        while(true)
        {
            synchronized(this)
            {
                while(list.size() == capacity)
                {
                    wait();
                }
                System.out.println("Producer is going to produce..." +v);
                list.add(v++);
                notify();
                Thread.sleep(500);
            }
        }
    }
    public void consume() throws Exception
    {
        while(true)
        {
            synchronized(this)
            {
                while(list.size() == 0)
                {
                    wait();
                }
                System.out.println("Consumer is going to consume: "+ list.removeFirst());
                notify();
                Thread.sleep(500);
            }
        }
    }
}
class A extends Thread
{
    Pc1 obj = new Pc1();
    A(Pc1 obj)
    {
        this.obj = obj;
    }
    public void run()
    {
        try
        {
            obj.produce();
        }catch(Exception e)
        {
            System.out.println(e);
        }
    }
}
class B extends Thread
{
    Pc1 obj = new Pc1();
    B(Pc1 obj)
    {
        this.obj = obj;
    }
    public void run()
    {
        try
        {
            obj.consume();
        }catch(Exception e)
        {
            System.out.println(e);
        }
    }
}
public class Q20 {
    public static void main(String args[]) throws InterruptedException
    {
        Pc1 obj = new Pc1();
        A t1 = new A(obj);
        B t2 = new B(obj);
        t1.start();
        t2.start();
    }
}
