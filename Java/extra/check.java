package CODES.Java.extra;
class prints
{
    void fn()
    {
        System.out.println("Inside prints");
    }
}
public class check
{
    public static void main(String[] args)
    {
        prints p = new prints();
        p.fn();
    }
}