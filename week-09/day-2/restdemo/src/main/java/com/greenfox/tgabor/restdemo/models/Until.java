package com.greenfox.tgabor.restdemo.models;

import lombok.Getter;
import lombok.NoArgsConstructor;
import lombok.Setter;

@Getter
@Setter
@NoArgsConstructor
public class Until {
  private Integer until;
  private Integer result;

  public Until(Integer until) {
    this.until = until;
  }
}
