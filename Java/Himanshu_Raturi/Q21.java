package CODES.Java.Himanshu_Raturi;
//import java.lang.reflect.Array;
import java.util.*;
public class Q21 {
    static void removeEvenLength(ArrayList<String> l1)
    {
        Iterator<String> itr = l1.iterator();
        while (itr.hasNext())
        {
            String str = itr.next();
            if (str.length() % 2 == 0) {
                itr.remove();
            }
        }
    }

    public static void main(String args[]) {
        ArrayList<String> l1 = new ArrayList<String>();
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter number of names: ");
        int n = sc.nextInt();
        for(int i = 0 ; i < n ; i++)
        {   
            String str = sc.next();
            l1.add(str);
        }
        removeEvenLength(l1);
        System.out.println(l1);
        sc.close();
    }
}
