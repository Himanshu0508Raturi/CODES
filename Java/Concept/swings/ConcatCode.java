import javax.swing.*;
import java.awt.*;
class ConcatString extends JFrame
{
    public ConcatString()
    {
        setLayout(new GridLayout(3, 2, 5, 5));
        JLabel firstname = new JLabel("First Name");
        JTextField t1 = new JTextField(20);
        JLabel lastname = new JLabel("Last Name");
        JTextField t2 = new JTextField(20);
        JLabel result = new JLabel("Result");
        JTextField resultField = new JTextField(20);
        resultField.setEditable(false);
        add(firstname);
        add(t1);
        add(lastname);
        add(t2);
        add(result);
        add(resultField);


    }
}
public class ConcatCode {
    public static void main(String[] args) {
        ConcatString obj = new ConcatString();
        obj.setVisible(true);
    }
}
