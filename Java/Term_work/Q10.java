import java.util.Arrays;
import java.util.Scanner;
public class Q10 {

    static void convertWave(int[] arr) {
        int n = arr.length;
        for (int i = 0; i < n - 1; i += 2) {
            if (i > 0 && arr[i] < arr[i - 1]) {
                int temp = arr[i];
                arr[i] = arr[i - 1];
                arr[i - 1] = temp;
            }
            if (i < n - 1 && arr[i] < arr[i + 1]) {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter array: ");
        int arr[] = new int[8];
        for(int i = 0 ; i < 8 ; i++)
        {
            arr[i] = sc.nextInt();
        }
        convertWave(arr);
        System.out.println("Wave Form Array:");
        for(int x: arr)
        {
            System.out.print(x + " ");
        }
        sc.close();
        
    }
}
