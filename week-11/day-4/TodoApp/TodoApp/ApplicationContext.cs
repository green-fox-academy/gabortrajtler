using Microsoft.AspNetCore.Identity.EntityFrameworkCore;
using Microsoft.EntityFrameworkCore;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using TodoApp.Models;
using TodoApp.Models.Identity;

namespace TodoApp
{
    public class ApplicationContext : IdentityDbContext<AppUser, AppRole, int>
    {
        public ApplicationContext(DbContextOptions<ApplicationContext> options) : base(options)
        {
        }

        public DbSet<Todo> Todos { get; set; }
        public DbSet<Assignee> Assignees { get; set; }
        protected override void OnModelCreating(ModelBuilder builder)
        {
            base.OnModelCreating(builder);

            #region Assignees for test
            var assignee1 = new Assignee()
            {
                AssigneeId = 1,
                Email = "red.fox.tester@greenfox.hu",
                Name = "Red Fox"
            };

            var assignee2 = new Assignee()
            {
                AssigneeId = 2,
                Email = "blue.fox.tester@greenfox.hu",
                Name = "Blue Fox"
            };

            builder.Entity<Assignee>().HasData(assignee1);
            builder.Entity<Assignee>().HasData(assignee2);
            #endregion

            #region Todos for test
            var todo1 = new Todo()
            {
                AssigneeId = 1,
                Description = "You can create new Todos in the menu!",
                Title = "Create your first Todo!",
                TodoId = 1,
                Done = false
            };

            var todo2 = new Todo()
            {
                AssigneeId = 1,
                Description = "Use the built-in OnGet() method of the Razor page",
                Title = "Refactor Assignee select-list when adding Todo",
                TodoId = 2,
                Done = false
            };

            builder.Entity<Todo>().HasData(todo1);
            builder.Entity<Todo>().HasData(todo2);
            #endregion
        }
    }
}
