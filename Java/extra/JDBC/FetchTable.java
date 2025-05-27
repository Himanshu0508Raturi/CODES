// Read operation
import java.sql.*;
public class FetchTable {
    public static void main(String[] args) throws Exception
    {
        String url = "jdbc:mysql://localhost:3306/abc";
        String userName = "root";
        String pass = "";

        Connection con = DriverManager.getConnection(url,userName,pass);
        
        Statement st = con.createStatement();

        String query = "SELECT * FROM student";

        ResultSet rs = st.executeQuery(query);
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
