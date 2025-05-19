import javax.swing.*;

import java.awt.Color;
import java.awt.event.*;
class MyFrame extends JFrame implements ActionListener
{   
    JButton button;
    MyFrame()
    {
        button = new JButton("Button1");
        button.setBounds(200 ,100 , 100 , 50);
        button.addActionListener(this);
        button.setFocusable(false);
        button.setHorizontalTextPosition(JButton.CENTER);
        button.setVerticalTextPosition(JButton.CENTER);
        button.setBackground(Color.red);

        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setLayout(null);
        this.setSize(500,500);
        this.setVisible(true); 
        //this.add(button);
        add(button);
    }
    public void actionPerformed(ActionEvent e)
    {
        if(e.getSource() == button)
        {
            System.out.println("wow!.");
        }
    }

}
public class JavaButtons {
    
    public static void main(String args[])
    {
        // JButton  = a button that performs an action when clicked on.
        new MyFrame();
    }
}
