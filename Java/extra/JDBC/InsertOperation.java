// Create operation
import java.sql.*;
public class InsertOperation
{
    public static void main(String[] args) throws Exception
    {
        String url = "jdbc:mysql://localhost:3306/abc";
        String userName = "root";
        String pass = "";

        Connection con = DriverManager.getConnection(url, userName, pass);
        Statement st = con.createStatement();

        String query = "INSERT INTO student values (5 , 'Shivaay')";
        int count = st.executeUpdate(query);
        System.out.println(count + " rows affected");
        st.close();
        con.close();

    }
} 

