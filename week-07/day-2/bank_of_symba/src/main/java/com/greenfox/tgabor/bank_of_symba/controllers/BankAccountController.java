package com.greenfox.tgabor.bank_of_symba.controllers;

import com.greenfox.tgabor.bank_of_symba.models.BankAccount;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.ModelAttribute;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestMethod;

import javax.servlet.http.HttpServletRequest;
import java.util.ArrayList;
import java.util.List;

@Controller
public class BankAccountController {
    private List<BankAccount> accounts = new ArrayList<>();

    public BankAccountController() {
        accounts.add(new BankAccount("Simba", 2000, "lion", "good", true));
        accounts.add(new BankAccount("Timon", 530, "meerkat", "good", false));
        accounts.add(new BankAccount("Pumbaa", 30, "warthog", "good", false));
        accounts.add(new BankAccount("Scar", 30000, "lion", "bad", false));
        accounts.add(new BankAccount("Zazu", 0, "bird", "good", false));
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

    @RequestMapping(path = "/raise-balance", method = RequestMethod.GET)
    public String raiseBalanceForm(Model model) {
        model.addAttribute("accounts", accounts );
        return "raise_balance";
    }

    @RequestMapping(path = "/raise-balance", method = RequestMethod.POST)
    public String raiseBalance(final HttpServletRequest req) {      // could be done by @RequestParam also
        Integer accountId = Integer.valueOf(req.getParameter("accountId"));
        if(!accounts.get(accountId).getKingStatus()) {
            accounts.get(accountId).setBalance(accounts.get(accountId).getBalance() + 10);
        } else {
            accounts.get(accountId).setBalance(accounts.get(accountId).getBalance() + 100);
        }
        return "redirect:/accounts";
    }

    @RequestMapping(path = "/add-account", method = RequestMethod.GET)
    public String addAccountForm(Model model, @ModelAttribute(name = "bankAccount") BankAccount bankAccount) {
        model.addAttribute("newAccount", bankAccount );
        return "add_account";
    }

    @RequestMapping(path = "/add-account", method = RequestMethod.POST)
    public String addAccount(@ModelAttribute BankAccount bankAccount) {
        accounts.add(bankAccount);
        return "redirect:/accounts";
    }

    @GetMapping("/html-test")
    public String htmlTest(Model model){
        String textTest = "This is an <em>HTML</em> text. <b>Enjoy yourself!</b>";
        model.addAttribute("textTest", textTest);
        return "html_test";
    }
}
