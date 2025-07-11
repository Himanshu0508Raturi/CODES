import java.sql.*;
import java.util.Scanner;
public class DeleteOperation {
    public static void main(String[] args)  {
        
        try
        {
            Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/abc" , "root" , "");
            String query = "DELETE FROM student WHERE id = ?";
            PreparedStatement st = con.prepareStatement(query);
            Scanner sc = new Scanner(System.in);

            System.out.print("Enter ID to delete: ");
            int id = sc.nextInt();

            st.setInt(1,id);
            int row = st.executeUpdate();
            if(row > 0)
            {
                System.out.println("Student deleted successfully.");
            }else
            {
                System.out.println("Student not found.");
            }

            con.close();
            st.close();
            sc.close();
        }catch(Exception e)
        {
            System.out.println("Exception Occur: " + e.getMessage());
        }
    }
}
