package com.greenfox.tgabor.todos_mysql.model.entity;

import lombok.Getter;
import lombok.NoArgsConstructor;
import lombok.Setter;

import javax.persistence.*;
import java.util.List;

@Entity
@Getter
@Setter
@NoArgsConstructor
public class Assignee {
  @Id
  @GeneratedValue
  private Long id;
  private String name;
  private String email;
  @OneToMany(cascade = {CascadeType.PERSIST, CascadeType.MERGE})
  @JoinColumn(name="assignee_id")
  private List<Todo> todoList;

  public Assignee(String name, String email) {
    this.name = name;
    this.email = email;
  }
}
