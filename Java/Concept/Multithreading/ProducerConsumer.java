//java program for producer and consumer--inter thread communication
import java.util.*;
class Pc
{
    LinkedList<Integer> list = new LinkedList<>();
    int cap = 2;
    public void produce() throws Exception
    {
        int v = 0;
        while(true)
        {
            synchronized(this)
            {
                while(list.size() == cap)
                {
                    wait();
                }
                System.out.println("Producer is going to produce..." + v);
                list.add(v++);
                notify(); // Notifies the waiting consumer that an item has been produced
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
                System.out.println("consumer is going to consume: " + list.removeFirst());
                notify();// Notifies the waiting producer that a slot is free
                Thread.sleep(500);
            }
        }
    }
}
class A extends Thread
{
    Pc obj = new Pc();
    A(Pc obj)
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
    Pc obj = new Pc();
    B(Pc obj)
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
public class ProducerConsumer
{
    public static void main(String[] args) {
        Pc obj = new Pc();
        A t1 = new A(obj);
        B t2 = new B(obj);
        t1.start();
        t2.start();
    }
}