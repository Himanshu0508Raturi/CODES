import java.util.Scanner;
import java.sql.*;
public class UpdateOperation {
    public static void main(String[] args)throws Exception {
        Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/abc" , "root" , "");
        String query = "UPDATE student SET name = ? WHERE id = ?";
        PreparedStatement st = con.prepareStatement(query);
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter id to update: ");
        int id = sc.nextInt();
        System.out.print("Enter new Name: ");
        String name = sc.next();
        
        st.setString(1,name);
        st.setInt(2,id);
        

        int rows = st.executeUpdate();
        if(rows > 0)
        {
            System.out.println("Updated successfully.");
        }else
        {
            System.out.println("Student not found.");
        }
        st.close();
        con.close();
        sc.close();
    }
}
/*
 Note: if Statement = executeQuery();
  if PreparedStatement = executeUpdate(); 


  In the SQL query:
    ? at position 1 is for name
    ? at position 2 is for id

    st.setString(1, name);  // name goes in position 1
    st.setInt(2, id);       // id goes in position 2


 */