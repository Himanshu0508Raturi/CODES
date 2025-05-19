package CODES.Java.Himanshu_Raturi;
class CSthread extends Thread{
    public void run()
    {
        int x = 1;
        while(true)
        {
            System.out.println("X: " + x);
            try
            {
                Thread.sleep(500);
            }catch(InterruptedException e)
            {
                System.out.println(e);
            }
            x++;
        }
    }
}
class ITthread extends Thread{
    public void run()
    {
        int y = 1;
        while(true)
        {
            System.out.println("Y: " + y);
            try
            {
                Thread.sleep(500);
            }catch(InterruptedException e)
            {
                System.out.println(e);
            }
            y++;
        }
    }
}
public class Q19 {
    public static void main(String args[])
    {
        CSthread t1 = new CSthread();
        ITthread t2 = new ITthread();
        t1.setName("CSThread");
        t2.setName("ITThread");
        System.out.println(t1.getName());
        System.out.println(t2.getName());
        t1.start();
        t2.start();
    }
}
