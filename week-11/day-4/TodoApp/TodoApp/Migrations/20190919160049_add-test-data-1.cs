using Microsoft.EntityFrameworkCore.Migrations;

namespace TodoApp.Migrations
{
    public partial class addtestdata1 : Migration
    {
        protected override void Up(MigrationBuilder migrationBuilder)
        {
            migrationBuilder.InsertData(
                table: "Assignees",
                columns: new[] { "AssigneeId", "Email", "Name" },
                values: new object[] { 1L, "red.fox.tester@greenfox.hu", "Red Fox" });

            migrationBuilder.InsertData(
                table: "Assignees",
                columns: new[] { "AssigneeId", "Email", "Name" },
                values: new object[] { 2L, "blue.fox.tester@greenfox.hu", "Blue Fox" });

            migrationBuilder.InsertData(
                table: "Todos",
                columns: new[] { "TodoId", "AssigneeId", "Description", "Done", "Title" },
                values: new object[] { 1L, 1L, "You can create new Todos in the menu!", false, "Create your first Todo!" });

            migrationBuilder.InsertData(
                table: "Todos",
                columns: new[] { "TodoId", "AssigneeId", "Description", "Done", "Title" },
                values: new object[] { 2L, 1L, "Use the built-in OnGet() method of the Razor page", false, "Refactor Assignee select-list when adding Todo" });
        }

        protected override void Down(MigrationBuilder migrationBuilder)
        {
            migrationBuilder.DeleteData(
                table: "Assignees",
                keyColumn: "AssigneeId",
                keyValue: 2L);

            migrationBuilder.DeleteData(
                table: "Todos",
                keyColumn: "TodoId",
                keyValue: 1L);

            migrationBuilder.DeleteData(
                table: "Todos",
                keyColumn: "TodoId",
                keyValue: 2L);

            migrationBuilder.DeleteData(
                table: "Assignees",
                keyColumn: "AssigneeId",
                keyValue: 1L);
        }
    }
}
