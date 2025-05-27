package CODES.Java.Term_work;
/* Write  a  program  to  insert  a  string  into  another  string  (Without  using  any  predefined 
method) at any given index. 
ILoveMyIndia  
index: 1 
String to be inserted: Also 
Output: IAlsoLoveMyIndia */
import java.util.Scanner; 
class StringAppend
{
    String insertString(String str , int index , String append)
    {
        char[] newStr = new char[str.length() + append.length()];
        int i = 0;
        for(i = 0 ; i < index ; i++)
        {
            newStr[i] = str.charAt(i);
        }
        for(int j = 0 ; j < append.length(); i++,j++)
        {
            newStr[i] = append.charAt(j);
        }
        for(int k = index ; k < str.length() ; i++,k++)
        {
            newStr[i] = str.charAt(k);
        }
        return new String(newStr);
    }
}
public class Q1 {
    
    public static void main(String args[])
    {
        StringAppend obj = new StringAppend();
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter String:");
        String str = sc.nextLine();
        System.out.print("Enter Index: ");
        int ind = sc.nextInt();
        System.out.print("Enter appended String:");
        String appendStr = sc.next();
        String newStr = obj.insertString(str, ind, appendStr);       
        System.out.println(newStr);
        sc.close();
    }
}
    