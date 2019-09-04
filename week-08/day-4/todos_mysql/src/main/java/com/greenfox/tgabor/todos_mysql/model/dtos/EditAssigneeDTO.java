package com.greenfox.tgabor.todos_mysql.model.dtos;

import lombok.Getter;
import lombok.Setter;

@Getter
@Setter
public class EditAssigneeDTO {
    private String name;
    private String email;
    private Long id;
}
