package com.greenfox.tgabor.basicwebshop.controllers;

import com.greenfox.tgabor.basicwebshop.models.Shop;
import com.greenfox.tgabor.basicwebshop.models.ShopItem;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.GetMapping;


@Controller
public class WebController {

    Shop shop;

    public WebController() {
        initShop();
    }

    private void initShop () {
        shop = new Shop();
        ShopItem shopItem1 = new ShopItem("Running shoes", "Nike running shoes for every day sport",
                10000, 5);
        ShopItem shopItem2 = new ShopItem("Printer", "HP LaserJet1020 printer",
                30000, 2);
        ShopItem shopItem3 = new ShopItem("Pepsi cole", "0.5l standard coke",
                250, 0);
        ShopItem shopItem4 = new ShopItem("Wokin", "Chicken with fried rice and WOKIN sauce",
                1190, 100);
        ShopItem shopItem5 = new ShopItem("T-shirt", "Size: XL, color: blue",
                3000, 1);
        shop.addItem(shopItem1);
        shop.addItem(shopItem2);
        shop.addItem(shopItem3);
        shop.addItem(shopItem4);
        shop.addItem(shopItem5);
    }

    @GetMapping("/webshop")
    public String webshop(Model model) {
        model.addAttribute("shopItems", shop.getShopItems());
        return "webshop";
    }

    @GetMapping("/only-available")
    public String onlyAvailable(Model model) {
        model.addAttribute("shopItems", shop.getAvailableItems());
        return "webshop";
    }

    @GetMapping("/cheapest-first")
    public String cheapestFirst(Model model) {
        model.addAttribute("shopItems", shop.getShopItemsSorted());
        return "webshop";
    }

    @GetMapping("/contains-nike")
    public String nikeItems(Model model) {
        model.addAttribute("shopItems", shop.getNikeItems());
        return "webshop";
    }

    @GetMapping("/average-stock")
    public String averageStock(Model model) {
        model.addAttribute("statisticsText", "Average stock: " + shop.getAverageStock());
        return "statistics";
    }

    @GetMapping("/most-expensive")
    public String mostExpensive(Model model) {
        model.addAttribute("statisticsText", "Most expensive: " + shop.getMostExpensiveItem());
        return "statistics";
    }



/*    //http://localhost:8080/web/hello?fontSize=25&fontColor=red&name=Gabor
    @RequestMapping("/web/hello")
    public String sayHello(
            Model model,
            @RequestParam(value = "name", required = false, defaultValue = "fellow citizen") String userName,
            @RequestParam(value = "fontSize", required = false, defaultValue = "20") String fontSize,
            @RequestParam(value = "fontColor", required = false, defaultValue = "black") String fontColor) {
        Greeting greeting = new Greeting();
        String[] hellos = greeting.getHellos();
        model.addAttribute("hellos", hellos);
        model.addAttribute("name", userName);
        model.addAttribute("fontSize", fontSize);
        model.addAttribute("fontColor", fontColor);
        return "hello";
    }*/
}
