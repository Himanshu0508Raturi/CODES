//package CODES.Java.extra.ExceptionHandling;

public class throw1 {
    static void validate(int age)
    {
        try
        {
            if(age<18)
            {
                ArithmeticException e1 = new ArithmeticException("Not valid");
                throw e1;
                //throw new ArithmeticException("not valid.");

            }else
            {
                System.out.println("welcome to vote");
            }
        }catch(ArithmeticException e)
        {
            System.out.println(e.getMessage());
        }
    }
    public static void main(String args[])
    {
        validate(13);
        System.out.println("rest of the code..."); 
    }
}
