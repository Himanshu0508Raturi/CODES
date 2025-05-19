package CODES.Java.Himanshu_Raturi;
//import java.lang.reflect.Array;
import java.util.*;
public class Q22 {
    static void swapPair(ArrayList<String> list)
    {
        for(int i = 0 ; i < list.size()  - 1; i+=2)
        {
            String temp = list.get(i);
            list.set(i,list.get(i+1));
            list.set(i+1 , temp);
        }
    }
    public static void main(String[] args)
    {
        ArrayList<String> list = new ArrayList<String>();
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter number of values: ");
        int n = sc.nextInt();
        for(int i = 0 ; i < n ; i++)
        {   
            String str = sc.next();
            list.add(str);
        }
        swapPair(list);
        System.out.println(list);
        sc.close();
    }
}
