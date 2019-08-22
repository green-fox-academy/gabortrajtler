package com.greenfox.tgabor.todos_embedded_h2_db.controllers;

import com.greenfox.tgabor.todos_embedded_h2_db.model.entity.Todo;
import com.greenfox.tgabor.todos_embedded_h2_db.repository.TodoRepository;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.RequestMapping;

@Controller
public class TodoController {
  TodoRepository todoRepository;

  @Autowired
  public TodoController(TodoRepository todoRepository) {
    this.todoRepository = todoRepository;
    todoRepository.save(new Todo("Start the day"));
    todoRepository.save(new Todo("Finish H2 workshop1"));
    todoRepository.save(new Todo("Finish Spring Data JPA workshop2"));
    todoRepository.save(new Todo("Create a CRUD project"));
  }

  @RequestMapping({"/", "/todo"})
  public String list(Model model) {
    model.addAttribute("todos", todoRepository.findAll());
    return "todolist";
  }

}
