//package CODES.Java.extra;
import java.util.Scanner;
public class stokes {
    static int stockPrice(int arr[] , int n)
    {
        int min = arr[0];
        int minInd = 0;
        for(int i = 1 ; i < n ; i++)
        {
            if(arr[i] < min)
            {
                min = arr[i];
                minInd = i;
            }
        }
        int max = min;
        for(int i = minInd + 1 ; i < n ; i++)
        {
            if(arr[i] >max)
            {
                max = arr[i];
            }
        }
        int profit = max - min;
        return (profit > 0)? profit : 0;
    }

    public static void main(String[] args)
    {
        int n;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter size: ");
        n = sc.nextInt();
        int arr[] = new int[n];
        System.out.print("Enter Elements: ");
        for(int i = 0 ; i < n ; i++)
        {
            arr[i] = sc.nextInt();
        }
        System.out.println("Maximun Profit: "+ stockPrice(arr,n));
        sc.close();
    }
}

