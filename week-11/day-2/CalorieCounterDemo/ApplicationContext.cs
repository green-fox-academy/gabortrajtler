using CalorieCounterDemo.Models;
using Microsoft.EntityFrameworkCore;

namespace CalorieCounterDemo
{
    public class ApplicationContext : DbContext
    {

        public DbSet<Food> Foods { get; set; }

        public ApplicationContext(DbContextOptions options) : base(options)
        {
        }
    }
}
