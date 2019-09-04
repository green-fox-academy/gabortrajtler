package com.greenfox.tgabor.todos_mysql.services;

import com.greenfox.tgabor.todos_mysql.model.dtos.NewTodoDTO;
import com.greenfox.tgabor.todos_mysql.model.entity.Assignee;
import com.greenfox.tgabor.todos_mysql.model.entity.Todo;
import com.greenfox.tgabor.todos_mysql.repository.AssigneeRepository;
import com.greenfox.tgabor.todos_mysql.repository.TodoRepository;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import java.util.List;

@Service
public class TodoServiceImpl implements TodoService {

  TodoRepository todoRepository;
  AssigneeRepository assigneeRepository;

  @Autowired
  public TodoServiceImpl(TodoRepository todoRepository, AssigneeRepository assigneeRepository) {
    this.todoRepository = todoRepository;
    this.assigneeRepository = assigneeRepository;
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
  public List<Todo> findAllByTitleOrDescriptionContains(String searchText) {
    return todoRepository.findAllByTitleIgnoreCaseContainsOrDescriptionIgnoreCaseContains(searchText, searchText);
  }

  @Override
  public Todo save(NewTodoDTO newTodoDTO) {
    if (assigneeRepository.findById(newTodoDTO.getAssigneeId()).isPresent()) {
      Assignee assignee = assigneeRepository.findById(newTodoDTO.getAssigneeId()).get();
      Todo todo = new Todo(newTodoDTO.getTitle(), newTodoDTO.getDescription(), assignee);
      return todoRepository.save(todo);
    } else {
      Todo todo = new Todo(newTodoDTO.getTitle(), newTodoDTO.getDescription(), new Assignee("n/a", "n/a"));
      return todoRepository.save(todo);
    }
  }

  @Override
  public void delete(Long todoId) {
    todoRepository.deleteById(todoId);
  }
}
