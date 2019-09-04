package com.greenfox.tgabor.todos_mysql.model.dtos;

import com.greenfox.tgabor.todos_mysql.model.entity.Assignee;
import lombok.Getter;
import lombok.Setter;

@Getter
@Setter
public class EditTodoDTO {
  private String title;
  private String description;
  private Long id;
  private Boolean urgent;
  private Boolean done;
  private Long assigneeId;
}
