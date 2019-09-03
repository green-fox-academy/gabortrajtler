package com.greenfox.tgabor.restdemo.models;

import lombok.Getter;
import lombok.NoArgsConstructor;
import lombok.Setter;

@Getter
@Setter
@NoArgsConstructor
public class CustomError {
  private String error;

  public CustomError(String error) {
    this.error = error;
  }
}
