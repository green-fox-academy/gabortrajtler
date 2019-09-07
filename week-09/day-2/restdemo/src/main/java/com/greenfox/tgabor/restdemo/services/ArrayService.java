package com.greenfox.tgabor.restdemo.services;

import com.greenfox.tgabor.restdemo.models.ArrayModelResultInt;
import com.greenfox.tgabor.restdemo.models.ArrayModelResultIntList;
import com.greenfox.tgabor.restdemo.models.dtos.ArrayModelDTO;

public interface ArrayService {
  Object calculate(ArrayModelDTO arrayModelDTO) throws Exception;
}
