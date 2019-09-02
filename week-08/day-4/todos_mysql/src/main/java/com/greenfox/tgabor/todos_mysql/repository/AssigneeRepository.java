package com.greenfox.tgabor.todos_mysql.repository;

import com.greenfox.tgabor.todos_mysql.model.entity.Assignee;
import org.springframework.data.repository.CrudRepository;
import org.springframework.stereotype.Repository;

import java.util.List;

@Repository
public interface AssigneeRepository extends CrudRepository<Assignee, Long> {

  @Override
  List<Assignee> findAll();

}
