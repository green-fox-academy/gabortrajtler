package com.greenfox.tgabor.restdemo.controllers;

import com.greenfox.tgabor.restdemo.models.CustomError;
import com.greenfox.tgabor.restdemo.models.Greeter;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

@RestController
public class GreeterController {

  @GetMapping("/greeter")
  public ResponseEntity greeter(@RequestParam(value = "name", required = false) String name,
                                @RequestParam(value = "title", required = false) String title) {
    if (name == null && title == null) {
      return ResponseEntity.status(200).body(new CustomError("Please provide a name and a title!"));
    } else if (name == null) {
      return ResponseEntity.status(200).body(new CustomError("Please provide a name!"));
    } else if (title == null) {
      return ResponseEntity.status(200).body(new CustomError("Please provide a title!"));
    } else {
      return ResponseEntity.status(200).body(new Greeter("Oh, hi there " + name
              + ", my dear " + title + "!"));
    }
  }
}
