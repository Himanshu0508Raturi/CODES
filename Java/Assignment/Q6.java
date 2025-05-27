//package CODES.Java.Assignment;
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

class MyFrame extends JFrame implements ActionListener {
    // Declare components at class level
    JTextField nameField, idField, emailField, courseField, dobField, addressField;
    JComboBox<String> genderBox;
    JTextArea outputArea;

    MyFrame() {
        // Frame settings
        setTitle("University Student Registration");
        setSize(500, 600);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLayout(new BorderLayout());

        // Panel for inputs
        JPanel panel = new JPanel(new GridLayout(8, 2, 10, 10));
        panel.setBorder(BorderFactory.createEmptyBorder(20, 20, 20, 20));

        // Initialize form components
        nameField = new JTextField();
        idField = new JTextField();
        emailField = new JTextField();
        String[] genders = {"Male", "Female", "Other"};
        genderBox = new JComboBox<>(genders);
        courseField = new JTextField();
        dobField = new JTextField("dd-mm-yyyy");
        addressField = new JTextField();

        // Add components to panel
        panel.add(new JLabel("Full Name:")); panel.add(nameField);
        panel.add(new JLabel("Student ID:")); panel.add(idField);
        panel.add(new JLabel("Email:")); panel.add(emailField);
        panel.add(new JLabel("Gender:")); panel.add(genderBox);
        panel.add(new JLabel("Course:")); panel.add(courseField);
        panel.add(new JLabel("Date of Birth:")); panel.add(dobField);
        panel.add(new JLabel("Address:")); panel.add(addressField);

        // Submit button
        JButton submitBtn = new JButton("Submit");
        submitBtn.addActionListener(this); // Attach listener

        panel.add(new JLabel()); // Empty cell
        panel.add(submitBtn);

        // Output area
        outputArea = new JTextArea();
        outputArea.setEditable(false);
        JScrollPane scrollPane = new JScrollPane(outputArea);

        // Add to frame
        this.add(panel, BorderLayout.NORTH);
        this.add(scrollPane, BorderLayout.CENTER);

        this.setVisible(true);
    }

    public void actionPerformed(ActionEvent e) {
        StringBuilder sb = new StringBuilder();
        sb.append("Student Registration Details:\n");
        sb.append("Name: ").append(nameField.getText()).append("\n");
        sb.append("ID: ").append(idField.getText()).append("\n");
        sb.append("Email: ").append(emailField.getText()).append("\n");
        sb.append("Gender: ").append(genderBox.getSelectedItem()).append("\n");
        sb.append("Course: ").append(courseField.getText()).append("\n");
        sb.append("DOB: ").append(dobField.getText()).append("\n");
        sb.append("Address: ").append(addressField.getText()).append("\n");

        outputArea.setText(sb.toString());
    }
}

public class Q6 {
    public static void main(String[] args) {
        new MyFrame();
    }
}
