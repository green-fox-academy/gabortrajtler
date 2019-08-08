package com.greenfox.tgabor.basicwebshop.models;

import java.util.ArrayList;
import java.util.Comparator;
import java.util.List;
import java.util.OptionalDouble;
import java.util.stream.Collectors;

public class Shop {
    private List<ShopItem> shopItems;

    public Shop() {
        shopItems = new ArrayList<>();
    }

    public void addItem(ShopItem shopItem) {
        shopItems.add(shopItem);
    }

    public List<ShopItem> getShopItems() {
        return shopItems;
    }

    public List<ShopItem> getAvailableItems() {
        return shopItems.parallelStream()
                .filter(item -> item.getQuantityOfStock() > 0)
                .collect(Collectors.toList());
    }

    public List<ShopItem> getShopItemsSorted() {
        return shopItems.parallelStream()
                .sorted(Comparator.comparing(ShopItem::getPrice))
                .collect(Collectors.toList());
    }

    public List<ShopItem> getNikeItems() {
        return shopItems.parallelStream()
                .filter(item -> item.getName().toLowerCase().contains("nike") || item.getDescription().toLowerCase().contains("nike"))
                .collect(Collectors.toList());
    }

    public Double getAverageStock() {
        OptionalDouble opDouble = shopItems.parallelStream()
                .mapToDouble(ShopItem::getQuantityOfStock)
                .average();
        if (opDouble.isPresent()) {
            return opDouble.getAsDouble();
        } else {
            return 0.0;
        }
    }

    public String getMostExpensiveItem() {
        return shopItems.parallelStream()
                .max(Comparator.comparing(ShopItem::getPrice))
                .map(ShopItem::getName)
                .get();
    }
}
