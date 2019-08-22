package com.greenfox.tgabor.todos_mysql.controllers;

import com.greenfox.tgabor.todos_mysql.repository.TodoRepository;
import com.greenfox.tgabor.todos_mysql.services.TodoService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestParam;

@Controller
public class TodoController {
  private TodoService todoService;

  public TodoController(TodoService todoService) {
    this.todoService = todoService;
  }

  @RequestMapping({"/", "/todo"})
  public String list(Model model,
                     @RequestParam(value = "isActive", required = false) Boolean isActive) {
    if (isActive == null) {
      model.addAttribute("todos", todoService.findAll());
    } else if (isActive) {
      model.addAttribute("todos", todoService.findAllByDone(false));
    } else if (!isActive) {
      model.addAttribute("todos", todoService.findAllByDone(true));
    }
    return "todolist";
  }

}
