package com.greenfox.tgabor.todos_mysql.repository;

import com.greenfox.tgabor.todos_mysql.entity.Todo;
import org.springframework.data.repository.CrudRepository;
import org.springframework.stereotype.Repository;

@Repository
public interface TodoRepository extends CrudRepository<Todo, Long> {
}
