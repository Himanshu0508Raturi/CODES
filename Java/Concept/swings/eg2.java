// event Deligation Model.
import java.awt.*;
import java.awt.event.*;

import javax.swing.*;
class B extends JFrame implements ActionListener
{
    JTextField tf1, tf2 , tf3;
    public B()
    {
        tf1 = new JTextField(20);
        tf2 = new JTextField(20);
        tf3 = new JTextField(20);
        JLabel l1 = new JLabel("First name");
        JLabel l2 = new JLabel("Second name");
        JLabel l3 = new JLabel("Result");
        JButton b1 = new JButton("Concat");
        setLayout(new FlowLayout(FlowLayout.CENTER,30,10));
        add(l1);
        add(tf1);
        add(l2);
        add(tf2);
        add(l3);
        add(tf3);
        add(b1);
        b1.addActionListener(this);
    }
    public void actionPerformed(ActionEvent e)
    {
        tf3.setText(tf1.getText() + tf2.getText());
    }
    public static void main(String[] args) {
        B d = new B();
        d.setSize(300,400);
        d.setVisible(true);
    }
}
// public class eg2
// {
    
// }