import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
class MyFrame extends JFrame implements ActionListener
{
    JTextField tf;
    JButton b;
    MyFrame()
    {
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setLayout(new FlowLayout());

        b = new JButton("Submit");
        b.setSize(100,50);
        b.addActionListener(this);
        tf = new JTextField();
        tf.setPreferredSize(new Dimension(250,40)); // use this function before pack function.
        tf.setFont(new Font("Times New Roman", Font.PLAIN ,35));
        tf.setForeground(Color.cyan);
        tf.setBackground(Color.BLACK);
        tf.setText("Username");


        this.add(tf);
        this.add(b);
        this.pack();
        this.setVisible(true);


    }

    public void actionPerformed(ActionEvent e)
    {
        if(e.getSource() == b)
        {
            System.out.println(tf.getText());
        }
    }
}
public class JavaTextField {
    public static void main(String[] args)
    {
        // JTextField: A gui textbox component that can be used to add , set or get text.
        MyFrame frame = new MyFrame();
    }
    
}
