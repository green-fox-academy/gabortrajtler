using Microsoft.AspNetCore.Mvc;
using Microsoft.AspNetCore.Mvc.Rendering;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using TodoApp.Models;
using TodoApp.Models.Dtos;
using TodoApp.Services;

namespace TodoApp.Controllers
{
    public class TodoController : Controller
    {
        private readonly IAssigneeService assigneeService;
        private readonly ITodoService todoService;

        public TodoController(IAssigneeService assigneeService, ITodoService todoService)
        {
            this.assigneeService = assigneeService;
            this.todoService = todoService;
        }

        public IEnumerable<SelectListItem> GetAssignees()
        {
            return assigneeService.FindAssignees.Select(a =>
                              new SelectListItem
                              {
                                  Value = a.AssigneeId.ToString(),
                                  Text = a.Name
                              }).ToList();
        }

        [HttpGet("/Todo/Add")]
        public IActionResult RenderAdd()
        {
            var model = new AssigneeView
            {
                Names = GetAssignees()
            };
            return View("Add", model);
        }

        [HttpPost("/Todo/Add")]
        public IActionResult Add(AddTodoDTO addTodoDTO)
        {
            todoService.AddTodo(addTodoDTO);
            return Redirect("/");
        }

        [HttpPost("/Todo/Delete")]
        public IActionResult Delete(long id)
        {
            todoService.DeleteTodo(id);
            return Redirect("/");
        }
    }
}
