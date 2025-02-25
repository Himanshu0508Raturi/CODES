import java.util.Scanner;
public class Q5 {
    public static void main(String[] args) {
        {
            Scanner in=new Scanner(System.in);
            int n;
            System.out.println("Enter the number of element");
            n=in.nextInt();
            int arr[]=new int[n];
            int temp;
            System.out.println("Enter the element in the array ");
            for(int i=0;i<n;i++)
            {
                arr[i]=in.nextInt();
            }
            for(int i=0;i<n-1;i++)
            {
                if(i%2==0)
                {
                    if(arr[i]>arr[i+1])
                    {
                        temp=arr[i];
                        arr[i]=arr[i+1];
                        arr[i+1]=temp;
                    }
                }
                else
                {
                    if(arr[i]<arr[i+1])
                    {
                        temp=arr[i];
                        arr[i]=arr[i+1];
                        arr[i+1]=temp;
                    }
                }
               


            }
            System.out.println("Array after change ");
            for(int i=0;i<n;i++)
            {
                System.out.print(arr[i]+" ");
            }
            in.close();
        }
    }    
}
