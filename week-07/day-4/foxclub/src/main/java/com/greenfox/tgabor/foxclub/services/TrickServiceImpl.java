package com.greenfox.tgabor.foxclub.services;

import com.greenfox.tgabor.foxclub.models.dtos.NewTrickDTO;
import com.greenfox.tgabor.foxclub.models.entities.Fox;
import com.greenfox.tgabor.foxclub.models.entities.Trick;
import com.greenfox.tgabor.foxclub.repositories.TrickRepository;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import java.util.List;
import java.util.Optional;

@Service
public class TrickServiceImpl implements TrickService {

    private TrickRepository trickRepository;

    @Autowired
    public TrickServiceImpl(TrickRepository trickRepository) {
        this.trickRepository = trickRepository;
    }

    @Override
    public List<Trick> listAllTricks() {
        return trickRepository.findAll();
    }

    @Override
    public Trick saveTrick(NewTrickDTO trickDTO) {
        Trick trick = new Trick(trickDTO.getTrickName());
        return trickRepository.save(trick);
    }

}
