//package CODES.Java.extra.CollectionFramework;
import java.util.*;
public class ArrayClass {
    public static void main(String[] args) {
        int[] nums = {1,2,3,4,5,6,7,8,9,10};
        int index = Arrays.binarySearch(nums,5);
        System.out.println(index);


        int[] nums2 = {10 , 2 , 32 , 12 , 15 , 76 , 17 , 48 , 79 , 90};
        Arrays.sort(nums2);
        for(int i:nums2)
        {
            System.out.println(i);
        }
    }
}
