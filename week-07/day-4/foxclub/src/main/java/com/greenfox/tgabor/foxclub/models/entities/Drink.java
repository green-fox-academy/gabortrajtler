package com.greenfox.tgabor.foxclub.models.entities;

import lombok.Getter;
import lombok.NoArgsConstructor;
import lombok.Setter;

import javax.persistence.Entity;
import javax.persistence.Id;

@Entity
@NoArgsConstructor
@Getter
@Setter
public class Drink {
  @Id
  private String drinkName;

  public Drink(String drinkName) {
    this.drinkName = drinkName;
  }
}
