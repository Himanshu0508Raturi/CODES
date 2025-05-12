//package CODES.Java.Himanshu_Raturi;
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

class Q24 extends JFrame implements ActionListener
{
    JTextField tf1 , tf2;
    Q24()
    {
        tf1 = new JTextField(20);
        tf2 = new JTextField(20);
        JLabel l1 = new JLabel("Enter String");
        JLabel l2 = new JLabel("Result");
        JButton b1 = new JButton("CountVowel");
        JButton b2 = new JButton("Reset");
        JButton b3 = new JButton("Exit");
        setLayout(new FlowLayout(FlowLayout.CENTER,30,10));
        add(l1);
        add(tf1);
        add(l2);
        add(tf2);
        add(b1);
        add(b2);
        add(b3);
        b1.addActionListener(this);
        b2.addActionListener(this);
        b3.addActionListener(this);
    }
    public void actionPerformed(ActionEvent e)
    {
        String s = tf1.getText();
        int l = s.length();
        int vCount = 0;
        for(int i = 0 ; i < l ; i++)
        {
            char x = s.charAt(i);
            if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
            {
                vCount++;
            }
        }
        // source label = e.getActionCommand();
        String a = e.getActionCommand();
        if(a.equals("CountVowel"))
        {
            tf2.setText(Integer.toString(vCount));
        }else if(a.equals("Reset"))
        {
            tf1.setText("");
            tf2.setText("");
        }else
        {
            System.exit(0);;
        }
        //tf3.setText(Integer.toString(ans));

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
        Q24 d = new Q24();
        d.setSize(300,400);
        d.setVisible(true);
    }
}
