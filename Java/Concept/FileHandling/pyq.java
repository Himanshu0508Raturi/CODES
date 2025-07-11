import java.io.*;
public class pyq {
    public static void main(String[] args) throws FileNotFoundException , IOException
    {
        FileInputStream fis = new FileInputStream("read_From_File");
        int ch;
        FileOutputStream fos = new FileOutputStream("write_To_File");
        while((ch = fis.read()) != -1)
        {
            fos.write((char)ch);
        }
        fos.close();
        fis.close();

    }
}
