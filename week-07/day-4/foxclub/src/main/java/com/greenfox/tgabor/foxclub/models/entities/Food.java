package com.greenfox.tgabor.foxclub.models.entities;

import lombok.Getter;
import lombok.NoArgsConstructor;
import lombok.Setter;
import javax.persistence.Id;
import javax.persistence.Entity;


@Entity
@NoArgsConstructor
@Getter
@Setter
public class Food {
  @Id
  private String foodName;

  public Food(String foodName) {
    this.foodName = foodName;
  }
}
