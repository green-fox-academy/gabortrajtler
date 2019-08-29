package com.greenfox.tgabor.foxclub.services;

import com.greenfox.tgabor.foxclub.models.dtos.NewFoxDTO;
import com.greenfox.tgabor.foxclub.models.entities.Fox;
import com.greenfox.tgabor.foxclub.models.entities.Trick;
import com.greenfox.tgabor.foxclub.repositories.FoxRepository;
import com.greenfox.tgabor.foxclub.repositories.TrickRepository;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import java.util.Optional;

@Service
public class FoxServiceImpl implements FoxService {

  private TrickRepository trickRepository;
  private FoxRepository foxRepository;

  @Autowired
  public FoxServiceImpl(TrickRepository trickRepository, FoxRepository foxRepository) {
    this.trickRepository = trickRepository;
    this.foxRepository = foxRepository;
  }

  @Override
  public Fox saveFox(NewFoxDTO newFox) {
    Fox fox = new Fox(newFox.getFoxName(), newFox.getFood(), newFox.getDrink());
    Optional<Trick> trick = trickRepository.findById(newFox.getTrickId());
    if (trick.isPresent()) {
      fox.addTrick(trick.get());
    }
    return foxRepository.save(fox);
  }

  @Override
  public Fox saveFox(Fox fox) {
    return foxRepository.save(fox);
  }

  @Override
  public Fox getFox(String foxName) {
    return foxRepository.findByName(foxName);
  }
}
