package com.greenfox.tgabor.todos_mysql.repository;

import com.greenfox.tgabor.todos_mysql.model.entity.Todo;
import org.springframework.data.repository.CrudRepository;
import org.springframework.stereotype.Repository;
import java.util.List;

@Repository
public interface TodoRepository extends CrudRepository<Todo, Long> {

  List<Todo> findAllByUrgent(Boolean urgent);
  List<Todo> findAllByDone(Boolean done);

  @Override
  List<Todo> findAll();

}
