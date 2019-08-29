package com.greenfox.tgabor.foxclub.services;

import com.greenfox.tgabor.foxclub.models.entities.Food;

import java.util.List;

public interface FoodService {

    List<Food> listAllFoods();
    Food saveFood(String foodName);

}
