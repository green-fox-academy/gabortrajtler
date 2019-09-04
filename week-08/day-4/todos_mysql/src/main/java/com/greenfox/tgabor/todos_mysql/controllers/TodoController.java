package com.greenfox.tgabor.todos_mysql.controllers;

import com.greenfox.tgabor.todos_mysql.model.dtos.EditTodoDTO;
import com.greenfox.tgabor.todos_mysql.model.dtos.NewTodoDTO;
import com.greenfox.tgabor.todos_mysql.model.entity.Todo;
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
                     @RequestParam(value = "isActive", required = false) Boolean isActive,
                     @RequestParam(value = "assignee", required = false) Long assigneeId) throws Exception {
    if (assigneeId == null) {
      if (isActive == null) {
        model.addAttribute("todos", todoService.findAll());
      } else if (isActive) {
        model.addAttribute("todos", todoService.findAllByDone(false));
      } else {
        model.addAttribute("todos", todoService.findAllByDone(true));
      }
    } else {
      if (isActive == null) {
        model.addAttribute("todos", todoService.findByAssignee(assigneeService.findById(assigneeId)));
      } else if (isActive) {
        model.addAttribute("todos", todoService.findByAssigneeAndDone(assigneeService.findById(assigneeId), false));
      } else {
        model.addAttribute("todos", todoService.findByAssigneeAndDone(assigneeService.findById(assigneeId),true));
      }
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

  @GetMapping("/{id}/editTodo")
  public String renderEditTodo(@PathVariable Long id,
                                   Model model) {
    try {
      model.addAttribute("todo", todoService.findById(id));
      model.addAttribute("assignees", assigneeService.findAll());
      return "editTodo";
    } catch (Exception e) {
      return "redirect:/";
    }
  }

  @PostMapping("/editTodo")
  public String editTodo(@ModelAttribute EditTodoDTO editTodoDTO) {
    try {
      todoService.update(editTodoDTO);
      return "redirect:/";
    } catch (Exception e) {
      System.out.println(e);
      return "redirect:/";
    }
  }

  @GetMapping("/{id}/deleteTodo")
  public String delete(@PathVariable Long id) {
    todoService.delete(id);
    return "redirect:/";
  }

}
