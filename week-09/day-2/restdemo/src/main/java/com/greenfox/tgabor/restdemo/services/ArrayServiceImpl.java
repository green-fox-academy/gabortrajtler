package com.greenfox.tgabor.restdemo.services;

import com.greenfox.tgabor.restdemo.models.ArrayModelResultInt;
import com.greenfox.tgabor.restdemo.models.ArrayModelResultIntList;
import com.greenfox.tgabor.restdemo.models.dtos.ArrayModelDTO;
import org.springframework.stereotype.Service;

import java.util.ArrayList;
import java.util.List;

@Service
public class ArrayServiceImpl implements ArrayService {

  private ArrayModelResultInt arrayModelResultInt;
  private ArrayModelResultIntList arrayModelResultIntList;

  @Override
  public Object calculate(ArrayModelDTO arrayModelDTO) throws Exception {
    if (arrayModelDTO.getWhat() == null || arrayModelDTO.getNumbers() == null) {
      throw (new Exception("Please provide what to do with the numbers!"));
    } else if (arrayModelDTO.getWhat().matches("sum|multiply")) {
      int result = 0;
      if(arrayModelDTO.getWhat().equals("sum")) {
        for (Integer number : arrayModelDTO.getNumbers()) {
          result += number;
        }
      } else {
        result = 1;
        for (Integer number : arrayModelDTO.getNumbers()) {
          result *= number;
        }
      }
      arrayModelResultInt = new ArrayModelResultInt();
      arrayModelResultInt.setResult(result);
      return arrayModelResultInt;
    } else if (arrayModelDTO.getWhat().equals("double")) {
      List<Integer> result = new ArrayList<>();
      for (Integer number : arrayModelDTO.getNumbers()) {
        result.add(number*2);
      }
      arrayModelResultIntList = new ArrayModelResultIntList();
      arrayModelResultIntList.setResult(result);
      return arrayModelResultIntList;
    } else {
      throw (new Exception("Please provide what to do with the numbers!"));
    }
  }
}
