//package CODES.Java.extra.CollectionFramework;
import java.util.*;
public class LearnStack {
    public static void main(String[] args) {
        Stack<String> st = new Stack<>();

        st.push("Lion");
        st.push("Tiger");
        st.push("Horse");
        st.push("Cat");

        System.out.println(st);
        System.out.println(st.peek()); // returns top element.Does'nt remove it.
        System.out.println(st);

        // pop operation.
        System.out.println(st.pop()); // return and removes the top of stack.
        System.out.println(st);
    }
}
