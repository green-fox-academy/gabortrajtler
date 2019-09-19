using Microsoft.AspNetCore.Mvc;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using TodoApp.Models;

namespace TodoApp.Controllers
{
    public class HomeController : Controller
    {
        private readonly ApplicationContext applicationContext;

        public HomeController(ApplicationContext applicationContext)
        {
            this.applicationContext = applicationContext;
        }

        [HttpGet("/")]
        public IActionResult Index()
        {
            List<Todo> todos = applicationContext.Todos.ToList();
            return View(todos);
        }
    }
}
