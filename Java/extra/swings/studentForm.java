import javax.swing.*;
import java.awt.*;



public class studentForm extends JFrame {
    studentForm(){

        JLabel l1 = new JLabel("Name");
        JTextField l2 = new JTextField(20);
        JLabel l3 = new JLabel("Roll No-");
        JTextField l4 = new JTextField(20);
        JLabel l5 = new JLabel("Address");
        JTextField l6 = new JTextField(20);


        JLabel l7 = new JLabel("City-");
        JComboBox cb1 = new JComboBox();
        cb1.addItem("DDun");
        cb1.addItem("Haldwani");
        cb1.addItem("Delhi");


        JLabel l8 = new JLabel("Course-");
        JComboBox cb2 = new JComboBox();
        cb2.addItem("B.Tech");
        cb2.addItem("M.Tech");
        cb2.addItem("BSc");


        JLabel l9 = new JLabel("Section-");
        JComboBox cb3 = new JComboBox();
        cb3.addItem("A1");
        cb3.addItem("A2");
        cb3.addItem("B1");
        cb3.addItem("B2");


        JButton b1 = new JButton("Submit");

        // setLayout(new FlowLayout(FlowLayout.LEFT,50,10));       // Default gap is of 5 units
        setLayout(new GridLayout(10,50));       
        // border layout.

        add(l1);
        add(l2);
        add(l3);
        add(l4);
        add(l5);
        add(l6);
        add(l7);
        add(cb1);
        add(l8);
        add(cb2);
        add(l9);
        add(cb3);
        add(b1);
       
    }

    public static void main(String args[]){
        studentForm f = new studentForm();
        f.setSize(300,400);
        f.setVisible(true);
    }
}