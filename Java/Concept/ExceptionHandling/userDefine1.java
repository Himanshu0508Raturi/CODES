//package CODES.Java.extra.ExceptionHandling;
class InvalidAgeException extends Exception
{
    InvalidAgeException(String s)
    {
        super(s);
    }
}
public class userDefine1 {
    static void validate(int age) throws InvalidAgeException
    {
        if(age < 18)
        {
            throw new InvalidAgeException("Not Valid.");
        }else
        {
            System.out.println("welcome to vote");
        }
    }
    public static void main(String[] args) //throws InvalidAgeException
    {
        try
        {
            validate(10);
        }catch(InvalidAgeException e)
        {
            System.out.println(e);
        }
        //validate(12);
        System.out.println("Rest of the code.");
    }
}
