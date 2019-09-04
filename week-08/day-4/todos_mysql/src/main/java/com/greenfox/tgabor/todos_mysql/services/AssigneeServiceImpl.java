package com.greenfox.tgabor.todos_mysql.services;

import com.greenfox.tgabor.todos_mysql.model.dtos.EditAssigneeDTO;
import com.greenfox.tgabor.todos_mysql.model.dtos.NewAssigneeDTO;
import com.greenfox.tgabor.todos_mysql.model.entity.Assignee;
import com.greenfox.tgabor.todos_mysql.repository.AssigneeRepository;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import java.util.List;
import java.util.Optional;

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
  public Assignee findById(Long id) throws Exception {
    if (assigneeRepository.findById(id).isPresent()) {
      return assigneeRepository.findById(id).get();
    } else {
      throw(new Exception("Missing or wrong user ID!"));
    }
  }

  @Override
  public Assignee save(NewAssigneeDTO newAssigneeDTO) {
    Assignee assignee = new Assignee(newAssigneeDTO.getName(), newAssigneeDTO.getEmail());
    return assigneeRepository.save(assignee);
  }

  @Override
  public Assignee update(EditAssigneeDTO editAssigneeDTO) throws Exception {
    Assignee updateAssignee = findById(editAssigneeDTO.getId());
    updateAssignee.setName(editAssigneeDTO.getName());
    updateAssignee.setEmail(editAssigneeDTO.getEmail());
    return assigneeRepository.save(updateAssignee);
  }

  @Override
  public void delete(Long id) {
    assigneeRepository.deleteById(id);
  }
}
