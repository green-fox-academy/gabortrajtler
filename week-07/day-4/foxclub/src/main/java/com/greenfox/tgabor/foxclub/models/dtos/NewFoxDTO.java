package com.greenfox.tgabor.foxclub.models.dtos;

public class NewFoxDTO {

  private String foxName;
  private String food;
  private String drink;
  private Integer trickId;

  public String getFoxName() {
    return foxName;
  }

  public void setFoxName(String foxName) {
    this.foxName = foxName;
  }

  public Integer getTrickId() {
    return trickId;
  }

  public void setTrickId(Integer trickId) {
    this.trickId = trickId;
  }

  public String getFood() {
    return food;
  }

  public void setFood(String food) {
    this.food = food;
  }

  public String getDrink() {
    return drink;
  }

  public void setDrink(String drink) {
    this.drink = drink;
  }
}
