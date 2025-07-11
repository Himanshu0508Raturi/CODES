//package CODES.Java.extra.FileHandling;
import java.io.*;
public class CopyFile {
    public static void main(String args[]) throws IOException
    {
        BufferedWriter bw1 = new BufferedWriter(new FileWriter("source.txt"));
        // writing a string to source.txt.
        String s = "My name is Himanshu Raturi." + "\n I have a strong interest in AI/ML." + "\nI am in section A2.";
        bw1.write(s);
        bw1.close();

        BufferedReader br = new BufferedReader(new FileReader("source.txt"));

       
        

        BufferedWriter bw2 = new BufferedWriter(new FileWriter("dest.txt"));
        String line;
        while((line = br.readLine()) != null)
        {
            bw2.write(line);
            bw2.write("\n");
        }
        br.close();
        bw2.close();

    }
}
