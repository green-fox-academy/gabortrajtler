package com.greenfox.tgabor.reddit.controllers;

import com.greenfox.tgabor.reddit.model.dtos.NewRedditDTO;
import com.greenfox.tgabor.reddit.model.entity.Reddit;
import com.greenfox.tgabor.reddit.services.RedditService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.data.domain.Page;
import org.springframework.data.domain.PageRequest;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.*;

import java.time.LocalDateTime;
import java.util.Date;
import java.util.List;
import java.util.stream.Collectors;
import java.util.stream.IntStream;

@Controller
@RequestMapping({"/", "/reddit"})
public class BaseController {
  private RedditService redditService;

  @Autowired
  public BaseController(RedditService redditService) {
    this.redditService = redditService;
  }

  @RequestMapping("")
  public String list() {
    return "redirect:/pub/pages/1";
  }

  @RequestMapping("/pub/pages/{page}")
  public String listPages(Model model, @PathVariable(value = "page", required = false) Integer pageIndex) {
    if (pageIndex == null || pageIndex == 0) {
      return "redirect:/pub/pages/1";
    } else {
      Page<Reddit> redditPage = redditService.findAllPages(pageIndex - 1, 10);
      model.addAttribute("reddits", redditPage.getContent());
      int totalPages = redditPage.getTotalPages();
      if (totalPages > 0) {
        List<Integer> pageNumbers = IntStream.rangeClosed(1, totalPages).boxed().collect(Collectors.toList());
        model.addAttribute("pageNumbers", pageNumbers);
      }
    }
    return "redditlist";
  }

  @GetMapping("/pub/submit")
  public String renderAddReddit(Model model) {
    model.addAttribute("newReddit", new NewRedditDTO());
    return "submit";
  }

  @PostMapping("/pub/submit")
  public String submitReddit(@ModelAttribute NewRedditDTO newRedditDTO) {
    Reddit savedReddit = redditService.save(newRedditDTO, LocalDateTime.now());
    return "redirect:/";
  }

  @GetMapping("/pub/{id}/delete")
  public String delete(@PathVariable Long id) {
    redditService.delete(id);
    return "redirect:/";
  }

}
