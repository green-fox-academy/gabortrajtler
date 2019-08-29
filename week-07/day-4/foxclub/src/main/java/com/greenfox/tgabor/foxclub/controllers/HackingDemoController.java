package com.greenfox.tgabor.foxclub.controllers;

import com.greenfox.tgabor.foxclub.models.dtos.NewTrickDTO;
import com.greenfox.tgabor.foxclub.models.entities.Trick;
import com.greenfox.tgabor.foxclub.services.TrickService;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.ModelAttribute;
import org.springframework.web.bind.annotation.PostMapping;

@Controller
public class HackingDemoController {
  private TrickService trickService;

  public HackingDemoController(TrickService trickService) {
    this.trickService = trickService;
  }

  @GetMapping("/addmoney")
  public String renderAddMoney (Model model){
    model.addAttribute("newTrick", new NewTrickDTO());
    model.addAttribute("tricks", trickService.listAllTricks());
    return "add_money";
  }

  @PostMapping("/addmoney")
  public String addMoney (@ModelAttribute NewTrickDTO newTrick){
    Trick savedTrick = trickService.saveTrick(newTrick);
    return "redirect:/addmoney";
  }

  @GetMapping("/nicepictures")
  public String renderNicepictures (Model model){
    model.addAttribute("newTrick", new NewTrickDTO());
    model.addAttribute("tricks", trickService.listAllTricks());
    return "nicepictures";
  }

  @PostMapping("/nicepictures")
  public String nicepictures (@ModelAttribute NewTrickDTO newTrick){
    Trick savedTrick = trickService.saveTrick(newTrick);
    return "redirect:/nicepictures";
  }
}
