public class Q8
{
    public static void main(String args[])
    {
        String str = new String("01101111010");
        int count = 0 ;
        for(int i =0 ; i < str.length() - 1; i++)
        {
            if(str.charAt(i) == '0' && str.charAt(i+1) == '1')
            {
                count++;
            }
        }
        System.out.println(count);
        
    }
}