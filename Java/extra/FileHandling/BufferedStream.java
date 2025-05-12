//package CODES.Java.extra.FileHandling;
import java.io.*;
public class BufferedStream {
    public static void main(String args[]) throws IOException , FileNotFoundException
    {
        FileWriter fw = new FileWriter("buffered.txt"); // writer first as it creates the file if not available.
        FileReader fr = new FileReader("buffered.txt");
        

        BufferedReader br = new BufferedReader(fr);
        BufferedWriter bw = new BufferedWriter(fw);

        //writing to a file linewise.
        String s = "Java is powerful.\nFile handling is essential.\nStreams are useful.";
        bw.write(s);
        bw.close();
        fw.close();

        // reading from file linewise
        String line;
        while((line = br.readLine()) != null)
        {
            System.out.println(line); 
        }
        br.close();
        fr.close();
    }
}
