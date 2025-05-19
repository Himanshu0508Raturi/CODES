import javax.swing.*;
import java.awt.*;
public class JavaPanel {
    public static void main(String args[])
    {
        // JPanel = a GUI component that function as a container to hold other component.
        JLabel label = new JLabel("Test message.");

        JPanel redPanel = new JPanel();
        redPanel.setBackground(Color.red);
        redPanel.setBounds(0,0,250,250);

        JPanel bluePanel = new JPanel();
        bluePanel.setBackground(Color.blue);
        bluePanel.setBounds(250,0,250,250);

        JPanel greenPanel = new JPanel();
        greenPanel.setBackground(Color.green);
        greenPanel.setBounds(0,250,500,250);


        JFrame frame = new JFrame("JPanel");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setLayout(null); // use .setBounce() with this function.
        frame.setSize(700,700);
        frame.setVisible(true);
        frame.add(redPanel);
        frame.add(bluePanel);
        frame.add(greenPanel);  
        redPanel.add(label);

    }
}
