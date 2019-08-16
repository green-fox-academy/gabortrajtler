package com.greenfox.tgabor.foxclub.models.entities;

import javax.persistence.*;
import java.util.ArrayList;
import java.util.List;

@Entity
public class Fox {

    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    private Integer id;
    private String name;
    private String food;
    private String drink;
    @OneToMany(fetch = FetchType.EAGER)
    List<Trick> tricks;

    public Fox() {
        tricks = new ArrayList<>();
    }

    public Fox(String name, String food, String drink) {
        tricks = new ArrayList<>();
        this.name = name;
        this.food = food;
        this.drink = drink;
    }

    public Integer getId() {
        return id;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public List<Trick> getTricks() {
        return tricks;
    }

    public void setTricks(List<Trick> tricks) {
        this.tricks = tricks;
    }

    public String getFood() {
        return food;
    }

    public void setFood(String food) {
        this.food = food;
    }

    public String getDrink() {
        return drink;
    }

    public void setDrink(String drink) {
        this.drink = drink;
    }

    public void addTrick(Trick trick) {tricks.add(trick); }
}
