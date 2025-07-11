// Read operation
// using prepared statement
import java.sql.*;
public class FetchTable1 {
    public static void main(String[] args) throws Exception
    {
        String url = "jdbc:mysql://localhost:3306/abc";
        String userName = "root";
        String pass = "";

        Connection con = DriverManager.getConnection(url,userName,pass);
        
        

        String query = "SELECT * FROM student";

        PreparedStatement st = con.prepareStatement(query);

        ResultSet rs = st.executeQuery();
        System.out.println("Id" + "     " + "Name");
        while(rs.next())
        {
            StringBuilder sb = new StringBuilder();
            sb.append(rs.getInt(1));
            sb.append("      ");
            sb.append(rs.getString(2));
            System.out.println(sb.toString());
        }
        st.close();
        con.close();
    }
}
