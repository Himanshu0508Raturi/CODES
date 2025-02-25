import java.util.Scanner;
public class Q6
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter n: ");
        int n = sc.nextInt();
        int arr[] = new int[n];
        System.out.print("Input: ");
        for(int i = 0 ; i < n ; i++)
        {
            arr[i] = sc.nextInt();
        }
        int first = 0;
        for(int i = 0; i < n ; i++)
        {
            if(arr[i] < 0 )
            {
                int temp = arr[i];
                arr[i] = arr[first];
                arr[first] = temp;
                first++;
            }
        }
        System.out.print("Output: ");
        for(int i = 0 ; i < n ; i++)
        {
            System.out.print(arr[i] + " ");
        }
        sc.close();
    }
}