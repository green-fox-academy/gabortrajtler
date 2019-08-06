import java.util.ArrayList;
import java.util.List;

public class Book {
    List<Page> pages;

    private Book() {
        pages = new ArrayList<>();
    }

    private void add(Page page) {
        pages.add(page);
    }

    private int countBlankPages() {
        int counter = 0;
        for (Page page : pages) {
            if (page.getContent().isEmpty()) {
                counter++;
            }
        }
        return counter;
    }

    public static void main(String[] args) {
        Book book1 = new Book();
        book1.add(new Page());
        book1.add(new Page("hello"));
        book1.add(new Page());
        System.out.println(book1.countBlankPages());
        System.out.println(book1.pages.size());
    }
}