package com.greenfox.tgabor.library.example.controllers;

import com.greenfox.tgabor.library.example.models.Book;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.*;

import java.util.ArrayList;
import java.util.List;
import java.util.stream.Collectors;

@Controller
public class BookController {

    private List<Book> books = new ArrayList<>();

    public BookController() {
        books.add(new Book("Cat's Cradle", "Kurt Vonnegut", 1963));
        books.add(new Book("Do Androids Dream of Electric Sheep?", "Philip K. Dick", 1968));
    }

    private List<Book> filterBooksByAuthor(String author) {
        return books.stream()
                .filter(book -> book.getAuthor().equals(author))
                .collect(Collectors.toList());
    }

    @RequestMapping(path = "/books", method = RequestMethod.GET)
    public String showBooks(Model model, @RequestParam(name = "author", required = false) String author) {

        List<Book> queriedBooks;

        if (author != null) {
            queriedBooks = filterBooksByAuthor(author);
        } else {
            queriedBooks = books;
        }

        model.addAttribute("books", queriedBooks);
        return "index";
    }

    @RequestMapping(path = "/books/{id}/details", method = RequestMethod.GET)
    public String getBookById(Model model, @PathVariable(name = "id") Integer id) {
        Book bookById = null;

        for (Book book : books) {
            if (book.getId() == id) {
                bookById = book;
            }
        }

        if (bookById != null) {
            model.addAttribute("book", bookById);
        } else {
            model.addAttribute("error", "No book found");
        }

        return "details";
    }

    @RequestMapping(path = "/books/add", method = RequestMethod.GET)
    public String addBookForm(Model model, @ModelAttribute(name = "book") Book book) {
        model.addAttribute("book", book);
        return "create";
    }

    @RequestMapping(path = "/books/add", method = RequestMethod.POST)
    public String addBook(@ModelAttribute(name="book") Book book) {
        books.add(book);
        return "redirect:/books";
    }

}