//package CODES.Java.extra.ExceptionHandling;
import java.io.IOException;
public class throws1 {
    void m() throws IOException
    {
        throw new IOException("device error.");
    }
    void n()throws IOException
    {
        m();
    }
    void p() throws IOException
    {
        /*try
        {
            n();
        }catch(IOException e)
        {
            System.out.println(e.getMessage());
            System.out.println("Exception Handeled");
        }*/
        n();
    }
    public static void main(String[] args) //throws IOException
    {
        throws1 obj  = new throws1();
        try
        {
            obj.p();
        }catch(IOException e)
        {
            System.out.println(e.getMessage());
        }
        System.out.println("Normal flow.");    
    }
}
