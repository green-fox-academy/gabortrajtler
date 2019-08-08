import java.util.ArrayList;
import java.util.List;

public class Book {
    List<Page> pages;

    Book() {
        pages = new ArrayList<>();
    }

    void add(Page page) {
        pages.add(page);
    }

    int countBlankPages() {
        int counter = 0;
        for (Page page : pages) {
            if (page.getContent().isEmpty()) {
                counter++;
            }
        }
        return counter;
    }

    public static void main(String[] args) {

    }
}