// Create operation
import java.sql.*;
import java.util.Scanner;
public class InsertOperation1 {
    public static void main(String[] args) throws Exception
    {
        Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/abc" , "root" , "");

        Statement st = con.createStatement();

        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Id: ");
        int id = sc.nextInt();
        System.out.print("Enter Name: ");
        String name = sc.next();

        String query = "INSERT INTO student values (" + id + ",'" + name + "')";

        int count = st.executeUpdate(query);
        System.out.println(count + " rows affected.");
        st.close();
        con.close();
        sc.close();
    }
}
