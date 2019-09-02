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
  @ManyToOne(cascade = CascadeType.ALL)
  private Assignee assignee;

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
}
