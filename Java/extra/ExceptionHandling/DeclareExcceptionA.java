import java.io.*;
class M
{
    void method() throws IOException
    {
        System.out.println("device operation performed");   
    }
}
public class DeclareExcceptionA {
    public static void main(String args[]) throws IOException
    {
        M obj = new M();
        obj.method();
        System.out.println("Normal Flow.");
    }
}
