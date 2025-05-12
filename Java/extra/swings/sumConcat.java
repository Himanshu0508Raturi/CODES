import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

class sumConcat extends JFrame implements ActionListener
{
    JTextField tf1 , tf2 , tf3;
    sumConcat()
    {
        tf1 = new JTextField(20);
        tf2 = new JTextField(20);
        tf3 = new JTextField(20);
        JLabel l1 = new JLabel("Enter First number");
        JLabel l2 = new JLabel("Enter second number");
        JLabel l3 = new JLabel("Sum of two number: ");
        JButton b1 = new JButton("+");
        JButton b2 = new JButton("-");
        setLayout(new FlowLayout(FlowLayout.CENTER,30,10));
        add(l1);
        add(tf1);
        add(l2);
        add(tf2);
        add(l3);
        add(tf3);
        add(b1);
        add(b2);
        b1.addActionListener(this);
        b2.addActionListener(this);
    }
    public void actionPerformed(ActionEvent e)
    {
        int n1 = Integer.parseInt(tf1.getText());
        int n2 = Integer.parseInt(tf2.getText());
        // source label = e.getActionCommand();
        String s = e.getActionCommand();
        int ans;
        if(s.equals("+"))
        {
            ans = n1 + n2;
        }else
        {
            if(n1>n2)
            ans = n1 - n2;
            else
            ans = n2 - n1;
        }
        tf3.setText(Integer.toString(ans));

        /*Object a = e.getSource();
        if(a == b1)
        {
            ans = n1 + n2;
        }else
        {
            if(n1>n2)
            ans = n1 - n2;
            else
            ans = n2 - n1;
        }
            for this code to be executable daclare b1 and b2 out of constructor.
        */
    }
    
    public static void main(String[] args) {
        sumConcat d = new sumConcat();
        d.setSize(300,400);
        d.setVisible(true);
    }
}