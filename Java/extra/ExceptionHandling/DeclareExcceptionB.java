import java.io.*;
class M
{
    void method() throws IOException
    {
        throw new IOException("device B error");   
    }
}
public class DeclareExcceptionB {
    public static void main(String args[]) throws IOException
    {
        M obj = new M();
        obj.method();
        System.out.println("Normal Flow.");
    }
}
