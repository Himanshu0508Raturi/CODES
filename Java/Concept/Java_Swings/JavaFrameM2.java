import javax.swing.*;
import java.awt.*;
public class JavaFrameM2 extends JFrame {
    JavaFrameM2()
    {
        
        this.setTitle("XYZ"); // sets title of frame.
        this.setSize(420,420); //sets x-dim and y-dim of frame
        this.setVisible(true);// makes frame visible.
        this.setResizable(false); // prevent frame from being resized.
        this.setDefaultCloseOperation(this.EXIT_ON_CLOSE);// exit out of application.

        ImageIcon image = new ImageIcon("logo.jpg");
        this.setIconImage(image.getImage()); // change icon of frame.

        this.getContentPane().setBackground(Color.black); // change color of background.
    }
    public static void main(String[] args) {
        new JavaFrameM2();
    }
}
