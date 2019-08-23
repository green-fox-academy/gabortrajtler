package com.greenfox.tgabor.reddit.model.entity;

import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.Id;
import java.time.LocalDateTime;
import java.util.concurrent.atomic.AtomicLong;

@Entity
public class Reddit {
  @Id @GeneratedValue
  private Long id;
  private String title;
  private String url;
  private LocalDateTime creationDate;

  private AtomicLong voteCount = new AtomicLong(0);

  public Reddit(String title, String url, LocalDateTime creationDate) {
    this.title = title;
    this.url = url;
    this.creationDate = creationDate;
  }

  public Reddit() {
  }

  public Long getId() {
    return id;
  }

  public String getTitle() {
    return title;
  }

  public void setTitle(String title) {
    this.title = title;
  }

  public String getUrl() {
    return url;
  }

  public void setUrl(String url) {
    this.url = url;
  }

  public AtomicLong getVoteCount() {
    return voteCount;
  }

  public void incrementVoteCount() {
    voteCount.getAndIncrement();
  }

  public void decrementVoteCount() {
    voteCount.getAndDecrement();
  }

  public LocalDateTime getCreationDate() {
    return creationDate;
  }

  public void setCreationDate(LocalDateTime creationDate) {
    this.creationDate = creationDate;
  }
}
