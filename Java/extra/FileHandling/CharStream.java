//package CODES.Java.extra.FileHandling;
import java.io.*;

public class CharStream {
    public static void main(String args[]) throws IOException
    {
        String str = "This is an Institute" + "\n You are a student";
        //writing to char file
        FileWriter fw = new FileWriter("textfile.txt");
        for(int i = 0 ; i < str.length() ; i++)
        {
            fw.write(str.charAt(i));
        }
        fw.close();

        //reading from file.
        FileReader fr = new FileReader("textfile.txt");
        int ch;
        while((ch = fr.read()) != -1)
        {
            System.out.print((char)ch);
        }
        fr.close();
    }    
}
