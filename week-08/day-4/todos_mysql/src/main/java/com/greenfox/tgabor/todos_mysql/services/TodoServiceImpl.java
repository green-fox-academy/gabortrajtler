package com.greenfox.tgabor.todos_mysql.services;

import com.greenfox.tgabor.todos_mysql.model.dtos.NewTodoDTO;
import com.greenfox.tgabor.todos_mysql.model.entity.Todo;
import com.greenfox.tgabor.todos_mysql.repository.TodoRepository;
import org.springframework.stereotype.Service;

import java.util.List;

@Service
public class TodoServiceImpl implements TodoService {

  TodoRepository todoRepository;

  public TodoServiceImpl(TodoRepository todoRepository) {
    this.todoRepository = todoRepository;
  }

  @Override
  public List<Todo> findAllByUrgent(Boolean urgent) {
    return todoRepository.findAllByUrgent(urgent);
  }

  @Override
  public List<Todo> findAllByDone(Boolean done) {
    return todoRepository.findAllByDone(done);
  }

  @Override
  public List<Todo> findAll() {
    return todoRepository.findAll();
  }

  @Override
  public Todo save(NewTodoDTO newTodoDTO) {
    Todo todo = new Todo(newTodoDTO.getTitle());
    return todoRepository.save(todo);
  }
}
