package com.greenfoxacademy.springstart.controllers;

import com.greenfoxacademy.springstart.Greeting;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestParam;

import java.util.List;
import java.util.concurrent.atomic.AtomicLong;

@Controller
public class HelloWebController {

    private AtomicLong atomicLong = new AtomicLong(1);

    @RequestMapping("/web/greeting")
    public String greeting(Model model) {
        model.addAttribute("name", "Web");
        model.addAttribute("greetingCounter", atomicLong.getAndIncrement());
        return "greeting.html";
    }

    //http://localhost:8080/web/hello?fontSize=25&fontColor=red&name=Gabor
    @RequestMapping("/web/hello")
    public String sayHello(
            Model model,
            @RequestParam(value = "name", required = false, defaultValue = "fellow citizen") String userName,
            @RequestParam(value = "fontSize", required = false, defaultValue = "20") String fontSize,
            @RequestParam(value = "fontColor", required = false, defaultValue = "black") String fontColor) {
        Greeting greeting = new Greeting();
        String[] hellos = greeting.getHellos();
        model.addAttribute("hellos", hellos);
        model.addAttribute("name", userName);
        model.addAttribute("fontSize", fontSize);
        model.addAttribute("fontColor", fontColor);
        return "hello";
    }
}
