//package CODES.Java.extra.Question;
class A extends Thread{
    public void run()
    {
        for(int i = 1 ; i <= 5 ; i++)
        {
            System.out.println(i);
            try{
                Thread.sleep(500);
            }catch(InterruptedException e)
            {
                System.out.println(e);
            }
        }
    }
}
public class timedJoin {
    public static void main(String args[]) throws InterruptedException
    {
        A t1 = new A();
        t1.start();
        t1.join(1600);
        System.out.println("Main");
    }
}
