package com.greenfox.tgabor.reddit.services;

import com.greenfox.tgabor.reddit.model.dtos.NewRedditDTO;
import com.greenfox.tgabor.reddit.model.entity.Reddit;

import java.time.LocalDateTime;
import java.util.List;

public interface RedditService {
  List<Reddit> findAll();

  Reddit save(NewRedditDTO newRedditDTO, LocalDateTime localDateTime);

  void delete(Long redditId);
  void voteUp(Long redditId);
  void voteDown(Long redditId);
}
