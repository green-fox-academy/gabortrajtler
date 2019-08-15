package com.greenfox.tgabor.dependency_injection.controllers;

import com.greenfox.tgabor.dependency_injection.services.UtilityService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.*;

// # Useful Utilities

@Controller
public class UsefulAppsController {

    @GetMapping(value = {"/", "/useful"})
    public String index(){
        return "index";
    }

    @GetMapping(value = "/useful/colored")
    public String colored(Model model, @Autowired UtilityService utilityService){
        model.addAttribute("bgColor", utilityService.randomColor());
        return "colored";
    }

    @RequestMapping(value = "/useful/email", method = {RequestMethod.GET, RequestMethod.POST})
    public String getEmailValidator(Model model, @RequestParam(name = "email") String emailAddr,
                                    @Autowired UtilityService utilityService){
            model.addAttribute("emailAddr", emailAddr);
            model.addAttribute("textColor", utilityService.validateEmail(emailAddr));
        return "email";
    }

    @GetMapping("/useful/caesar/{mode}")
    public String getCaesarForm(@PathVariable String mode) {
        return "caesar";
    }

    @RequestMapping(value = "/useful/caesar/{mode}", method = RequestMethod.POST)
    public String caesarEncode(Model model,
                               @PathVariable String mode,
                               @RequestParam(name = "text") String text,
                               @RequestParam(name = "number") Integer number,
                               @Autowired UtilityService utilityService){
        if (mode.equals("encode")) {
            model.addAttribute("caesarText", utilityService.caesar(text, number));
        } else if (mode.equals("decode")) {
            model.addAttribute("caesarText", utilityService.caesar(text, -number));
        }
        return "caesar";
    }
}
