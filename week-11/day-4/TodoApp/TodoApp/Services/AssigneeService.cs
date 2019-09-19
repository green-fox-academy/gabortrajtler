﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using TodoApp.Models;
using TodoApp.Models.Dtos;

namespace TodoApp.Services
{
    public class AssigneeService : IAssigneeService
    {
        private readonly ApplicationContext appContext;

        public AssigneeService(ApplicationContext applicationContext)
        {
            this.appContext = applicationContext;
        }

        public void AddAssignee(AddAssigneeDTO addAssigneeDTO)
        {
            Assignee newAssignee = new Assignee
            {
                Email = addAssigneeDTO.Email,
                Name = addAssigneeDTO.Name
            };
            appContext.Assignees.Add(newAssignee);
            appContext.SaveChanges();
        }

        public List<Assignee> FindAssignees => appContext.Assignees.ToList();
    }
}
