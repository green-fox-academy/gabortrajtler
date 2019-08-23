package com.greenfox.tgabor.reddit.model.entity;

import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.Id;
import java.util.concurrent.atomic.AtomicInteger;
import java.util.concurrent.atomic.AtomicLong;

@Entity
public class Reddit {
  @Id @GeneratedValue
  private Long id;
  private String title;
  private String url;
  private AtomicLong voteCount = new AtomicLong(0);

  public Reddit(String title, String url) {
    this.title = title;
    this.url = url;
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
    voteCount.incrementAndGet();
  }
}
