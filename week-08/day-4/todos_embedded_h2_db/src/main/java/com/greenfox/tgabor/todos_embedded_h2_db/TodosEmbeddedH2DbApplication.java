package com.greenfox.tgabor.todos_embedded_h2_db;

import com.greenfox.tgabor.todos_embedded_h2_db.model.entity.Todo;
import com.greenfox.tgabor.todos_embedded_h2_db.repository.TodoRepository;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.boot.CommandLineRunner;
import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;

@SpringBootApplication
public class TodosEmbeddedH2DbApplication implements CommandLineRunner {

  TodoRepository todoRepository;

  @Autowired
  public TodosEmbeddedH2DbApplication(TodoRepository todoRepository) {
    this.todoRepository = todoRepository;
  }

  public static void main(String[] args) {
    SpringApplication.run(TodosEmbeddedH2DbApplication.class, args);
  }

  @Override
  public void run(String... args) throws Exception {
    todoRepository.save(new Todo("új töltő vétel"));
    todoRepository.save(new Todo("refactor secu részek (SecurityConfig behúzása)"));
  }
}
