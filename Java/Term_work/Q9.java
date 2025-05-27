import java.util.Arrays;
import java.util.Scanner;
public class Q9 {

    static int findMinPlatforms(int[] arrival, int[] departure) {
        int n = arrival.length;
        Arrays.sort(arrival);
        Arrays.sort(departure);
        int platforms = 1, maxPlatforms = 1;
        int i = 1, j = 0;
        while (i < n && j < n) {
            if (arrival[i] <= departure[j]) {
                platforms++;
                i++;
            } else {
                platforms--;
                j++;
            }
            maxPlatforms = Math.max(maxPlatforms, platforms);
        }
        return maxPlatforms;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] arrival = new int[5];
        int[] departure = new int[5];
        System.out.println("Enter Arrival Array: ");
        for(int i = 0 ; i < 5; i++)
        {
            arrival[i] = sc.nextInt();
        }
        System.out.println("Enter Departure Array: ");
        for(int i = 0 ; i < 5; i++)
        {
            departure[i] = sc.nextInt();
        }
        System.out.println("Minimum platforms needed: " + findMinPlatforms(arrival, departure));
        sc.close();
    }
}
