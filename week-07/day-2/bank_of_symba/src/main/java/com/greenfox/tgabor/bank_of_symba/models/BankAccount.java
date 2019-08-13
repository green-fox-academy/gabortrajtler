package com.greenfox.tgabor.bank_of_symba.models;

public class BankAccount {
    String name;
    Integer balance;
    String animalType;
    Boolean kingStatus;
    String side;

    public BankAccount(String name, Integer balance, String animalType, String side, Boolean kingStatus) {
        this.name = name;
        this.balance = balance;
        this.animalType = animalType;
        this.kingStatus = kingStatus;
        this.side = side;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public Integer getBalance() {
        return balance;
    }

    public void setBalance(Integer balance) {
        this.balance = balance;
    }

    public String getAnimalType() {
        return animalType;
    }

    public void setAnimalType(String animalType) {
        this.animalType = animalType;
    }

    public Boolean getKingStatus() {
        return kingStatus;
    }

    public void setKingStatus(Boolean kingStatus) {
        this.kingStatus = kingStatus;
    }

    public String getSide() {
        return side;
    }

    public void setSide(String side) {
        this.side = side;
    }
}
