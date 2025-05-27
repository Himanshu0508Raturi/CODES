import java.sql.*;
import java.util.Scanner;
public class SearchOperation {
    public static void main(String[] args) throws Exception {

        Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/abc", "root", "");

        String query = "SELECT * FROM student WHERE id = ?";
        PreparedStatement pst = con.prepareStatement(query);

        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Student ID to search: ");
        int id = sc.nextInt();


        pst.setInt(1, id);
        ResultSet rs = pst.executeQuery();

        // Process result
        if (rs.next()) {
            System.out.println("Student Found:");
            System.out.println("ID   : " + rs.getInt("id"));
            System.out.println("Name : " + rs.getString("name"));
        } else {
            System.out.println("No student found with ID: " + id);
        }

        // Clean up
        rs.close();
        pst.close();
        con.close();
        sc.close();
    }

}
