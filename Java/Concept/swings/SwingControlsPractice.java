//package CODES.Java.extra.swings;

import java.awt.*;
import javax.swing.*;

class SwingControlsPractice extends JFrame {

  SwingControlsPractice() {
    JLabel l1 = new JLabel("Your Name");
    JTextField tf1 = new JTextField(20);
    JTextArea ta = new JTextArea(10, 50);
    JButton b1 = new JButton("Submit");

    String s[] = { "India", "USA", "UK" };

    JComboBox cb = new JComboBox(s);
    setLayout(new FlowLayout());

    JCheckBox cb1 = new JCheckBox(); // without Label
    JCheckBox cb2 = new JCheckBox("CSE"); // with Label and unselected
    JCheckBox cb3 = new JCheckBox("ECE", true); // with Label and selected

    JRadioButton r1 = new JRadioButton(); // without Label
    JRadioButton r2 = new JRadioButton("CSE"); // with Label and unselected
    JRadioButton r3 = new JRadioButton("ECE", true); // with Label and selected
    ButtonGroup bg = new ButtonGroup();
    bg.add(r1);
    bg.add(r2);
    bg.add(r3);
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
      { "101", "Sachin", "700000" },
    };
    String column[] = { "ID", "NAME", "SALARY" };
    JTable jt = new JTable(data, column);
    jt.setBounds(30, 40, 200, 300);
    JScrollPane sp = new JScrollPane(jt);

    add(l1);
    add(tf1);
    add(ta);
    add(b1);
    add(cb);
    add(cb1);
    add(cb2);
    add(cb3);
    add(r1);
    add(r2);
    add(r3);
    add(list);
    add(sb3);
    add(sp);
  }

  public static void main(String args[]) {
    SwingControlsPractice d = new SwingControlsPractice();
    d.setSize(300, 400);
    d.setVisible(true);
  }
}
