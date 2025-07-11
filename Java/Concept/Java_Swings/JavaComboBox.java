import javax.swing.*;
import java.awt.event.*;
import java.awt.*;
class MyFrame extends JFrame implements ActionListener
{	
	JComboBox cb;
	MyFrame()
	{
		this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		this.setLayout(new FlowLayout());

		String[] animals = {"Dog", "cat" , "bird"}; // use wrapper classes instead of int write Integer[] arr = {};
		cb = new JComboBox<>(animals);
		cb.addActionListener(this);
		System.out.println(cb.getItemCount());
		cb.insertItemAt("Horse" , 0);// Insert "Horse" at the top
		cb.setSelectedIndex(0);
		cb.removeAll();

		this.add(cb);
		this.pack();
		this.setVisible(true);
		
	}
	public void actionPerformed(ActionEvent e)
	{
		if(e.getSource() == cb)
		{
			//System.out.println(cb.getSelectedItem());
			System.out.println(cb.getSelectedIndex());
		}
	}
}
public class JavaComboBox
{
	public static void main(String args[])
	{
		// JComboBox = a component that combines a button or editable field and a drop down list.
		new MyFrame();
	}
}