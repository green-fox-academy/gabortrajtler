package com.greenfox.tgabor.todos_mysql.services;

import com.greenfox.tgabor.todos_mysql.model.dtos.EditAssigneeDTO;
import com.greenfox.tgabor.todos_mysql.model.dtos.NewAssigneeDTO;
import com.greenfox.tgabor.todos_mysql.model.entity.Assignee;

import java.util.List;
import java.util.Optional;

public interface AssigneeService {
  List<Assignee> findAll();
  Assignee findById(Long id) throws Exception;
  Assignee save(NewAssigneeDTO newAssigneeDTO);
  Assignee update(EditAssigneeDTO editAssigneeDTO) throws Exception;
  void delete(Long id);
}
