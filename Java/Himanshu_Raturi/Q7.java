package CODES.Java.Himanshu_Raturi;
import java.util.Scanner;
public class Q7 {
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the number of rows");
        int rows=sc.nextInt();
        System.out.println("Enter the number of column");
        int columns=sc.nextInt();
        int arr[][]=new int[rows][columns];
        System.out.println("Enter the elements in the array ");
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<columns;j++)
            {
                arr[i][j]=sc.nextInt();

            }
        }
        for(int i=0;i<rows;i++)
        {
            int min=arr[i][0];
            int colindex=0;
            for(int j=0;j<columns;j++)
            {
                if(arr[i][j]<min)
                {
                    min=arr[i][j];
                    colindex=j;
                }
            }
            int max=arr[0][colindex];
            for(int k=0;k<rows;k++)
            {
                if(arr[k][colindex]>max)
                {
                    max=arr[k][colindex];
                }
            }
            if(min==max)
            {
                System.out.println("Saddle Point = "+min );
                break;
            }
        }
        sc.close();       
    }
    
}