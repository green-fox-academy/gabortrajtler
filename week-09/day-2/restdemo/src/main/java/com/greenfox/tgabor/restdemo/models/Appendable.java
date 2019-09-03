package com.greenfox.tgabor.restdemo.models;

import lombok.Getter;
import lombok.NoArgsConstructor;
import lombok.Setter;

@Getter
@Setter
@NoArgsConstructor
public class Appendable {
  private String appended;

  public Appendable(String appended) {
    this.appended = appended;
  }
}
