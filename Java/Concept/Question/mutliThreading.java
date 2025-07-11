class A extends Thread
{
    public void run()
    {
        for(int i = 1 ; i <= 10 ; i++)
        {
            System.out.println("From Thread A: i= " + i);
        }
        System.out.println("Thread A Finished.");
    }
}
class B extends Thread
{
    public void run()
    {
        for(int j = 1 ; j <= 10 ; j++)
        {
            System.out.println("From Thread B: j= " + j);
        }
        System.out.println("Thread B Finished.");
    }
}
class C extends Thread
{
    public void run()
    {
        for(int k = 1 ; k <= 10 ; k++)
        {
            System.out.println("From Thread C: k= " + k);
        }
        System.out.println("Thread C Finished.");
    }
}
public class mutliThreading {
    public static void main(String args[]) throws InterruptedException
    {
        A t1 = new A();
        B t2 = new B();
        C t3 = new C();
        
        System.out.println(t1.getClass());
        System.out.println(t2.getClass());
        System.out.println(t3.getClass());


        t1.setName("Thread from class A.");
        t2.setName("Thread from class B.");
        t3.setName("Thread from class C.");


        System.out.println(t1.getName());
        System.out.println(t2.getName());
        System.out.println(t3.getName());

        t2.setPriority(10);

        System.out.println(t1.getPriority());
        System.out.println(t2.getPriority());
        System.out.println(t3.getPriority());
        t1.start();
        t1.join();
        t2.start();
        t2.join();
        t3.start();
    }
}