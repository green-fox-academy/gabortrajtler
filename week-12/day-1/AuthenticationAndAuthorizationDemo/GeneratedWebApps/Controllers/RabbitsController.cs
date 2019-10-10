using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using Microsoft.AspNetCore.Mvc;
using Microsoft.AspNetCore.Mvc.Rendering;
using Microsoft.EntityFrameworkCore;
using GeneratedWebApps.Data;
using GeneratedWebApps.Models;

namespace GeneratedWebApps.Controllers
{
    public class RabbitsController : Controller
    {
        private readonly ApplicationDbContext _context;

        public RabbitsController(ApplicationDbContext context)
        {
            _context = context;
        }

        // GET: Rabbits
        public async Task<IActionResult> Index()
        {
            return View(await _context.Rabbit.ToListAsync());
        }

        // GET: Rabbits/Details/5
        public async Task<IActionResult> Details(int? id)
        {
            if (id == null)
            {
                return NotFound();
            }

            var rabbit = await _context.Rabbit
                .FirstOrDefaultAsync(m => m.RabbitId == id);
            if (rabbit == null)
            {
                return NotFound();
            }

            return View(rabbit);
        }

        // GET: Rabbits/Create
        public IActionResult Create()
        {
            return View();
        }

        // POST: Rabbits/Create
        // To protect from overposting attacks, please enable the specific properties you want to bind to, for 
        // more details see http://go.microsoft.com/fwlink/?LinkId=317598.
        [HttpPost]
        [ValidateAntiForgeryToken]
        public async Task<IActionResult> Create([Bind("RabbitId,Age,Name")] Rabbit rabbit)
        {
            if (ModelState.IsValid)
            {
                _context.Add(rabbit);
                await _context.SaveChangesAsync();
                return RedirectToAction(nameof(Index));
            }
            return View(rabbit);
        }

        // GET: Rabbits/Edit/5
        public async Task<IActionResult> Edit(int? id)
        {
            if (id == null)
            {
                return NotFound();
            }

            var rabbit = await _context.Rabbit.FindAsync(id);
            if (rabbit == null)
            {
                return NotFound();
            }
            return View(rabbit);
        }

        // POST: Rabbits/Edit/5
        // To protect from overposting attacks, please enable the specific properties you want to bind to, for 
        // more details see http://go.microsoft.com/fwlink/?LinkId=317598.
        [HttpPost]
        [ValidateAntiForgeryToken]
        public async Task<IActionResult> Edit(int id, [Bind("RabbitId,Age,Name")] Rabbit rabbit)
        {
            if (id != rabbit.RabbitId)
            {
                return NotFound();
            }

            if (ModelState.IsValid)
            {
                try
                {
                    _context.Update(rabbit);
                    await _context.SaveChangesAsync();
                }
                catch (DbUpdateConcurrencyException)
                {
                    if (!RabbitExists(rabbit.RabbitId))
                    {
                        return NotFound();
                    }
                    else
                    {
                        throw;
                    }
                }
                return RedirectToAction(nameof(Index));
            }
            return View(rabbit);
        }

        // GET: Rabbits/Delete/5
        public async Task<IActionResult> Delete(int? id)
        {
            if (id == null)
            {
                return NotFound();
            }

            var rabbit = await _context.Rabbit
                .FirstOrDefaultAsync(m => m.RabbitId == id);
            if (rabbit == null)
            {
                return NotFound();
            }

            return View(rabbit);
        }

        // POST: Rabbits/Delete/5
        [HttpPost, ActionName("Delete")]
        [ValidateAntiForgeryToken]
        public async Task<IActionResult> DeleteConfirmed(int id)
        {
            var rabbit = await _context.Rabbit.FindAsync(id);
            _context.Rabbit.Remove(rabbit);
            await _context.SaveChangesAsync();
            return RedirectToAction(nameof(Index));
        }

        private bool RabbitExists(int id)
        {
            return _context.Rabbit.Any(e => e.RabbitId == id);
        }
    }
}
