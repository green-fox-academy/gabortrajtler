package com.greenfox.tgabor.restdemo.controllers;

import com.greenfox.tgabor.restdemo.models.Doubling;
import com.greenfox.tgabor.restdemo.models.CustomError;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.*;

@RestController
public class DoublingController {

  @GetMapping("/doubling")
  public ResponseEntity doubling(@RequestParam(value = "input", required = false) Integer input) {
    if (input == null) {
      return ResponseEntity.status(200).body(new CustomError("Please provide an input!"));
    } else {
      Doubling doubling = new Doubling(input);
      doubling.setResult(doubling.getReceived()*2);
      return ResponseEntity.status(200).body(doubling);
    }
  }

}
