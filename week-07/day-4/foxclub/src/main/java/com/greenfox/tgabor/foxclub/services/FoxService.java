package com.greenfox.tgabor.foxclub.services;

import com.greenfox.tgabor.foxclub.models.dtos.NewFoxDTO;
import com.greenfox.tgabor.foxclub.models.entities.Fox;

public interface FoxService {

  Fox saveFox(NewFoxDTO newFox);
  Fox getFox(String foxName);

}
