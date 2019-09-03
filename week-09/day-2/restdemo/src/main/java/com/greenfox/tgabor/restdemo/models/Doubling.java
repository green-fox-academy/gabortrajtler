package com.greenfox.tgabor.restdemo.models;

import lombok.Getter;
import lombok.NoArgsConstructor;
import lombok.Setter;

@Getter
@Setter
@NoArgsConstructor
public class Doubling {
  private Integer received;
  private Integer result;

  public Doubling(Integer received) {
    this.received = received;
  }
}
