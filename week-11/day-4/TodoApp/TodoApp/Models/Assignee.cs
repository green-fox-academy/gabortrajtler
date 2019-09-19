using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace TodoApp.Models
{
    public class Assignee
    {
        public long AssigneeId { get; set; }
        public string Name { get; set; }
        public string Email { get; set; }
        public List<Todo> TodoList { get; set; }
    }
}
