package com.greenfox.tgabor.todos_mysql.model.dtos;

import lombok.Getter;
import lombok.Setter;

@Getter
@Setter
public class NewTodoDTO {
  private String title;
  private String description;
  private Long assigneeId;
}
