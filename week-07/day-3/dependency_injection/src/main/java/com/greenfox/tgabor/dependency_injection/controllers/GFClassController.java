package com.greenfox.tgabor.dependency_injection.controllers;

import com.greenfox.tgabor.dependency_injection.services.StudentService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;

// # Greenfox Class App

@Controller
public class GFClassController {
    @GetMapping(value = {"/gfa"})
    public String gfa(){
        return "gfa";
    }

    @GetMapping(value = {"/gfa/list"})
    public String gfaList(Model model, @Autowired StudentService studentService){
        model.addAttribute("students", studentService.findAll());
        return "gfa_list";
    }

    @GetMapping(value = {"/gfa/add"})
    public String getAddStudentForm(){
        return "gfa_add";
    }

    @GetMapping(value = {"/gfa/save"})
    public String addStudent(@RequestParam(name = "name") String studentName,
                             @Autowired StudentService studentService){
        studentService.save(studentName);
        return "redirect:/gfa";
    }
}
