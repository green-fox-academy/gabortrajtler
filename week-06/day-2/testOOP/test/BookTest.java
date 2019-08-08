import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.Test;

import static org.junit.jupiter.api.Assertions.*;

class BookTest {
    Book book1;

    @BeforeEach
    public void setup() {
        book1 = new Book();
    }

    @Test
    void countPages() {
        book1.add(new Page());
        book1.add(new Page("hello"));
        book1.add(new Page());
        assertEquals(2, book1.countBlankPages());
        assertEquals(3, book1.pages.size());
    }

}