package com.greenfox.tgabor.foxclub.repositories;

import com.greenfox.tgabor.foxclub.models.entities.Drink;
import org.springframework.data.repository.CrudRepository;
import org.springframework.stereotype.Repository;

import java.util.List;

@Repository
public interface DrinkRepository extends CrudRepository<Drink, String> {

    List<Drink> findAll();

}
