import java.awt.*;
import javax.swing.*;

class SwingControl extends JFrame {
    SwingControl() {
        setTitle("Swing Components Demo");
        setLayout(new FlowLayout());

        JLabel l1 = new JLabel("Your Name: ");
        JTextField jtf1 = new JTextField(20);
        JTextArea jta1 = new JTextArea(10, 50);
        JButton jb1 = new JButton("Submit");

        String s[] = {"India", "USA", "UK"};
        JComboBox<String> cb = new JComboBox<>(s);

        JCheckBox cb1 = new JCheckBox();
        JCheckBox cb2 = new JCheckBox("CSE");
        JCheckBox cb3 = new JCheckBox("ECE",true);

        JRadioButton rb1 = new JRadioButton();
        JRadioButton rb2 = new JRadioButton("CSE");
        JRadioButton rb3 = new JRadioButton("ECE", true);

        ButtonGroup bg = new ButtonGroup();
        bg.add(rb1);
        bg.add(rb2);
        bg.add(rb3);

        DefaultListModel<String> dl = new DefaultListModel<>();
        dl.addElement("Item1");
        dl.addElement("Item2");
        dl.addElement("Item3");
        dl.addElement("Item4");
        JList<String> list = new JList<>(dl);

        JScrollBar sb3 = new JScrollBar(JScrollBar.HORIZONTAL, 50, 15, 1, 150);

        String data[][] = {
            { "101", "Amit", "670000" },
            { "102", "Jai", "780000" },
        };
        String column[] = {"ID", "Name", "Salary"};
        JTable jt = new JTable(data, column);
        JScrollPane sp = new JScrollPane(jt);

        // Add components
        add(l1);
        add(jtf1);
        add(jta1);
        add(cb);
        add(cb1);
        add(cb2);
        add(cb3);
        add(rb1);
        add(rb2);
        add(rb3);
        add(list);
        add(sb3);
        add(sp);
        add(jb1);

        // Frame settings
        setSize(700, 600);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setVisible(true);
    }
}

public class Swing1 {
    public static void main(String[] args) {
        new SwingControl();
        
    }
}
