package com.greenfox.tgabor.restdemo.services;

import org.springframework.stereotype.Service;

@Service
public class DoUntilService {

  public Integer sum(Integer until) {
    int sum = 0;
    for (int i = 1; i <= until; i++) {
      sum += i;
    }
    return sum;
  }

  public Integer factor(Integer until) {
    int factor = 1;
    for (int i = 1; i <= until; i++) {
      factor *= i;
    }
    return factor;
  }
}
