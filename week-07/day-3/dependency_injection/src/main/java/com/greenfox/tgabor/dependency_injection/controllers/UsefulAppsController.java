package com.greenfox.tgabor.dependency_injection.controllers;

import com.greenfox.tgabor.dependency_injection.services.UtilityService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.*;

// # Useful Utilities

// Create a controller with a few endpoints where the user can use the useful utilities.

// ## First steps
// - Have a main page at `/useful`
// - This should contain links to all available utilities detailed below

// Use this `UtilityService` as a dependency for your controller.

@Controller
public class UsefulAppsController {

    private UtilityService utilityService;
    private String bgColor;

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

}
