package com.greenfox.tgabor.foxclub.services;

import com.greenfox.tgabor.foxclub.models.dtos.NewTrickDTO;
import com.greenfox.tgabor.foxclub.models.entities.Trick;
import java.util.List;

public interface TrickService {

    List<Trick> listAllTricks();
    List<Trick> getKnownTricks(String foxName);
    Trick saveTrick(NewTrickDTO trickDTO);

}
