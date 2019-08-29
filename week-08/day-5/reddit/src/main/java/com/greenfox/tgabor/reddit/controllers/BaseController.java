package com.greenfox.tgabor.reddit.controllers;

import com.greenfox.tgabor.reddit.model.dtos.NewRedditDTO;
import com.greenfox.tgabor.reddit.model.entity.Reddit;
import com.greenfox.tgabor.reddit.security.AuthenticationFacade;
import com.greenfox.tgabor.reddit.services.RedditService;
import org.springframework.data.domain.Page;
import org.springframework.security.authentication.AnonymousAuthenticationToken;
import org.springframework.security.core.Authentication;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.*;

import java.time.LocalDateTime;
import java.util.List;
import java.util.stream.Collectors;
import java.util.stream.IntStream;

@Controller
@RequestMapping({"/", "/reddit"})
public class BaseController {
  private RedditService redditService;
  private AuthenticationFacade authenticationFacade;

  public BaseController(RedditService redditService, AuthenticationFacade authenticationFacade) {
    this.redditService = redditService;
    this.authenticationFacade = authenticationFacade;
  }

  @RequestMapping("")
  public String redirect() {
    return "redirect:/pub/pages/1";
  }

  @RequestMapping("/reddit")
  public String redirect2() {
    return "redirect:/pub/pages/1";
  }

  @RequestMapping("/{context}/pages/{page}")
  public String listPages(Model model,
                          @PathVariable(value = "page", required = false) Integer pageIndex,
                          @PathVariable(value = "context", required = false) String context) {
    if (pageIndex == null || pageIndex == 0 || context == null) {
      return "redirect:/pub/pages/1";
    } else {
      if(context.equals("pub") || context.equals("user")) {
        Page<Reddit> redditPage = redditService.findAllPages(pageIndex - 1, 10, getUsername());
        model.addAttribute("reddits", redditPage.getContent());
        int totalPages = redditPage.getTotalPages();
        if (totalPages > 0) {
          List<Integer> pageNumbers = IntStream.rangeClosed(1, totalPages).boxed().collect(Collectors.toList());
          model.addAttribute("pageNumbers", pageNumbers);
        }
      }
      model.addAttribute("context", context);
    }
    return "redditlist";
  }

  @GetMapping("/{context}/voteup")
  public String voteUp(@PathVariable(value = "context") String context,
                       @RequestParam("id") Long id) {
    redditService.voteUp(id);
    return "redirect:/{context}/pages/1";
  }

  @GetMapping("/{context}/votedown")
  public String voteDown(@PathVariable(value = "context") String context,
                         @RequestParam("id") Long id) {
    redditService.voteDown(id);
    return "redirect:/{context}/pages/1";
  }

  @GetMapping("/{context}/submit")
  public String renderAddReddit(Model model,
                                @PathVariable(value = "context") String context) {
    model.addAttribute("newReddit", new NewRedditDTO());
    model.addAttribute("context", context);
    return "submit";
  }

  @PostMapping("/{context}/submit")
  public String submitReddit(@ModelAttribute NewRedditDTO newRedditDTO,
                             @PathVariable(value = "context") String context) {
    if(context.equals("pub")) {
      Reddit savedReddit = redditService.save(newRedditDTO, getUsername(), LocalDateTime.now());
    } else if (context.equals("user")) {
      Reddit savedReddit = redditService.save(newRedditDTO, getUsername(), LocalDateTime.now());
    }
    return "redirect:/{context}/pages/1";
  }

  @GetMapping("/{context}/{id}/delete")
  public String delete(@PathVariable Long id,
                       @PathVariable(value = "context") String context) {
    redditService.delete(id);
    return "redirect:/{context}/pages/1";
  }

  private String getUsername() {
    Authentication authentication = authenticationFacade.getAuthentication();
    //if (!(authentication instanceof AnonymousAuthenticationToken)) {
      return authentication.getName();
  }

}
