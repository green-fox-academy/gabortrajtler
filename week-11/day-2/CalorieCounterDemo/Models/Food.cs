using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace CalorieCounterDemo.Models
{
    public class Food
    {
        public long FoodId { get; set; }
        public string Name { get; set; }
        public int Amount { get; set; }
    }
}
