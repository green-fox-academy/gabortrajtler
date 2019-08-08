package com.greenfox.tgabor.basicwebshop.models;

public class ShopItem {
    private String name;
    private String description;
    private float price;
    private int quantityOfStock;

    public ShopItem(String name, String description, float price, int quantityOfStock) {
        this.name = name;
        this.description = description;
        this.price = price;
        this.quantityOfStock = quantityOfStock;
    }

    public String getName() {
        return name;
    }

    public String getDescription() {
        return description;
    }

    public float getPrice() {
        return price;
    }

    public int getQuantityOfStock() {
        return quantityOfStock;
    }
}
