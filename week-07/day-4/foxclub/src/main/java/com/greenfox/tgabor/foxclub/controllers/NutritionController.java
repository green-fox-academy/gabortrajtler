package com.greenfox.tgabor.foxclub.controllers;

import com.greenfox.tgabor.foxclub.models.entities.Fox;
import com.greenfox.tgabor.foxclub.services.DrinkService;
import com.greenfox.tgabor.foxclub.services.FoodService;
import com.greenfox.tgabor.foxclub.services.FoxService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestParam;

@Controller
public class NutritionController {

  private FoodService foodService;
  private DrinkService drinkService;
  private FoxService foxService;

  @Autowired
  public NutritionController(FoodService foodService, DrinkService drinkService, FoxService foxService) {
    this.foodService = foodService;
    this.drinkService = drinkService;
    this.foxService = foxService;
  }

  @GetMapping("/addnutrition")
  public String renderAddNutrition() {
    return "add_nutrition";
  }

  @PostMapping("/addnutrition")
  public String addNutrition(@RequestParam(value = "food-name", required = false) String foodName,
                             @RequestParam(value = "drink-name", required = false) String drinkName) {
    if (foodName != null) {
      foodService.saveFood(foodName);
    }
    if (drinkName != null) {
      drinkService.saveDrink(drinkName);
    }
    return "redirect:/addnutrition";
  }

  @GetMapping("/nutritionStore")
  public String renderChangeNutrition(Model model,
                                      @RequestParam(value = "name") String foxName) {
    model.addAttribute("foxProfile", foxService.getFox(foxName));
    model.addAttribute("foods", foodService.listAllFoods());
    model.addAttribute("drinks", drinkService.listAllDrinks());
    return "nutrition_store";
  }

  @PostMapping("/nutritionStore")
  public String changeNutrition(@RequestParam(value = "name") String foxName,
                                @RequestParam(value = "food-name", required = false) String foodName,
                                @RequestParam(value = "drink-name", required = false) String drinkName) {
    Fox foxProfile = foxService.getFox(foxName);
    if (foodName != null) {
      foxProfile.setFood(foodName);
      foxService.saveFox(foxProfile);
    }
    if (drinkName != null) {
      foxProfile.setDrink(drinkName);
      foxService.saveFox(foxProfile);
    }
    return "redirect:/?name=" + foxName;
  }
}
