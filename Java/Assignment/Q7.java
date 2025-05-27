/*Create Frame with student name, branch, address and roll number. Create various buttons like submit, 
display, search (according to roll number). Implement this application using JDBC. */
import java.sql.*;
import java.awt.event.*;
import java.awt.*;
import javax.swing.*;
class MyFrame extends JFrame implements ActionListener
{
    JTextField name , address , rollno , rollno1;
    JButton display , search , submit , reset;
    JComboBox<String> box;
    JTextArea output;
    MyFrame()
    {
        this.setTitle("Student Registration Form.");
        this.setSize(500,600);
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setLayout(new BorderLayout());

        JPanel panel = new JPanel(new GridLayout(8, 4 , 10 , 10));
        panel.setBorder(BorderFactory.createEmptyBorder(20,20,20,20));

        name = new JTextField();
        address = new JTextField();
        rollno = new JTextField();
        rollno1 = new JTextField();
        String[] branchType = {"CSE" , "ECE" , "EE" , "ME" , "CE" , "IT"};
        box = new JComboBox<>(branchType);

        panel.add(new JLabel("Name")); panel.add(name);
        panel.add(new JLabel("Roll Number")); panel.add(rollno);
        panel.add(new JLabel("Address")); panel.add(address);
        panel.add(new JLabel("Branch")); panel.add(box);
        panel.add(new JLabel("Enter rollno to search")); panel.add(rollno1);

        display = new JButton("Display");
        submit = new JButton("Submit");
        search = new JButton("Search");
        reset = new JButton("Reset");
        
        display.addActionListener(this);
        submit.addActionListener(this);
        search.addActionListener(this);
        reset.addActionListener(this);

        panel.add(new JLabel());
        panel.add(display);
        panel.add(submit);
        panel.add(search);
        panel.add(reset);

        output = new JTextArea();
        output.setEditable(false);
        JScrollPane scrollPane = new JScrollPane(output);
        this.add(panel , BorderLayout.NORTH);
        this.add(scrollPane , BorderLayout.CENTER);
        this.setVisible(true);

    }
    public void submitDataBase()
    {
        try
        {
            Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/student_detail" , "root" , "");
            String query = "INSERT INTO registration (`Name` , `Branch` , `Address` , `Rollno`) VALUES (?,?,?,?)";
            PreparedStatement st = con.prepareStatement(query);

            String vName = name.getText();
            String vBranch = (String)box.getSelectedItem();
            String vAddress = address.getText();
            int vRollNo = Integer.parseInt(rollno.getText());

            st.setString(1,vName);
            st.setString(2,vBranch);
            st.setString(3, vAddress);
            st.setInt(4,vRollNo);

            int row = st.executeUpdate();
            if(row > 0)
            {
                output.setText("Submitted Successfully.");
            }else
            {
                output.setText("Database Error.");
            }
            con.close();
            st.close();

        }catch(Exception e)
        {
            System.out.println("Exception Occured: " + e);
        }
    }
    public void searchById()
    {
        int vno = Integer.parseInt(rollno1.getText());
        try
        {
            Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/student_detail" , "root" , "");
            String query = "SELECT * FROM registration WHERE `Rollno` = ?";
            PreparedStatement st = con.prepareStatement(query);
            st.setInt(1,vno);
            ResultSet rs = st.executeQuery();

            if(rs.next())
            {
                StringBuilder sb = new StringBuilder();
                sb.append("Student Found.").append("\n");
                sb.append("Name: ").append(rs.getString(1)).append("\n");
                sb.append("RollNo: ").append(rs.getString(4)).append("\n");
                sb.append("Address: ").append(rs.getString(3)).append("\n");
                sb.append("Branch: ").append(rs.getString(2)).append("\n");
                output.setText(sb.toString());
            }else
            {
                output.setText("No student Found with ID: " + vno);
            }
            con.close();
            st.close();

        }catch(Exception e)
        {
            System.out.println("Exception Occured: " + e);
        }
    }
    public void actionPerformed(ActionEvent e)
    {
        String command = e.getActionCommand();
        if(command.equals("Submit"))
        {
            submitDataBase();
        }else if(command.equals("Display"))
        {
            StringBuilder sb = new StringBuilder();
            sb.append("Student Details." + "\n");
            sb.append("Name: ").append(name.getText()).append("\n");
            sb.append("RollNo: ").append(rollno.getText()).append("\n");
            sb.append("Address: ").append(address.getText()).append("\n");
            sb.append("Branch: ").append(box.getSelectedItem()).append("\n");
            output.setText(sb.toString());
        }else if(command.equals("Search"))
        {
            searchById();
        }else if(command.equals("Reset"))
        {
            name.setText("");
            address.setText("");
            box.setSelectedItem(null);
            rollno.setText("");
            rollno1.setText("");
        }
    }

}
public class Q7
{
    public static void main(String[] args) {
        new MyFrame();
    }
}