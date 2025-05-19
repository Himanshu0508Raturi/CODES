import javax.swing.*;
import java.awt.event.*;
import java.awt.*;
class MyFrame extends JFrame implements ActionListener
{	
	JRadioButton b1,b2,b3;
	MyFrame()
	{
		this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		this.setLayout(new FlowLayout());
		
		b1 = new JRadioButton("Pizza");
		b2 = new JRadioButton("Pepsi");
		b3 = new JRadioButton("Noodles");
		b1.setFocusable(false);
		b2.setFocusable(false);
		b3.setFocusable(false);
		
		ButtonGroup group = new ButtonGroup();
		group.add(b1);
		group.add(b2);
		group.add(b3);
		
        b1.addActionListener(this);
        b2.addActionListener(this);
        b3.addActionListener(this);
        
		this.add(b1);
		this.add(b2);
		this.add(b3);
		this.pack();
		this.setVisible(true);
		
	}
	public void actionPerformed(ActionEvent e)
	{
		if(e.getSource() == b1)
		{
			System.out.println("Pizza");
		}else if(e.getSource() == b2)
		{
			System.out.println("Pepsi");
		}else
		{
			System.out.println("Noodles");
		}
	}
}
public class JavaRadioButton
{
	public static void main(String args[])
	{
		// JRadioButton = one or more buttons in a grouping in which only 1 may be selected per group.
		new MyFrame();
	}
}