package com.greenfox.tgabor.todos_mysql.model.entity;

import lombok.Getter;
import lombok.NoArgsConstructor;
import lombok.Setter;

import javax.persistence.*;

@Entity
@Getter
@Setter
@NoArgsConstructor
public class Todo {
  @Id
  @GeneratedValue
  private Long id;
  private String title;
  private String description;
  private Boolean urgent = false;
  private Boolean done = false;
  @ManyToOne
  private Assignee assignee;

  public Todo(String title, String description, Assignee assignee) {
    this.title = title;
    this.description = description;
    this.assignee = assignee;
  }

  public Todo(String title, String description, Boolean urgent, Boolean done, Assignee assignee) {
    this.title = title;
    this.urgent = urgent;
    this.done = done;
    this.description = description;
    this.assignee = assignee;
  }
}
