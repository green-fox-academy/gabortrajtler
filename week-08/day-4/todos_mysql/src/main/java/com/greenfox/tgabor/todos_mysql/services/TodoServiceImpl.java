package com.greenfox.tgabor.todos_mysql.services;

import com.greenfox.tgabor.todos_mysql.model.dtos.EditTodoDTO;
import com.greenfox.tgabor.todos_mysql.model.dtos.NewTodoDTO;
import com.greenfox.tgabor.todos_mysql.model.entity.Assignee;
import com.greenfox.tgabor.todos_mysql.model.entity.Todo;
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
  public List<Todo> findByAssignee(Assignee assignee) {
    return todoRepository.findByAssignee(assignee);
  }

  @Override
  public List<Todo> findByAssigneeAndDone(Assignee assignee, Boolean done) {
    return todoRepository.findByAssigneeAndDone(assignee, done);
  }

  @Override
  public Todo findById(Long id) throws Exception {
    if (todoRepository.findById(id).isPresent()) {
      return todoRepository.findById(id).get();
    } else {
      throw (new Exception("Missing or wrong todo ID!"));
    }
  }

  @Override
  public Todo save(NewTodoDTO newTodoDTO) throws Exception {
      Assignee assignee = assigneeService.findById(newTodoDTO.getAssigneeId());
      Todo todo = new Todo(newTodoDTO.getTitle(), newTodoDTO.getDescription(), assignee);
      return todoRepository.save(todo);
  }

  @Override
  public Todo update(EditTodoDTO editTodoDTO) throws Exception {
    Todo updateTodo = findById(editTodoDTO.getId());
    Assignee assignee = assigneeService.findById(editTodoDTO.getAssigneeId());
    updateTodo.setAssignee(assignee);
    updateTodo.setDescription(editTodoDTO.getDescription());
    updateTodo.setDone(editTodoDTO.getDone());
    updateTodo.setUrgent(editTodoDTO.getUrgent());
    updateTodo.setTitle(editTodoDTO.getTitle());
    return todoRepository.save(updateTodo);
  }

  @Override
  public void delete(Long todoId) {
    todoRepository.deleteById(todoId);
  }
}
