using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using TodoApp.Models.Dtos;

namespace TodoApp.Services
{
    public interface ITodoService
    {
        void AddTodo(AddTodoDTO addTodoDTO);
        void DeleteTodo(long id);
    }
}
