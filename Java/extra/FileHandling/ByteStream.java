//package CODES.Java.extra.FileHandling;
import java.io.*;
public class ByteStream {
    public static void main(String[] args) throws FileNotFoundException , IOException
    {
        String content = "Java File Handling Byte Stream Example.";

        // writing to a file.
        FileOutputStream fos = new FileOutputStream("byte_file.txt");
        fos.write(content.getBytes());
        fos.close();

        // reading character by character.
        FileInputStream fis = new FileInputStream("byte_file.txt");
        int ch;
        System.out.println("Reading By Character.");
        while((ch = fis.read()) != -1)
        {
            System.out.print((char)ch);
        }
        fis.close();
    }
}
