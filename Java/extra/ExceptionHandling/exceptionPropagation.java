//package CODES.Java.extra.ExceptionHandling;

public class exceptionPropagation {
    void m()
    {
        int x = 50/0;
    }
    void n()
    {
        m();
    }
    void p()
    {
        try
        {
            n();
        }catch(Exception e)
        {
            System.out.println("exception handled");
        }
    }
    public static void main(String args[]) //throws Exception
    {   
        exceptionPropagation obj=new exceptionPropagation();   
        obj.p();   
        System.out.println("normal flow...");   
    }  
}
/* In the above example exception occurs in m() method where it is not 
handled, so it is propagated to previous n() method where it is not 
handled, again it is propagated to p() method where exception is 
handled.  
Exception can be handled in any method in call stack either in main() 
method,p() method,n() method or m() method. */