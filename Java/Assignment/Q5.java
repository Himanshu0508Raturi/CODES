//package CODES.Java.Assignment;

import java.io.*;
import java.util.*;

class FileProcessor {
    private List<String> words;

    public FileProcessor(String filename) throws IOException {
        words = new ArrayList<>();
        loadWords(filename);
    }

    private void loadWords(String filename) throws IOException {
        BufferedReader reader = new BufferedReader(new FileReader(filename));
        String line;

        while ((line = reader.readLine()) != null) {
            String[] lineWords = line.split("\\s+");
            for (String word : lineWords) {
                words.add(word.replaceAll("[^a-zA-Z]", "")); // Clean punctuation
            }
        }

        reader.close();
    }

    public synchronized void printPalindromes() {
        System.out.println("\n[Thread 1] Palindromes in the file:");
        for (String word : words) {
            if (!word.isEmpty() && isPalindrome(word)) {
                System.out.println(word);
            }
        }
    }

    public synchronized void printWordLengths() {
        System.out.println("\n[Thread 2] Word lengths:");
        for (String word : words) {
            if (!word.isEmpty()) {
                System.out.println(word + " -> " + word.length());
            }
        }
    }

    private boolean isPalindrome(String word) {
        word = word.toLowerCase();
        return word.equals(new StringBuilder(word).reverse().toString());
    }
}

class PalindromeThread extends Thread {
    private FileProcessor processor;

    public PalindromeThread(FileProcessor processor) {
        this.processor = processor;
    }

    public void run() {
        processor.printPalindromes();
    }
}

class WordLengthThread extends Thread {
    private FileProcessor processor;

    public WordLengthThread(FileProcessor processor) {
        this.processor = processor;
    }

    public void run() {
        processor.printWordLengths();
    }
}

public class Q5 {
    public static void main(String[] args) throws IOException, InterruptedException {
        // Prepare sample file
        String filename = "sample.txt";
        PrintWriter writer = new PrintWriter(filename);
        writer.println("madam racecar level apple banana civic rotor");
        writer.close();

        FileProcessor processor = new FileProcessor(filename);

        PalindromeThread pt = new PalindromeThread(processor);
        WordLengthThread wt = new WordLengthThread(processor);

        pt.start();
        pt.join();  // Ensure palindromes printed first

        wt.start();
        wt.join();  // Then print word lengths

        System.out.println("\nProcessing Complete.");
    }
}
