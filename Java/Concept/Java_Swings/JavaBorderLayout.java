import javax.swing.*;
import java.awt.*;

public class JavaBorderLayout {
    public static void main(String args[])
    {
        // Border Layout: a border layout places components in 5 areas : NORTH , SOUTH , EAST , WEST , CENTER.
        JFrame frame = new JFrame("abc");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(500,500);
        frame.setLayout(new BorderLayout()); // main line
        frame.setVisible(true);
        
        JPanel p1 = new JPanel();
        JPanel p2 = new JPanel();
        JPanel p3 = new JPanel();
        JPanel p4 = new JPanel();
        JPanel p5 = new JPanel();

        p1.setBackground(Color.red);
        p2.setBackground(Color.blue);
        p3.setBackground(Color.cyan);
        p4.setBackground(Color.green);
        p5.setBackground(Color.yellow);

        p1.setPreferredSize(new Dimension(100,100));
        p2.setPreferredSize(new Dimension(100,100));
        p3.setPreferredSize(new Dimension(100,100));
        p4.setPreferredSize(new Dimension(100,100));
        p5.setPreferredSize(new Dimension(100,100));

        frame.add(p1 , BorderLayout.NORTH);
        frame.add(p2 , BorderLayout.SOUTH);
        frame.add(p3 , BorderLayout.EAST);
        frame.add(p4 , BorderLayout.WEST);
        frame.add(p5 , BorderLayout.CENTER);
    }
}
