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

  private TodoRepository todoRepository;
  private AssigneeService assigneeService;

  @Autowired
  public TodoServiceImpl(TodoRepository todoRepository, AssigneeService assigneeService) {
    this.todoRepository = todoRepository;
    this.assigneeService = assigneeService;
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
  public Todo save(NewTodoDTO newTodoDTO) throws Exception {
      Assignee assignee = assigneeService.findById(newTodoDTO.getAssigneeId());
      Todo todo = new Todo(newTodoDTO.getTitle(), newTodoDTO.getDescription(), assignee);
      return todoRepository.save(todo);
  }

  @Override
  public void delete(Long todoId) {
    todoRepository.deleteById(todoId);
  }
}
