package com.greenfox.tgabor.todos_embedded_h2_db.repository;

import com.greenfox.tgabor.todos_embedded_h2_db.model.entity.Todo;
import org.springframework.data.repository.CrudRepository;
import org.springframework.stereotype.Repository;

@Repository
public interface TodoRepository extends CrudRepository<Todo, Long> {
}
