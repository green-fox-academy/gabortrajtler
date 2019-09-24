using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using Microsoft.AspNetCore.Identity;
using Microsoft.AspNetCore.Mvc;
using TodoApp.Models.Identity;

namespace TodoApp.Controllers
{
    public class AccountController : Controller
    {
        private UserManager<AppUser> UserMgr { get; }
        private SignInManager<AppUser> SignInMgr { get; }

        public AccountController(UserManager<AppUser> userMgr, SignInManager<AppUser> signInMgr)
        {
            UserMgr = userMgr;
            SignInMgr = signInMgr;
        }

        [HttpGet("/register")]
        public async Task<IActionResult> Register()
        {
/*            try
            {
                ViewBag.Message = "User already registered";

                AppUser user = await UserMgr.FindByNameAsync("TestUser");
                if (user == null)
                {
                    user = new AppUser
                    {
                        UserName = "testUser",
                        Email = "TestUser@test.com",
                        FirstName = "John",
                        LastName = "Doe"
                    };

                    IdentityResult result = await UserMgr.CreateAsync(user, "Test_123");
                    ViewBag.Message = "User was created";
                }
            }
            catch (Exception ex)
            {
                ViewBag.Message = ex.Message;
            }*/
            return View();
        }

        [HttpGet("/login")]
        public async Task<IActionResult> Login()
        {
            var result = await SignInMgr.PasswordSignInAsync("testUser", "Test_123", false, false);
            if (result.Succeeded)
            {
                return RedirectToAction("Index", "Home");
            }
            else
            {
                ViewBag.Result = "result is: " + result.ToString();
            }
            return View();
        }

        [HttpGet("/logout")]
        public async Task<IActionResult> Logout()
        {
            await SignInMgr.SignOutAsync();
            return RedirectToAction("Index", "Home");
        }

    }
}