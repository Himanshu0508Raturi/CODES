package CODES.Java.extra.Question;
class Book
{
    String title , author;
    int isbn;
    Book()
    {

    }
    Book(String title , String author , int isbn)
    {
        this.author = author;
        this.isbn = isbn;
        this.title = title;
    }
    void displayBookInfo()
    {
        System.out.println("Title: " + title);
        System.out.println("Author: " + author);
        System.out.println("ISBN: " + isbn);
    }
}
interface LibraryOperations
{
    void addBook(String title , String authorname, int isbn);
    void listBook(String authorname);
    void searchBook(String authorname);
}
class Library implements LibraryOperations
{
    String name , address;
    Book books[] = new Book[5];
    int count = 0;
    public void addBook(String title , String authorname, int isbn)
    {
        if(count > books.length)
        {
            System.out.println("Library is full. Cannot add more books.");
            return;
        }
        books[count] = new Book(title, authorname, isbn);
        count++;
    }
    public void listBook(String authorname)
    {
        boolean found = false;
        System.out.println("Book By Author "+ authorname + ":");
        for(int i = 0 ; i < count ; i++)
        {
            if(books[i].author.equals(authorname))
            {
                books[i].displayBookInfo();
                found = true;
            }
        }
        if(!found)
        {
            System.out.println("No book by author " + authorname + "exist.");
        }
    }
    public void searchBook(String authorname)
    {
        for(int i = 0 ; i < count ; i++)
        {
            if(books[i].author.equals(authorname))
            {
                books[i].displayBookInfo();
                return;
            }
        }
        System.out.println("No book found by author " + authorname);
    }
}
public class midq
{
    public static void main(String args[])
    {
        Library obj = new Library();
        obj.addBook("The Alchemist", "Paulo Coelho", 1111);
        obj.addBook("Brida", "Paulo Coelho", 2222);
        obj.addBook("1984", "George Orwell", 3333);

        obj.listBook("Paulo Coelho");
        obj.searchBook("George Orwell");
    }
}