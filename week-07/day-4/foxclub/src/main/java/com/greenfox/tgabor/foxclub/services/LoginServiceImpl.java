package com.greenfox.tgabor.foxclub.services;

import com.greenfox.tgabor.foxclub.models.entities.Trick;
import com.greenfox.tgabor.foxclub.repositories.TrickRepository;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import java.util.List;

@Service
public class LoginServiceImpl implements LoginService {

    private TrickRepository trickRepository;

    @Autowired
    public LoginServiceImpl(TrickRepository trickRepository) {
        this.trickRepository = trickRepository;
    }

    @Override
    public List<Trick> listAllTricks() {
        return trickRepository.findAll();
    }
}
