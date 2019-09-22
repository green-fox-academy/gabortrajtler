using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using TodoApp.Models;
using TodoApp.Models.Dtos;

namespace TodoApp.Services
{
    public class TodoService : ITodoService
    {
        private readonly ApplicationContext appContext;

        public TodoService(ApplicationContext applicationContext)
        {
            this.appContext = applicationContext;
        }

        public void AddTodo(AddTodoDTO inputTodoDTO)
        {
            var newTodo = new Todo
            {
                AssigneeId = inputTodoDTO.AssigneeId,
                Description = inputTodoDTO.Description,
                Done = false,
                Title = inputTodoDTO.Title
            };
            appContext.Todos.Add(newTodo);
            appContext.SaveChanges();
        }

        public void DeleteTodo(long id)
        {
            var todo = appContext.Todos.SingleOrDefault(t => t.TodoId == id);
            if (todo == null)
            {
                throw new Exception("cannot find todo");
            }
            appContext.Todos.Remove(todo);
            appContext.SaveChanges();
        }

        public List<Todo> FindTodos() => appContext.Todos.ToList();
    }
}
