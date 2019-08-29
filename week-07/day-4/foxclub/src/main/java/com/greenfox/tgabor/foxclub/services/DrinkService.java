package com.greenfox.tgabor.foxclub.services;

import com.greenfox.tgabor.foxclub.models.entities.Drink;
import org.springframework.stereotype.Service;

import java.util.List;

public interface DrinkService {

    List<Drink> listAllDrinks();
    Drink saveDrink(String drinkName);

}
