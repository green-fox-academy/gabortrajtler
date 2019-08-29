package com.greenfox.tgabor.reddit.model.entity;

import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.Id;
import javax.persistence.Transient;
import java.time.Duration;
import java.time.LocalDateTime;
import java.util.concurrent.atomic.AtomicLong;

@Entity
public class Reddit {
  @Id @GeneratedValue
  private Long id;
  private String title;
  private String url;
  private String username;
  private AtomicLong voteCount = new AtomicLong(0);
  private LocalDateTime creationDate;
  @Transient
  private final Duration validityDuration = Duration.ofMinutes(2);
  private LocalDateTime expirityDate;

  public Reddit(String title, String url, String username, LocalDateTime creationDate) {
    this.title = title;
    this.url = url;
    this.username = username;
    this.creationDate = creationDate;
    this.expirityDate = creationDate.plus(validityDuration);
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

  public LocalDateTime getExpirityDate() {
    return expirityDate;
  }

  public void setExpirityDate(LocalDateTime expirityDate) {
    this.expirityDate = expirityDate;
  }

  public String getUsername() {
    return username;
  }

  public void setUsername(String username) {
    this.username = username;
  }
}
