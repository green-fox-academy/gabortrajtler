package com.greenfox.tgabor.restdemo.controllers;

import com.greenfox.tgabor.restdemo.models.CustomError;
import com.greenfox.tgabor.restdemo.models.dtos.ArrayModelDTO;
import com.greenfox.tgabor.restdemo.services.ArrayService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RestController;

@RestController
public class ArrayController {

  ArrayService arrayService;

  @Autowired
  public ArrayController(ArrayService arrayService) {
    this.arrayService = arrayService;
  }

  @PostMapping("/arrays")
  public ResponseEntity calculate(@RequestBody ArrayModelDTO arrayModelDTO) {
    try {
      return ResponseEntity.status(200).body(arrayService.calculate(arrayModelDTO));
    } catch (Exception e) {
      return ResponseEntity.status(200).body(new CustomError("Please provide what to do with the numbers!"));
    }
  }

}
