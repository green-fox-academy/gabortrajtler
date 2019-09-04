package com.greenfox.tgabor.todos_mysql.controllers;

import com.greenfox.tgabor.todos_mysql.model.dtos.EditAssigneeDTO;
import com.greenfox.tgabor.todos_mysql.model.dtos.NewAssigneeDTO;
import com.greenfox.tgabor.todos_mysql.services.AssigneeService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.ModelAttribute;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.PostMapping;

@Controller
public class AssigneeController {
  private AssigneeService assigneeService;

  @Autowired
  public AssigneeController(AssigneeService assigneeService) {
    this.assigneeService = assigneeService;
  }

  @GetMapping("/assignees")
  public String renderAssignees(Model model) {
    model.addAttribute("assignees", assigneeService.findAll());
    return "assigneelist";
  }

  @GetMapping("/addAssignee")
  public String renderAddAssignee(Model model) {
    model.addAttribute("newAssignee", new NewAssigneeDTO());
    return "addAssignee";
  }

  @PostMapping("/addAssignee")
  public String addAssignee(@ModelAttribute NewAssigneeDTO newAssigneeDTO) {
    assigneeService.save(newAssigneeDTO);
    return "redirect:/assignees";
  }

  @GetMapping("/{id}/deleteAssignee")
  public String delete(@PathVariable Long id) {
    assigneeService.delete(id);
    return "redirect:/assignees";
  }

  @GetMapping("/{id}/editAssignee")
  public String renderEditAssignee(@PathVariable Long id,
                           Model model) {
    try {
      model.addAttribute("assignee", assigneeService.findById(id));
      return "editAssignee";
    } catch (Exception e) {
      return "redirect:/";
    }
  }

  @PostMapping("/editAssignee")
  public String editAssignee(@ModelAttribute EditAssigneeDTO editAssigneeDTO) {
    try {
      assigneeService.update(editAssigneeDTO);
      return "redirect:/assignees";
    } catch (Exception e) {
      return "redirect:/";
    }
  }
}
