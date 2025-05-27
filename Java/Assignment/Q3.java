//package CODES.Java.Assignment;

import java.io.*;
//import java.io.IOException;
import javax.imageio.ImageIO;
import java.awt.image.BufferedImage;

public class Q3 {
    public static void main(String[] args) {
        try {
            // 📥 Step 1: Read the image file
            File inputFile = new File("input.jpg");  // Input image path
            BufferedImage image = ImageIO.read(inputFile);
            System.out.println("Image read successfully.");

            // 📤 Step 2: Write the image to a new file
            File outputFile = new File("output.jpg");  // Output image path
            ImageIO.write(image, "jpg", outputFile);
            System.out.println("Image written successfully to output.jpg.");
            
        } catch (IOException e) {
            System.out.println("Error reading or writing image: " + e);
        }
    }
}
