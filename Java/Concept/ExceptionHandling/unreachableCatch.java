//package CODES.Java.extra.ExceptionHandling;

public class unreachableCatch {
    public static void main(String args[])
    {
        try
        {
            int arr[] = new int[5];
            arr[6] = 2/0;
        }catch(Exception e)
        {
            System.out.println("Generic Exception");
        }/*catch(ArrayIndexOutOfBoundsException e)
        {
            System.out.println("array index out of bound exception");
        }*/
    }  
}
