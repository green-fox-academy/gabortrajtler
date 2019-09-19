using Microsoft.AspNetCore.Mvc;
using TodoApp.Models.Dtos;
using TodoApp.Services;

namespace TodoApp.Controllers
{
    public class AssigneeController : Controller
    {
        private readonly IAssigneeService assigneeService;

        public AssigneeController(IAssigneeService assigneeService)
        {
            this.assigneeService = assigneeService;
        }

        [HttpGet("/Assignee/List")]
        public IActionResult List()
        {
            var model = assigneeService.FindAssignees;
            return View(model);
        }

        [HttpGet("/Assignee/Add")]
        public IActionResult RenderAdd()
        {
            return View("Add");
        }

        [HttpPost("/Assignee/Add")]
        public IActionResult Add(AddAssigneeDTO addAssigneeDTO)
        {
            assigneeService.AddAssignee(addAssigneeDTO);
            return RedirectToAction(nameof(AssigneeController.List),"Assignee");
        }

        [HttpPost("/Assignee/Delete")]
        public IActionResult Delete(long id)
        {
            assigneeService.DeleteAssignee(id);
            return RedirectToAction(nameof(AssigneeController.List),"Assignee");
        }
    }
}
