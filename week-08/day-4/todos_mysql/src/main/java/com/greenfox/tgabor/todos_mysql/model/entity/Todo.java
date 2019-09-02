package com.greenfox.tgabor.todos_mysql.model.entity;

import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.Id;

@Entity
public class Todo {
  @Id
  @GeneratedValue
  private Long id;
  private String title;
  private String description;
  private Boolean urgent = false;
  private Boolean done = false;

  public Todo() {
  }

  public Todo(String title, String description) {
    this.title = title;
    this.description = description;
  }

  public Todo(String title, String description, Boolean urgent, Boolean done) {
    this.title = title;
    this.urgent = urgent;
    this.done = done;
    this.description = description;
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

  public Boolean getUrgent() {
    return urgent;
  }

  public void setUrgent(Boolean urgent) {
    this.urgent = urgent;
  }

  public Boolean getDone() {
    return done;
  }

  public void setDone(Boolean done) {
    this.done = done;
  }

  public String getDescription() {
    return description;
  }

  public void setDescription(String description) {
    this.description = description;
  }
}
