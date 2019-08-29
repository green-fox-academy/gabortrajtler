package com.greenfox.tgabor.foxclub.services;

import com.greenfox.tgabor.foxclub.models.entities.Drink;
import com.greenfox.tgabor.foxclub.repositories.DrinkRepository;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import java.util.List;

@Service
public class DrinkServiceImpl implements DrinkService {

  private DrinkRepository drinkRepository;

  @Autowired
  public DrinkServiceImpl(DrinkRepository drinkRepository) {
    this.drinkRepository = drinkRepository;
  }

  @Override
  public List<Drink> listAllDrinks() {
    return drinkRepository.findAll();
  }

  @Override
  public Drink saveDrink(String drinkName) {
    return drinkRepository.save(new Drink(drinkName));
  }
}
