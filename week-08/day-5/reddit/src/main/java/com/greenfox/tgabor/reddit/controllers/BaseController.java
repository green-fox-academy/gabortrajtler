package com.greenfox.tgabor.reddit.controllers;

import com.greenfox.tgabor.reddit.model.dtos.NewRedditDTO;
import com.greenfox.tgabor.reddit.model.entity.Reddit;
import com.greenfox.tgabor.reddit.services.RedditService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.*;

import java.time.LocalDateTime;
import java.util.Date;

@Controller
@RequestMapping({"/", "/reddit"})
public class BaseController {
  private RedditService redditService;

  @Autowired
  public BaseController(RedditService redditService) {
    this.redditService = redditService;
  }

  @RequestMapping("")
  public String list(Model model) {
    model.addAttribute("reddits", redditService.findAll());
    return "redditlist";
  }

  @GetMapping("/submit")
  public String renderAddReddit(Model model) {
    model.addAttribute("newReddit", new NewRedditDTO());
    return "submit";
  }

  @PostMapping("/submit")
  public String submitReddit(@ModelAttribute NewRedditDTO newRedditDTO) {
    Reddit savedReddit = redditService.save(newRedditDTO, LocalDateTime.now());
    return "redirect:/";
  }

  @GetMapping("/{id}/delete")
  public String delete(@PathVariable Long id) {
    redditService.delete(id);
    return "redirect:/";
  }

}
