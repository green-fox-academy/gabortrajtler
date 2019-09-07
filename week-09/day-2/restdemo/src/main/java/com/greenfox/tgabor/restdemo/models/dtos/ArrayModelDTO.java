package com.greenfox.tgabor.restdemo.models.dtos;

import lombok.Getter;
import lombok.NoArgsConstructor;
import lombok.Setter;

@Getter
@Setter
@NoArgsConstructor
public class ArrayModelDTO {
  private String what;
  private Integer[] numbers;
  private Integer result;
}
