package com.greenfox.tgabor.foxclub.repositories;

import com.greenfox.tgabor.foxclub.models.entities.Trick;
import org.springframework.data.repository.CrudRepository;
import org.springframework.stereotype.Repository;

import java.util.List;

@Repository
public interface TrickRepository extends CrudRepository<Trick, Integer> {

    List<Trick> findAll();
    List<Trick> findTricksByName(String foxName);

}
