import javax.swing.*;
import java.awt.*;

public class eg {
    public static void main(String[] args) {
        // Create the frame
        JFrame frame = new JFrame("Concatenate Names");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(400, 200);
        frame.setLayout(new GridLayout(4, 2));

        // Create components
        JLabel firstNameLabel = new JLabel("First Name:");
        JTextField firstNameField = new JTextField();
        JLabel secondNameLabel = new JLabel("Second Name:");
        JTextField secondNameField = new JTextField();
        JLabel resultLabel = new JLabel("Result:");
        JTextField resultField = new JTextField();
        resultField.setEditable(false);
        JButton concatButton = new JButton("Concat");

        // Use lambda expression instead of ActionListener
        concatButton.addActionListener(e -> 
            resultField.setText(firstNameField.getText() + " " + secondNameField.getText())
        );

        // Add components to the frame
        frame.add(firstNameLabel);
        frame.add(firstNameField);
        frame.add(secondNameLabel);
        frame.add(secondNameField);
        frame.add(resultLabel);
        frame.add(resultField);
        frame.add(new JLabel()); // Empty cell for spacing
        frame.add(concatButton);

        // Make the frame visible
        frame.setVisible(true);
    }
}
