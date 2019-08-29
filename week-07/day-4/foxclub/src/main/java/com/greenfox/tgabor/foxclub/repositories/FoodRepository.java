package com.greenfox.tgabor.foxclub.repositories;

import com.greenfox.tgabor.foxclub.models.entities.Food;
import com.greenfox.tgabor.foxclub.models.entities.Trick;
import org.springframework.data.repository.CrudRepository;
import org.springframework.stereotype.Repository;

import java.util.List;

@Repository
public interface FoodRepository extends CrudRepository<Food, String> {

    List<Food> findAll();

}
