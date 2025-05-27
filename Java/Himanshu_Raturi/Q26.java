//package CODES.Java.Himanshu_Raturi;
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import java.sql.*;
class MyFrame extends JFrame implements ActionListener
{   JTextField name , code, designation , salary;
    MyFrame()
    {
        this.setSize(300,400);
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setLayout(new BorderLayout());

        JPanel panel = new JPanel(new GridLayout(6,3,10,10));
        panel.setBorder(BorderFactory.createEmptyBorder(20,20,20,20));

        name = new JTextField();
        code = new JTextField();
        designation = new JTextField();
        salary = new JTextField();

        panel.add(new JLabel("NAME")); panel.add(name);
        panel.add(new JLabel("CODE")); panel.add(code);
        panel.add(new JLabel("DESIGNATION")); panel.add(designation);
        panel.add(new JLabel("SALARY")); panel.add(salary);

        JButton save = new JButton("SAVE");
        JButton reset = new JButton("RESET");
        JButton exit = new JButton("EXIT");

        save.addActionListener(this);
        reset.addActionListener(this);
        exit.addActionListener(this);

        panel.add(new JLabel());
        panel.add(save);
        panel.add(reset);
        panel.add(exit);
        this.add(panel , BorderLayout.NORTH);
        this.setVisible(true);
    }
    public void saveOperation()
    {
        try
        {
            Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/db" , "root" , "");
            String query = "INSERT  INTO employee (`Name` , `Code` , `Designation` , `Salary`) VALUES (?,?,?,?)";
            PreparedStatement st = con.prepareStatement(query);
            String vName = name.getText();
            int vCode = Integer.parseInt(code.getText());
            String vDesignation = designation.getText();
            float vSalary = Float.parseFloat(salary.getText());
            st.setString(1,vName);
            st.setInt(2,vCode);
            st.setString(3,vDesignation);
            st.setFloat(4,vSalary);

            int row = st.executeUpdate();
            if(row > 0)
            {
                System.out.println("Saved data successfully.");
            }else
            {
                System.out.println("Data Could'nt be saved.");
            }
            st.close();
            con.close();
        }catch(SQLException e)
        {
            System.out.println("Exception Occurs: " + e);
        }
    }
    public void actionPerformed(ActionEvent e)
    {
        String command = e.getActionCommand();
        if(command.equals("SAVE"))
        {
            saveOperation();
        }else if(command.equals("RESET"))
        {
            name.setText("");
            code.setText("");
            salary.setText("");
            designation.setText("");
        }else if(command.equals("EXIT"))
        {
            System.exit(0);
        }
    }
}
public class Q26 {
    public static void retrieveAllRecords()
    {
        try
        {
            Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/db" , "root" , "");
            String query = "SELECT * FROM employee";
            PreparedStatement st = con.prepareStatement(query);
            ResultSet rs = st.executeQuery();
            int i = 1;
            while(rs.next())
            {
                System.out.print("Employee " + i++ + ":");
                System.out.println(rs.getString(1) + " " + rs.getInt(2) + "  " + rs.getString(3) + "  " + rs.getFloat(4));
            }

            rs.close();
            st.close();
            con.close();
        }catch(SQLException e)
        {
            System.out.println("Exception Occurs: " + e);
        }
    }
    public static void main(String[] args) {
        new MyFrame();
        retrieveAllRecords();
    }
}
