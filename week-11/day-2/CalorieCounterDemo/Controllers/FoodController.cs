using CalorieCounterDemo.Models;
using Microsoft.AspNetCore.Mvc;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace CalorieCounterDemo.Controllers
{
    public class FoodController : Controller
    {
        private readonly ApplicationContext applicationContext;

        public FoodController(ApplicationContext applicationContext)
        {
            this.applicationContext = applicationContext;
        }

        [HttpGet("/")]
        public IActionResult Index()
        {
            var foods = applicationContext.Foods.ToList();
            return View(foods);
        }

        [HttpPost("/Food/Add")]
        public IActionResult Add(FoodInput foodInput)
        {
            var food = new Food
            {
                Name = foodInput.Name,
                Amount = foodInput.Amount,
            };
            applicationContext.Foods.Add(food);
            applicationContext.SaveChanges();
            return Redirect("/");
        }

        public class FoodInput
        {
            public string Name { get; set; }
            public int Amount { get; set; }
        }

        [HttpPost("/Food/Delete")]
        public IActionResult Delete(long id)
        {
            var food = applicationContext.Foods.SingleOrDefault(f => f.FoodId == id);
            if(food == null)
            {
                return BadRequest();
            }
            applicationContext.Foods.Remove(food);
            applicationContext.SaveChanges();
            return Redirect("/");
        }
    }
}
