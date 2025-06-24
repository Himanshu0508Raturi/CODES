//package CODES.Java.extra.CollectionFramework;
import java.util.*;
public class CollectionClass {
    public static void main(String[] args) {
        LinkedList<Integer> list  = new LinkedList<>();
        list.add(10);
        list.add(20);
        list.add(20);
        list.add(30);
        list.add(40);
        list.add(50);

        System.out.println("Min Element: " + Collections.min(list));
        System.out.println("Max Element: " + Collections.max(list));
        System.out.println("Frequency: " + Collections.frequency(list , 20));
        Collections.sort(list);
        System.out.println(list);
        Collections.sort(list , Comparator.reverseOrder());
        System.out.println(list);
    }
}
