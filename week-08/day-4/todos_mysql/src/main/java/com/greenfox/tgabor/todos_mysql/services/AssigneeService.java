package com.greenfox.tgabor.todos_mysql.services;

import com.greenfox.tgabor.todos_mysql.model.dtos.NewAssigneeDTO;
import com.greenfox.tgabor.todos_mysql.model.entity.Assignee;

import java.util.List;

public interface AssigneeService {
  List<Assignee> findAll();
  Assignee save(NewAssigneeDTO newAssigneeDTO);
}
