package com.greenfox.tgabor.reddit.services;

import com.greenfox.tgabor.reddit.model.dtos.NewRedditDTO;
import com.greenfox.tgabor.reddit.model.entity.Reddit;
import org.springframework.data.domain.Page;

import java.time.LocalDateTime;
import java.util.List;

public interface RedditService {
  List<Reddit> findAll();
  List<Reddit> findTop10();
  Page<Reddit> findAllPages(Integer pageIndex, Integer pageSize, String username);

  Reddit save(NewRedditDTO newRedditDTO, String username, LocalDateTime localDateTime);

  void delete(Long redditId);
  void voteUp(Long redditId);
  void voteDown(Long redditId);
}
