//package CODES.Java.extra.Java_Swings;
import javax.swing.*;
public class HelloWordSwing {
    public static void main(String[] args)
    {
        JFrame frame = new JFrame("Hello word Swing.");
        JLabel label = new JLabel("Hello, Swing GUI!",JLabel.CENTER);
        frame.setSize(300,200);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.add(label);
        frame.setVisible(true);     
    }
}
