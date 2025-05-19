import javax.swing.*;
import java.awt.*;
public class JavaFlowLayout {
    public static void main(String[] args) {
        // FlowLayout = places components in a row , sized at their preferred size. if horizontal space is too small , the
        // flowlayout class uses the next available row.
        JFrame frame = new JFrame("abc");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(500,500);
        frame.setLayout(new FlowLayout());
        frame.setVisible(true);

        frame.add(new Button("1"));
        frame.add(new Button("2"));
        frame.add(new Button("3"));
        frame.add(new Button("4"));
        frame.add(new Button("5"));
        frame.add(new Button("6"));
        frame.add(new Button("7"));
        frame.add(new Button("8"));
        frame.add(new Button("9"));
        frame.add(new Button("10"));
        frame.add(new Button("11"));
        frame.add(new Button("12"));
        frame.add(new Button("13"));
        frame.add(new Button("14"));
        frame.add(new Button("15"));


    }
}
