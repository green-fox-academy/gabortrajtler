package com.greenfox.tgabor.reddit.controllers;

import com.greenfox.tgabor.reddit.services.RedditService;
import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;

@Controller
public class VoteController {

  private RedditService redditService;

  public VoteController(RedditService redditService) {
    this.redditService = redditService;
  }

  @GetMapping("/voteup")
  public String voteUp(@RequestParam("id") Long id) {
    redditService.voteUp(id);
    return "redirect:/reddit";
  }

  @GetMapping("/votedown")
  public String voteDown(@RequestParam("id") Long id) {
    redditService.voteDown(id);
    return "redirect:/reddit";
  }

}
