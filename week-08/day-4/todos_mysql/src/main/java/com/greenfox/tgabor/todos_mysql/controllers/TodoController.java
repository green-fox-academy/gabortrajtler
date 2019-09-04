package com.greenfox.tgabor.todos_mysql.controllers;

import com.greenfox.tgabor.todos_mysql.model.dtos.NewAssigneeDTO;
import com.greenfox.tgabor.todos_mysql.model.dtos.NewTodoDTO;
import com.greenfox.tgabor.todos_mysql.model.entity.Todo;
import com.greenfox.tgabor.todos_mysql.repository.TodoRepository;
import com.greenfox.tgabor.todos_mysql.services.AssigneeService;
import com.greenfox.tgabor.todos_mysql.services.TodoService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.*;

@Controller
@RequestMapping({"/", "/todo"})
public class TodoController {
  private TodoService todoService;
  private AssigneeService assigneeService;

  @Autowired
  public TodoController(TodoService todoService, AssigneeService assigneeService) {
    this.todoService = todoService;
    this.assigneeService = assigneeService;
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

  @GetMapping("/addTodo")
  public String renderAddTodo(Model model) {
    model.addAttribute("newTodo", new NewTodoDTO());
    model.addAttribute("assignees", assigneeService.findAll());
    return "addTodo";
  }

  @PostMapping("/addTodo")
  public String addTodo(@ModelAttribute NewTodoDTO newTodoDTO) throws Exception {
    Todo savedTodo = todoService.save(newTodoDTO);
    return "redirect:/";
  }

  @PostMapping("/search")
  public String search(@RequestParam("searchtext") String searchText,
                       Model model) {
    model.addAttribute("todos", todoService.findAllByTitleOrDescriptionContains(searchText));
    return "todolist";
  }

  @GetMapping("/{id}/deleteTodo")
  public String delete(@PathVariable Long id) {
    todoService.delete(id);
    return "redirect:/";
  }

}
