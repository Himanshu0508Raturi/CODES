// method 1.
import java.awt.Color;

import javax.swing.*;
public class JavaFrameM1 {
    public static void main(String args[])
    {
        JFrame frame = new JFrame("JFrame title goes here.");//creates a frame
        //frame.setTitle("XYZ"); // sets title of frame.
        frame.setSize(420,420); //sets x-dim and y-dim of frame
        frame.setVisible(true);// makes frame visible.
        frame.setResizable(false); // prevent frame from being resized.
        frame.setDefaultCloseOperation(frame.EXIT_ON_CLOSE);// exit out of application.

        ImageIcon image = new ImageIcon("logo.jpg");
        frame.setIconImage(image.getImage()); // change icon of frame.

        frame.getContentPane().setBackground(Color.black); // change color of background.
    }
}
