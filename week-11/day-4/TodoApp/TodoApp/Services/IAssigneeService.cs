using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using TodoApp.Models;
using TodoApp.Models.Dtos;

namespace TodoApp.Services
{
    public interface IAssigneeService
    {
        void AddAssignee(AddAssigneeDTO addAssigneeDTO);
        List<Assignee> FindAssignees { get; }
        void DeleteAssignee(long id);
    }
}
