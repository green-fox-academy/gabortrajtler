package com.greenfox.tgabor.todos_mysql;

import com.greenfox.tgabor.todos_mysql.model.entity.Todo;
import com.greenfox.tgabor.todos_mysql.repository.TodoRepository;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.boot.CommandLineRunner;
import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;

@SpringBootApplication
public class TodosMysqlApplication implements CommandLineRunner {

  TodoRepository todoRepository;

  @Autowired
  public TodosMysqlApplication(TodoRepository todoRepository) {
    this.todoRepository = todoRepository;
  }

  public static void main(String[] args) {
    SpringApplication.run(TodosMysqlApplication.class, args);
  }

  @Override
  public void run(String... args) throws Exception {
  }
}
