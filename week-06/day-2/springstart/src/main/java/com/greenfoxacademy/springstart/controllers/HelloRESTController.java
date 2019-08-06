package com.greenfoxacademy.springstart.controllers;

import com.greenfoxacademy.springstart.Greeting;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

import java.util.concurrent.atomic.AtomicLong;

@RestController
public class HelloRESTController {

    private AtomicLong atomicLong = new AtomicLong(1);

    // localhost:8080/greeting?name=...
    @RequestMapping("/greeting")
    public Greeting greeting(@RequestParam(value = "name", required = false, defaultValue = "fellow citizen") String username) {
        Greeting greeting = new Greeting(atomicLong.getAndIncrement(), "Hello " + username + "!");
        return greeting;
    }
}
