import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
class MyFrame extends JFrame implements KeyListener
{
    JLabel label;
    MyFrame()
    {
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setSize(500,500);
        this.setLayout(null);
        this.addKeyListener(this);
        label  = new JLabel();
        label.setBounds(0,0,100,100);
        label.setBackground(Color.red);
        label.setOpaque(true);
        this.add(label);
        this.setVisible(true);
    }
    public void keyTyped(KeyEvent e)
    {
        //Invoked when a key is typed. Uses KeyChar , Char output.
    }
    public void keyPressed(KeyEvent e)
    {
        //Invoked when a physical key is pressed down. Uses keyCode , int output.
    }
    public void keyReleased(KeyEvent e)
    {
        // called whenever a button is released.
        System.out.println("You released a key Char " + e.getKeyChar());
        System.out.println("You released a key code " + e.getKeyCode()); // ASCII code
    }
}
public class JavaKeyListener {
    public static void main(String[] args) {
        new MyFrame();
    }
}
