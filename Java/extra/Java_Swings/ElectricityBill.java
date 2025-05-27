//package CODES.Java.extra.Java_Swings;
/*📝 Problem Statement:
Create a Java Swing application that calculates a consumer’s monthly electricity bill based on their units consumed. The bill should include multiple components such as:

📥 Input Fields:
Consumer Name

Consumer ID

Units Consumed (kWh)

Connection Type

Domestic

Commercial

📤 Output (Display):
Consumer Details

Units Consumed

Rate per Unit

Energy Charges

Fixed Charges

Taxes (e.g., 5% GST)

Total Bill

💰 Tariff Details:
1. Domestic:
Units Slab	Rate per Unit
0–100	₹1.5
101–300	₹3.0
301+	₹5.0

Fixed Charges: ₹50
GST: 5% of total bill (energy + fixed)

2. Commercial:
Units Slab	Rate per Unit
0–100	₹3.5
101–300	₹5.0
301+	₹7.0

Fixed Charges: ₹150
GST: 5% of total bill (energy + fixed)

✅ Features You Must Implement:
Swing form with proper layout (use GridLayout, FlowLayout, or BorderLayout)

Input validation (e.g., numeric check for units)

Radio buttons or combo box for connection type

A "Calculate" button to display the bill in a text area or new dialog
integrate jdbc with it
Optional: A "Print" or "Save as PDF" feature */
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import java.sql.*;
class MyFrame extends JFrame implements ActionListener
{
    JTextField name , id ,unit;
    JComboBox<String> box;
    JTextArea output;
    
    MyFrame()
    {
        this.setTitle("Electricity Bill Calculator");
        this.setSize(500,600);
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setLayout(new BorderLayout());

        JPanel panel = new JPanel(new GridLayout(8, 4, 10, 10));
        panel.setBorder(BorderFactory.createEmptyBorder(20, 20, 20, 20));
        //panel.setBackground(Color.GRAY);
        //panel.setBounds(0,250,500,250);

        name = new JTextField();
        id = new JTextField();
        unit = new JTextField();
        String[] conType = {"Domestic","Commercial"};
        box = new JComboBox<>(conType);

        panel.add(new JLabel("Consumer Name: ")); panel.add(name);
        panel.add(new JLabel("Consumer ID: ")); panel.add(id);
        panel.add(new JLabel("Units Consumed(kWh): ")); panel.add(unit);
        panel.add(new JLabel("Connection Type: ")); panel.add(box);

        JButton b = new JButton("Submit");
        b.addActionListener(this);

        JButton reset = new JButton("Reset");
        reset.addActionListener(this);

        panel.add(new JLabel());
        panel.add(b);
        panel.add(reset);

        output = new JTextArea();
        output.setEditable(false);
        JScrollPane scrollPane = new JScrollPane(output);

        this.add(panel,BorderLayout.NORTH);
        this.add(scrollPane, BorderLayout.CENTER);
        this.setVisible(true);
    }
    public double totalBill(boolean x , double ut)
    {
        double t;
        if(x)
        {
            if(ut>=0 && ut <= 100)
                {
                    t = ut*3.5;
                }else if(ut >= 101 && ut <= 300)
                {
                    t = ut * 5.0;
                }else
                {
                    t = ut * 7.0;
                }
                t = t + 150;
                t += 0.05*t;
        }else
        {
            if(ut>=0 && ut <= 100)
            {
                t = ut*1.5;
            }else if(ut >= 101 && ut <= 300)
            {
                t = ut * 3.0;
            }else
            {
                t = ut * 5.0;
            }
            t = t +50;
            t += 0.05*t;
        }
        return t;
    }    
    public void domesticBillCalculation()
    {
        double ut = Double.parseDouble(unit.getText());
        StringBuilder sb = new StringBuilder();
        sb.append("Bill Summary.").append("\n");
        sb.append("Consumer Name: ").append(name.getText()).append("\n");
        sb.append("Consumer ID: ").append(id.getText()).append("\n");
        sb.append("Units Consumed: ").append(unit.getText()).append("kWh" + "\n");
        sb.append("Connection Type: ").append("Domestic").append("\n");
        if(ut>=0 && ut <= 100)
        {
            sb.append("Rate per unit: ₹1.5" + "\n");
        }else if(ut >= 101 && ut <= 300)
        {
            sb.append("Rate per unit: ₹3.0" + "\n");
        }else
        {
            sb.append("Rate per unit: ₹5.0" + "\n");
        }
        sb.append("Energy Charges: 5%" + "\n");
        sb.append("Fixed Charges: ₹50" + "\n");
        sb.append("Total Bill: ").append(totalBill(false,ut)).append("\n");
        output.setText(sb.toString());
    }

    public void commercialBillCalculation()
    {
        double ut = Double.parseDouble(unit.getText());
        StringBuilder sb = new StringBuilder();
        sb.append("Bill Summary.").append("\n");
        sb.append("Consumer Name: ").append(name.getText()).append("\n");
        sb.append("Consumer ID: ").append(id.getText()).append("\n");
        sb.append("Units Consumed: ").append(unit.getText()).append("kWh" + "\n");
        sb.append("Connection Type: ").append("Commercial").append("\n");
        if(ut>=0 && ut <= 100)
        {
            sb.append("Rate per unit: ₹3.5" + "\n");
        }else if(ut >= 101 && ut <= 300)
        {
            sb.append("Rate per unit: ₹5.0" + "\n");
        }else
        {
            sb.append("Rate per unit: ₹7.0" + "\n");
        }
        sb.append("Energy Charges: 5%" + "\n");
        sb.append("Fixed Charges: ₹150" + "\n");
        sb.append("Total Bill: ").append(totalBill(true, ut)).append("\n");
        output.setText(sb.toString());
        //displayResult(true,ut,totalBill(true, ut));
            
            
    }
    public void databaseConnect()
    {
        try
        {
            Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/electricity_bill_db" , "root" , "");
            String query = "INSERT INTO customers (`Name`, `Customer ID`, `Unit Consumed`, `Connection Type`, `Total bill`) VALUES (?, ?, ?, ?, ?)";

            PreparedStatement st = con.prepareStatement(query);
            String vName = name.getText();
            int vId = Integer.parseInt(id.getText());
            int unitConsumed = Integer.parseInt(unit.getText());
            String connectionType = (String)box.getSelectedItem();
            int tBill;
            if(connectionType.equals("Domestic"))
            {
                tBill = (int)totalBill(false,unitConsumed);
            }
            else
            {
                tBill = (int)totalBill(true,unitConsumed );
            }
            st.setString(1,vName);
            st.setInt(2,vId);
            st.setInt(3,unitConsumed);
            st.setString(4,connectionType);
            st.setInt(5,tBill);
            
            int row = st.executeUpdate();
            if(row > 0)
            {
                System.out.println("Saved to dataBase successfully.");
            }else
            {
                System.out.println("Failed to save in database.");
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
            if(box.getSelectedItem().equals("Domestic"))
            {
                domesticBillCalculation();
            }else if(box.getSelectedItem().equals("Commercial"))
            {
                commercialBillCalculation();
            }
            databaseConnect();
        }else if(command.equals("Reset"))
        {
            name.setText("");
            id.setText("");
            unit.setText("");
            output.setText("");
            box.setSelectedIndex(0);
        }
    }
}
public class ElectricityBill {
    public static void main(String[] args) {
        new MyFrame();
    }
}
