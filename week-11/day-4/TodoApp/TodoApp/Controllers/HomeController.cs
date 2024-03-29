﻿using Microsoft.AspNetCore.Mvc;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using TodoApp.Models;
using TodoApp.Services;

namespace TodoApp.Controllers
{
    public class HomeController : Controller
    {

        private readonly ITodoService todoService;

        public HomeController(ITodoService todoService)
        {
            this.todoService = todoService;
        }

        [HttpGet("/")]
        public IActionResult Index()
        {
            var todos = todoService.FindTodos();
            return View(todos);
        }
    }
}
