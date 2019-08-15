package com.greenfox.tgabor.foxclub.controllers;

import com.greenfox.tgabor.foxclub.models.dtos.NewFoxDTO;
import com.greenfox.tgabor.foxclub.services.LoginService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.ModelAttribute;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestParam;

@Controller
public class MainController {

  private LoginService loginService;

  @Autowired
  public MainController(LoginService loginService) {
    this.loginService = loginService;
  }

  @GetMapping("/")
  public String index() {
    return "index";
  }

  @GetMapping("/login")
  public String renderLogin(Model model) {
    model.addAttribute("newFox", new NewFoxDTO());
    model.addAttribute("tricks", loginService.listAllTricks());
    return "login";
  }

  @PostMapping("/login")
  public String login(@RequestParam("foxName") String loginName) {
    return "redirect:/?name=" + loginName;
  }
  
}
