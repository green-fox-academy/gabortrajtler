package com.greenfox.tgabor.bank_of_symba.controllers;

import com.greenfox.tgabor.bank_of_symba.models.BankAccount;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.GetMapping;

import java.util.ArrayList;
import java.util.List;

@Controller
public class BankAccountController {
    private List<BankAccount> accounts = new ArrayList<>();

    public BankAccountController() {
        BankAccount simbaasAccount = new BankAccount("Simba", 2000, "lion", "good");
        accounts.add(simbaasAccount);
        simbaasAccount.setKingStatus(true);
        accounts.add(new BankAccount("Timon", 530, "meerkat", "good"));
        accounts.add(new BankAccount("Pumbaa", 30, "warthog", "good"));
        accounts.add(new BankAccount("Scar", 30000, "lion", "bad"));
        accounts.add(new BankAccount("Zazu", 0, "bird", "good"));
    }

    @GetMapping("/")     // defauls to all context-roots?
    public String index(Model model){
        model.addAttribute("accounts", accounts);
        return "index";
    }

    @GetMapping("/accounts")
    public String showAccounts(Model model){
        model.addAttribute("accounts", accounts);
        return "accounts";
    }

    @GetMapping("/html-test")
    public String htmlTest(Model model){
        String textTest = "This is an <em>HTML</em> text. <b>Enjoy yourself!</b>";
        model.addAttribute("textTest", textTest);
        return "html_test";
    }
}
