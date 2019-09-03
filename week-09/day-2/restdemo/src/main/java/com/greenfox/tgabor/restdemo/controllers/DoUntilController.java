package com.greenfox.tgabor.restdemo.controllers;

import com.greenfox.tgabor.restdemo.models.Until;
import com.greenfox.tgabor.restdemo.services.DoUntilService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.*;

@RestController
public class DoUntilController {
  private DoUntilService doUntilService;

  @Autowired
  public DoUntilController(DoUntilService doUntilService) {
    this.doUntilService = doUntilService;
  }

  @PostMapping("/dountil/{action}")
  public ResponseEntity dountil(@PathVariable("action") String action,
                                @RequestBody Until until) {
    if(until.getUntil() == null) {
      return ResponseEntity.status(200).body(new Error("Please provide a number!"));
    } else if (action.equals("sum")) {
      until.setResult(doUntilService.sum(until.getUntil()));
      return ResponseEntity.status(200).body(until);
    } else if (action.equals("factor")) {
      until.setResult(doUntilService.factor(until.getUntil()));
      return ResponseEntity.status(200).body(until);
    } else {
      return ResponseEntity.status(200).body(new Error("Please a sum or factor action!"));
    }
  }
}
