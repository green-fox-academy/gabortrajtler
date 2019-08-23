package com.greenfox.tgabor.reddit.services;

import com.greenfox.tgabor.reddit.model.dtos.NewRedditDTO;
import com.greenfox.tgabor.reddit.model.entity.Reddit;
import com.greenfox.tgabor.reddit.repository.RedditRepository;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import java.time.LocalDateTime;
import java.util.List;

@Service
public class RedditServiceImpl implements RedditService {

  private RedditRepository redditRepository;

  @Autowired
  public RedditServiceImpl(RedditRepository redditRepository) {
    this.redditRepository = redditRepository;
  }

  @Override
  public List<Reddit> findAll() {
    return redditRepository.findAllByOrderByVoteCountDesc();
  }

  @Override
  public Reddit save(NewRedditDTO newRedditDTO, LocalDateTime creationDate) {
    Reddit reddit = new Reddit(newRedditDTO.getTitle(), newRedditDTO.getUrl(), creationDate);
    return redditRepository.save(reddit);
  }

  @Override
  public void delete(Long redditId) {
    redditRepository.deleteById(redditId);
  }

  @Override
  public void voteUp(Long redditId) {
    if (redditRepository.findById(redditId).isPresent()) {
      Reddit reddit = redditRepository.findById(redditId).get();
      reddit.incrementVoteCount();
      redditRepository.save(reddit);
    }
  }

  @Override
  public void voteDown(Long redditId) {
    if (redditRepository.findById(redditId).isPresent()) {
      Reddit reddit = redditRepository.findById(redditId).get();
      reddit.decrementVoteCount();
      redditRepository.save(reddit);
    }
  }
}
