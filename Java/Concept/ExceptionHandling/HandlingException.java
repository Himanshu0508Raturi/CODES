import java.io.*;
class M
{
    void method() throws IOException
    {
        throw new IOException("Device error.");
    }
}
public class HandlingException {
    public static void main(String args[])
    {
        try
        {
            M obj = new M();
            obj.method();
        }catch(IOException e)
        {   
            System.out.println("Exception Handeled.");
        }
        System.out.println("Normal Flow.");
    }
}
