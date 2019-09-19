using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace TodoApp.Models.Dtos
{
    public class AddTodoDTO
    {
        public string Title { get; set; }
        public string Description { get; set; }
        public long AssigneeId { get; set; }
    }
}
