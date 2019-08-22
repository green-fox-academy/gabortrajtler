package com.greenfox.tgabor.todos_mysql.controllers;

import com.greenfox.tgabor.todos_mysql.model.dtos.NewTodoDTO;
import com.greenfox.tgabor.todos_mysql.model.entity.Todo;
import com.greenfox.tgabor.todos_mysql.repository.TodoRepository;
import com.greenfox.tgabor.todos_mysql.services.TodoService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.*;

@Controller
@RequestMapping({"/", "/todo"})
public class TodoController {
  private TodoService todoService;

  public TodoController(TodoService todoService) {
    this.todoService = todoService;
  }

  @RequestMapping("")
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

  @GetMapping("/add")
  public String renderAddTodo(Model model) {
    model.addAttribute("newTodo", new NewTodoDTO());
    return "add";
  }

  @PostMapping("/add")
  public String addTodo(@ModelAttribute NewTodoDTO newTodoDTO) {
    Todo savedTodo = todoService.save(newTodoDTO);
    return "redirect:/";
  }

  @GetMapping("/{id}/delete")
  public String delete(@PathVariable Long id) {
    todoService.delete(id);
    return "redirect:/";
  }

}
