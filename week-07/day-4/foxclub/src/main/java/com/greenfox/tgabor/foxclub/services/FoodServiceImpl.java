package com.greenfox.tgabor.foxclub.services;

import com.greenfox.tgabor.foxclub.models.entities.Food;
import com.greenfox.tgabor.foxclub.repositories.FoodRepository;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import java.util.List;

@Service
public class FoodServiceImpl implements FoodService {

  private FoodRepository foodRepository;

  @Autowired
  public FoodServiceImpl(FoodRepository foodRepository) {
    this.foodRepository = foodRepository;
  }

  @Override
  public List<Food> listAllFoods() {
    return foodRepository.findAll();
  }

  @Override
  public Food saveFood(String foodName) {
    return foodRepository.save(new Food(foodName));
  }
}
