import javax.swing.*;
import java.awt.*;
public class JavaGridLayout {
    public static void main(String[] args)
    {
        // Grid Layout = places components in a grid of cells.
        // each components takes all the available space within the cell, and each cell if of same size.
        JFrame frame = new JFrame("abc");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(500,500);
        frame.setLayout(new GridLayout(3,3 ,10,10));// parameters are rows , columns , horizontal marging and vertical marging..
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
