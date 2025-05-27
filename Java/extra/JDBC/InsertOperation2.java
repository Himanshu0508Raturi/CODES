// Create operation
// using prepared statement.
import java.sql.*;
import java.util.Scanner;
public class InsertOperation2 {
    public static void main(String[] args) throws Exception
    {
        Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/abc" , "root" , "");

        

        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Id: ");
        int id = sc.nextInt();
        System.out.print("Enter Name: ");
        String name = sc.next();

        String query = "INSERT INTO student (id,name) VALUES (?,?)";

        PreparedStatement st = con.prepareStatement(query);
        st.setInt(1 , id);
        st.setString(2,name);

        int count = st.executeUpdate();
        System.out.println(count + " rows affected.");
        st.close();
        con.close();
        sc.close();
    }
}
