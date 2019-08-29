package com.greenfox.tgabor.foxclub.controllers;

import com.greenfox.tgabor.foxclub.models.dtos.NewFoxDTO;
import com.greenfox.tgabor.foxclub.models.dtos.NewTrickDTO;
import com.greenfox.tgabor.foxclub.models.entities.Fox;
import com.greenfox.tgabor.foxclub.models.entities.Trick;
import com.greenfox.tgabor.foxclub.services.FoxService;
import com.greenfox.tgabor.foxclub.services.TrickService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.ModelAttribute;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestParam;

@Controller
public class MainController {

  private TrickService trickService;
  private FoxService foxService;

  @Autowired
  public MainController(TrickService trickService, FoxService foxService) {
    this.trickService = trickService;
    this.foxService = foxService;
  }

  @GetMapping("/")
  public String information(Model model, @RequestParam(value = "name", required = false) String foxName) {
    if (foxName == null) {
      model.addAttribute("foxnotfound", false);
      return "login";
    } else if (foxName.equals("foxnotfound")) {
      model.addAttribute("foxnotfound", true);
      return "login";
    } else {
      try {
        Fox foxProfile = foxService.getFox(foxName);
        if (foxProfile == null) {
          throw new FoxNotFoundException();
        }
        model.addAttribute("foxProfile", foxService.getFox(foxName));
        model.addAttribute("foxnotfound", false);
        return "information";
      } catch (FoxNotFoundException exc) {   // foxProfile == null, with nicer error handling solution
        return "redirect:/?name=foxnotfound";
        /*throw new ResponseStatusException(
                HttpStatus.NOT_FOUND, "Fox Not Found", exc);*/
      }
    }
  }

  @GetMapping("/login")
  public String renderLogin() {
    return "login";
  }

  @PostMapping("/login")
  public String login(@RequestParam("login-name") String foxName) {
    return "redirect:/?name=" + foxName;
  }

  @GetMapping("/addfox")
  public String renderAddFox(Model model) {
    model.addAttribute("newFox", new NewFoxDTO());
    model.addAttribute("tricks", trickService.listAllTricks());
    return "add_fox";
  }

  @PostMapping("/addfox")
  public String addFox(@ModelAttribute NewFoxDTO newFox) {
    Fox savedFox = foxService.saveFox(newFox);
    return "redirect:/?name=" + savedFox.getName();
  }

  @GetMapping("/addtrick")
  public String renderAddTrick(Model model) {
    model.addAttribute("newTrick", new NewTrickDTO());
    model.addAttribute("tricks", trickService.listAllTricks());
    return "add_trick";
  }

  @PostMapping("/addtrick")
  public String addTrick(@ModelAttribute NewTrickDTO newTrick) {
    Trick savedTrick = trickService.saveTrick(newTrick);
    return "redirect:/addtrick";
  }

}
