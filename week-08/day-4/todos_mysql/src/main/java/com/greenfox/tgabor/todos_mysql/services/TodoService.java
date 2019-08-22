package com.greenfox.tgabor.todos_mysql.services;

import com.greenfox.tgabor.todos_mysql.model.dtos.NewTodoDTO;
import com.greenfox.tgabor.todos_mysql.model.entity.Todo;

import java.util.List;

public interface TodoService {
  List<Todo> findAllByUrgent(Boolean urgent);
  List<Todo> findAllByDone(Boolean done);
  List<Todo> findAll();

  Todo save(NewTodoDTO newTodoDTO);

  void delete(Long todoId);
}
