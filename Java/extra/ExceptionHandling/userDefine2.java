//package CODES.Java.extra.ExceptionHandling;
/*Example of user define exception handling using 
overridden toString() Method. */
class NegativeAgeException extends Exception
{
    int age;
    NegativeAgeException(int age)
    {
        this.age = age;
    }
    public String toString()
    {
        return "Age cannot be negative: " + age;
    }
}
public class userDefine2 {
    public static void main(String[] args) //throws NegativeAgeException
    {
        int age = -10;
        /*if(age < 0)
        {
            throw new NegativeAgeException(age);
        }else
        {
            System.out.println("Age entered is " + age); 
        }*/
        try
        {
            NegativeAgeException obj = new NegativeAgeException(age);
            throw obj;
        }catch(NegativeAgeException obj)
        {
            System.out.println(obj);
        }
        System.out.println("Rest of the code."); 
    }
}
