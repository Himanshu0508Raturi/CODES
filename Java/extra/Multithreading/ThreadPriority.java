//package CODES.Java.extra.Multithreading;
class Athread extends Thread
{
    public void run()
    {
        for(int i = 1 ; i <= 5 ; i++)
            System.out.println("From Thread A:i = " + i);
        System.out.println("Exit From A.");
    }
}
class Bthread extends Thread
{
    public void run()
    {
        for(int i = 1 ; i <= 5 ; i++)
            System.out.println("From Thread B:j = " + i);
        System.out.println("Exit From B.");
    }
}
class Cthread extends Thread
{
    public void run()
    {
        for(int i = 1 ; i <= 5 ; i++)
            System.out.println("From Thread C:k = " + i);
        System.out.println("Exit From C.");
    }
}
public class ThreadPriority {
    public static void main(String[] args) {
        Athread t1 = new Athread();
        Bthread t2 = new Bthread();
        Cthread t3 = new Cthread();

        t3.setPriority(Thread.MAX_PRIORITY);
        t2.setPriority(5);
        t1.setPriority(Thread.MIN_PRIORITY);

        System.out.println("Start Thread A"); 
        t1.start(); 
        System.out.println("Start Thread B"); 
        t2.start(); 
        System.out.println("Start Thread C"); 
        t3.start(); 
        System.out.println("End of Main Thread");
    }
}
