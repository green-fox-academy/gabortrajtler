package com.greenfox.tgabor.todos_mysql.repository;

import com.greenfox.tgabor.todos_mysql.model.entity.Assignee;
import com.greenfox.tgabor.todos_mysql.model.entity.Todo;
import org.springframework.data.repository.CrudRepository;
import org.springframework.stereotype.Repository;
import java.util.List;
import java.util.Optional;

@Repository
public interface TodoRepository extends CrudRepository<Todo, Long> {

  List<Todo> findAllByUrgent(Boolean urgent);
  List<Todo> findAllByDone(Boolean done);
  List<Todo> findAllByTitleIgnoreCaseContainsOrDescriptionIgnoreCaseContains(String title, String description);
  List<Todo> findByAssignee(Assignee assignee);
  List<Todo> findByAssigneeAndDone(Assignee assignee, Boolean done);
  Optional<Todo> findById(Long id);

  @Override
  List<Todo> findAll();

}
