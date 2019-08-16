package com.greenfox.tgabor.foxclub.repositories;

import com.greenfox.tgabor.foxclub.models.entities.Fox;
import org.springframework.data.repository.CrudRepository;
import org.springframework.stereotype.Repository;

import java.util.List;

@Repository
public interface FoxRepository extends CrudRepository<Fox, Integer> {

        List<Fox> findAll();
        Fox findByName(String foxName);

}
