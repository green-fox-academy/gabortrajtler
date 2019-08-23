package com.greenfox.tgabor.reddit.controllers;

import com.greenfox.tgabor.reddit.model.dtos.NewRedditDTO;
import com.greenfox.tgabor.reddit.model.entity.Reddit;
import com.greenfox.tgabor.reddit.services.RedditService;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.*;

@Controller
@RequestMapping({"/", "/reddit"})
public class RedditController {
  private RedditService redditService;

  public RedditController(RedditService redditService) {
    this.redditService = redditService;
  }

  @RequestMapping("")
  public String list(Model model,
                     @RequestParam(value = "isActive", required = false) Boolean isActive) {
    if (isActive == null) {
      model.addAttribute("reddits", redditService.findAll());
    }
    return "redditlist";
  }

  @GetMapping("/submit")
  public String renderAddReddit(Model model) {
    model.addAttribute("newReddit", new NewRedditDTO());
    return "submit";
  }

  @PostMapping("/submit")
  public String submitReddit(@ModelAttribute NewRedditDTO newRedditDTO) {
    Reddit savedReddit = redditService.save(newRedditDTO);
    return "redirect:/";
  }

  @GetMapping("/{id}/delete")
  public String delete(@PathVariable Long id) {
    redditService.delete(id);
    return "redirect:/";
  }

}
