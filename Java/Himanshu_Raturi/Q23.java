package CODES.Java.Himanshu_Raturi;
import java.util.*;
public class Q23 {
    static LinkedList<Integer> alternate(LinkedList<Integer> list1 , LinkedList<Integer> list2)
    {
        LinkedList<Integer> list3 = new LinkedList<Integer>();
        Iterator<Integer> itr1 = list1.iterator();
        Iterator<Integer> itr2 = list2.iterator();
        while(itr1.hasNext() || itr2.hasNext())
        {
            if(itr1.hasNext())
            {
                list3.add(itr1.next());
            }
            if(itr2.hasNext())
            {
                list3.add(itr2.next());
            }
        }
        return list3;
    } 
    public static void main(String args[])
    {
        LinkedList<Integer> list1 = new LinkedList<Integer>();
        LinkedList<Integer> list2 = new LinkedList<Integer>();
        LinkedList<Integer> list3 = new LinkedList<Integer>();
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter number of element for List1: ");
        int n = sc.nextInt();
        System.out.print("Enter element for List 1:");
        for(int i = 0 ; i< n ; i++)
        {
            list1.add(sc.nextInt());
        }
        System.out.print("Enter number of element for List2: ");
        int m = sc.nextInt();
        System.out.print("Enter element for List 2:");
        for(int i = 0 ; i< m ; i++)
        {
            list2.add(sc.nextInt());
        }
        list3 = alternate(list1,list2);
        System.out.println(list3);
        sc.close();
    }
}
