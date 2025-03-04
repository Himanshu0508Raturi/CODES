package CODES.Java.Himanshu_Raturi;
import java.util.Scanner;
public class Q11_ArrayDemo  {
        void arrayFunc(int arr[] , int key)
        {
            int l = arr.length;
            System.out.println("Pair of element whose sum is " + key + " are:");
            for(int i = 0 ; i < l ; i++)
            {
                for(int j = i+1 ; j < l ; j++)
                {
                    int sum = arr[i] + arr[j];
                    if(sum == key)
                    {
                        System.out.println((arr[i]) +  " + " + (arr[j]) + " = " + key);
                    }
                }
            }
        }
        void arrayFunc(int A[] , int p , int B[] , int q)
        {
            int temp[] = new int[p+q];
            int i = 0 , j = 0 , k = 0;
            while(i < p && j < q)
            {
                if(A[i] < B[j])
                {
                    temp[k++] = A[i++];
                }else
                {
                    temp[k++] = B[j++];
                }
            }
            while(i < p)
            {
                temp[k++] = A[i++];
            }
            while(j < q)
            {
                temp[k++] = A[i++];
            }
            k=0;
            for(int x = 0 ; x < p ; x++)
            {
                A[x] = temp[k++];
            }
            for(int y = 0 ; y < q ; y++)
            {
                B[y] = temp[k++];
            }
            System.out.println("Sorted Arrays: ");
            System.out.print("A: [");
            for(int x = 0 ; x < p ; x++)
            {
                System.out.print(A[x] + ", ");
                if(x == p-1)
                {
                    System.out.println("]" + "");
                }
            }
            System.out.print("B: [");
            for(int y = 0 ; y < q ; y++)
            {
                System.out.print(B[y] + ", ");
                if(y == q-1)
                {
                    System.out.println("]" + "");
                }
            }

        }
    
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int p , q ; 
        Q11_ArrayDemo obj = new Q11_ArrayDemo();
        System.out.println("First arrayFunc Function.");
        System.out.print("Enter size of Array A[]: ");
        p = sc.nextInt();
        int A[] = new int[p];
        System.out.print("Enter element in Array A[]: ");
        for(int i = 0 ; i < p ; i++)
        {
            A[i] = sc.nextInt();
        }
        System.out.print("Enter Target: ");
        int key = sc.nextInt();
        obj.arrayFunc(A, key);
        System.out.println("Second arrayFunc Function.");
        System.out.print("Enter size of array A[]: ");
        int pa = sc.nextInt();
        System.out.print("Enter size of array B[]: ");
        q = sc.nextInt();
        int Aa[] = new int[pa];
        int B[] = new int[q];
        System.out.print("Enter element in Array A[]: ");
        for(int i = 0 ; i < pa ; i++)
        {
            Aa[i] = sc.nextInt();
        }
        System.out.print("Enter element in Array B[]: ");
        for(int i = 0 ; i < q ; i++)
        {
            B[i] = sc.nextInt();
        }
        obj.arrayFunc(Aa, pa , B , q);
        sc.close();
    }
}
