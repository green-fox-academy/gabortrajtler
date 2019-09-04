package com.greenfox.tgabor.todos_mysql.services;

import com.greenfox.tgabor.todos_mysql.model.dtos.EditTodoDTO;
import com.greenfox.tgabor.todos_mysql.model.dtos.NewTodoDTO;
import com.greenfox.tgabor.todos_mysql.model.entity.Assignee;
import com.greenfox.tgabor.todos_mysql.model.entity.Todo;

import java.util.List;

public interface TodoService {
  List<Todo> findAllByUrgent(Boolean urgent);
  List<Todo> findAllByDone(Boolean done);
  List<Todo> findAll();
  List<Todo> findAllByTitleOrDescriptionContains(String searchText);
  List<Todo> findByAssignee(Assignee assignee);
  List<Todo> findByAssigneeAndDone(Assignee assignee, Boolean done);
  Todo findById(Long id) throws Exception;

  Todo save(NewTodoDTO newTodoDTO) throws Exception;
  Todo update(EditTodoDTO editTodoDTO) throws Exception;

  void delete(Long todoId);
}
