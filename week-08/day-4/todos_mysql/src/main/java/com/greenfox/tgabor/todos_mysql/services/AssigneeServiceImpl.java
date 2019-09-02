package com.greenfox.tgabor.todos_mysql.services;

import com.greenfox.tgabor.todos_mysql.model.dtos.NewAssigneeDTO;
import com.greenfox.tgabor.todos_mysql.model.entity.Assignee;
import com.greenfox.tgabor.todos_mysql.repository.AssigneeRepository;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import java.util.List;

@Service
public class AssigneeServiceImpl implements AssigneeService {
  private AssigneeRepository assigneeRepository;

  @Autowired
  public AssigneeServiceImpl(AssigneeRepository assigneeRepository) {
    this.assigneeRepository = assigneeRepository;
  }

  @Override
  public List<Assignee> findAll() {
    return assigneeRepository.findAll();
  }

  @Override
  public Assignee save(NewAssigneeDTO newAssigneeDTO) {
    Assignee assignee = new Assignee(newAssigneeDTO.getName(), newAssigneeDTO.getEmail());
    return assigneeRepository.save(assignee);
  }
}
