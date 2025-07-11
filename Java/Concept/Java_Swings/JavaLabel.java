import java.awt.*;

import javax.swing.*;
public class JavaLabel {
    public static void main(String[] args)
    {
        // JLabel = a GUI display area for a string of text , an image or both.
        JLabel label = new JLabel(); // create a label
        label.setText("Hello word."); // set text of label can also comes under constructor.

        ImageIcon image = new ImageIcon("logo.jpg");
        label.setIcon(image);
        label.setHorizontalTextPosition(JLabel.CENTER); // set text LEFT ,CENTER ,RIGHT of imageicon.
        label.setVerticalTextPosition(JLabel.TOP); // set text TOP , CENTER , BOTTOM of imageicon.
        label.setBackground(Color.CYAN); // set background color.
        label.setOpaque(true); // display background color.
        label.setVerticalAlignment(JLabel.CENTER); // set vertical position of icon + text within label.
        label.setHorizontalAlignment(JLabel.CENTER);// set horizontal position of icon + text within label.
        //label.setBounds(100,100,250,250);//set x , y within the frame as well as dimensions.

        JFrame frame = new JFrame();
        frame.setSize(420,420);
        frame.setDefaultCloseOperation(frame.EXIT_ON_CLOSE);
        frame.setVisible(true);
        //frame.setLayout(null);
        frame.add(label);
        frame.pack();// add all components then pack . pack() method resize the content of frame accordingly.
    }
}
