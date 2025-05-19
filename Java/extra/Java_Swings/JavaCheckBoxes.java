import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
class MyFrame extends JFrame implements ActionListener
{   
    JCheckBox cb;
    JButton b;
    MyFrame()
    {
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setLayout(new FlowLayout());

        cb = new JCheckBox();
        cb.setText("I am not a robot.");
        cb.setFocusable(false);
        cb.setFont(new Font("Consolas", Font.PLAIN ,20));

        b = new JButton("Submit.");
        b.addActionListener(this);

        this.add(b);
        this.add(cb);
        this.pack();
        this.setVisible(true);
    }
    public void actionPerformed(ActionEvent e)
    {
        if(e.getSource() == b)
        {
            System.out.println(cb.isSelected());
        }
    }
}
public class JavaCheckBoxes {
    public static void main(String[] args)
    {
        // JCheckBox = a GUI component that can be selected or deselected.
        new MyFrame();    
    }
}
