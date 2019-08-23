package com.greenfox.tgabor.reddit.repository;

import com.greenfox.tgabor.reddit.model.entity.Reddit;
import org.springframework.data.repository.CrudRepository;
import org.springframework.stereotype.Repository;

import java.util.List;

@Repository
public interface RedditRepository extends CrudRepository<Reddit, Long> {

  @Override
  List<Reddit> findAll();
}
