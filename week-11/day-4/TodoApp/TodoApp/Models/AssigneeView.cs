using Microsoft.AspNetCore.Mvc.Rendering;
using System;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.Linq;
using System.Threading.Tasks;

namespace TodoApp.Models
{
    public class AssigneeView
    {
        // Display Attribute will appear in the Html.LabelFor
        [Display(Name = "Assignee Name")]
        public long AssigneeId { get; set; }
        public IEnumerable<SelectListItem> Names { get; set; }
    }
}
