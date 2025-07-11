//package CODES.Java.extra.JDBC;
/*
step 1: import the package.
step 2: load and Register the driver.
step 3: Establish the connection.
step 4: Create the statement.
step 4: execute the query.
step 5: Process result.
step 7: close the connection.
 */
import java.sql.*;
public class DemoClass {
    public static void main(String[] args) throws Exception
    {
        String url = "jdbc:mysql://localhost:3306/abc";
        String username = "root";
        String pass = "";
        String query = "SELECT Name FROM student WHERE ID =1";
        
        Connection con = DriverManager.getConnection(url,username,pass);
        Statement st = con.createStatement();
        ResultSet rs = st.executeQuery(query);
        rs.next();
        
        int id = rs.getInt("Id");
        System.out.print(id + " ");
        String name = rs.getString("Name");
        System.out.println(name);
        
        st.close();
        con.close();
    }
}
