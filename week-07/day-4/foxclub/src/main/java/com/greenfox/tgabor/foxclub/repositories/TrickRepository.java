package com.greenfox.tgabor.foxclub.repositories;

import com.greenfox.tgabor.foxclub.models.entities.Trick;
import org.springframework.data.repository.CrudRepository;

import java.util.List;

public interface TrickRepository extends CrudRepository<Trick, Integer> {

    List<Trick> findAll();

}
