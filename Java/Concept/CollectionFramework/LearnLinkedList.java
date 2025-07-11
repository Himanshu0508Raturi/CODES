//package CODES.Java.extra.CollectionFramework;
import java.util.*;
public class LearnLinkedList {
    public static void main(String[] args) {
        LinkedList<Integer> list = new LinkedList<>();
        list.add(10); // Tc of add() and remove() is O(n).
        list.add(20);
        list.add(30);
        list.add(40);
        list.add(50);// insert element at the last.
        System.out.println(list);

        list.add(2,88);
        System.out.println(list);

        LinkedList<Integer> newList = new LinkedList<>();
        newList.add(190);
        newList.add(200);

        list.addAll(newList); // this will add element of newlist at the end of old list.
        System.out.println(list);

        System.out.println(list.get(2)); // get element at index 2. Does'nt remove element just return it.
        System.out.println(list);

        System.out.println(list.remove(2)); // list.remove(index) removes and return element at given index.
        System.out.println(list);

        System.out.println(list.remove(Integer.valueOf(220))); // print false.
        list.remove(Integer.valueOf(30)); // removes values 30 from the list . If value is present returns true. 
        System.out.println(list);

         

        list.set(3,999); // set at index with value given in parameters.
        System.out.println(list); // TC : O(1)

        System.out.println(list.contains(40)); // returns true/false // perform searching.

        System.out.println("USing for loop.");
        // Traversing
        for(int i = 0 ; i < list.size() ; i++)
        {
            System.out.println(list.get(i));
        }
        System.out.println("USing for each loop.");
        // using for each loop
        for(Integer x : list)
        {
            System.out.println(x);
        }

        // Using Iterator
        System.out.println("Using Iterator.");
        Iterator<Integer> it = list.iterator();
        while(it.hasNext())
        {
            System.out.println(it.next());
        }
        list.clear(); // clears the whole list.
        System.out.println(list);
    }
}
