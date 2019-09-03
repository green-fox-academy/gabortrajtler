package com.greenfox.tgabor.restdemo.controllers;

import com.greenfox.tgabor.restdemo.models.Appendable;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.RestController;

@RestController
public class AppendController {

  @GetMapping("appenda/{appendable}")
  public ResponseEntity appenda(@PathVariable(value = "appendable", required = false) String appendable) {
    if(appendable == null) {
      return ResponseEntity.status(404).body("");
    } else {
      return ResponseEntity.status(200).body(new Appendable(appendable + "a"));
    }
  }

}
