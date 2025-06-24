//package CODES.Java.extra.CollectionFramework;
import java.util.*;
public class MapInterface {
    public static void main(String[] args) {
        // store key value pair.
        HashMap<String,Integer> mp = new HashMap<>();
        mp.put("One" , 1);
        mp.put("Two" , 2);
        mp.put("Three" , 3);
        mp.put("Four" , 4);
        if(!mp.containsKey("Three"))
        mp.put("Three" , 40); // Overwrites old value at key three.

        System.out.println(mp.containsKey("E")); // return true/false
        System.out.println(mp.containsValue(3));
        System.out.println(mp.isEmpty());

        mp.putIfAbsent("Five" , 5);// if key is absent then only put the element.
        System.out.println(mp);

        // Iterate through map.
        for(Map.Entry<String , Integer> e : mp.entrySet())
        {
            System.out.println(e);
        }

        for(Map.Entry<String , Integer> e: mp.entrySet())
        {
            System.out.println(e.getKey());
        }

        for(Map.Entry<String,Integer> e: mp.entrySet())
        {
            System.out.println(e.getValue());
        }

        for(String key : mp.keySet())
        {
            System.out.println(key);
        }

        for(Integer value : mp.values())
        {
            System.out.println(value);
        }

        mp.clear();
        System.out.println(mp);

    }
}
