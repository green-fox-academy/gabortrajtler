using Microsoft.AspNetCore.Mvc;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using TodoApp.Models;
using TodoApp.Services;

namespace TodoApp.Controllers
{
    [Route("api")]
    public class TodoRestController : Controller
    {
        private readonly ITodoService todoService;

        public TodoRestController(ITodoService todoService)
        {
            this.todoService = todoService;
        }

        [HttpGet("todo/readAll")]
        public List<Todo> ReadAll()
        {
            var todos = todoService.FindTodos();
            return todos;
        }
    }
}
