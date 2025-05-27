//package CODES.Java.Term_work;
import java.util.Scanner;
public class Q6 {
     static void sort(char[] arr) {
        int n = arr.length;
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    char temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
    static void generatePermutations(char[] chars, boolean[] used, char[] result, int depth) {
        if (depth == chars.length) {
            System.out.println(new String(result));
            return;
        }

        for (int i = 0; i < chars.length; i++) {
            if (used[i]) continue;
            if (i > 0 && chars[i] == chars[i - 1] && !used[i - 1]) continue;

            used[i] = true;
            result[depth] = chars[i];
            generatePermutations(chars, used, result, depth + 1);
            used[i] = false; 
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter String: ");
        String str = sc.nextLine();
        char[] chars = str.toCharArray();
        sort(chars);
        boolean[] used = new boolean[chars.length];
        char[] result = new char[chars.length];
        System.out.println("Distinct permutations of \"" + str + "\":");
        generatePermutations(chars, used, result, 0);
        sc.close();
    }   
}

