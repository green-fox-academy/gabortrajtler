package com.greenfox.tgabor.bank_of_symba.models;

public class BankAccount {
    String name;
    int balance;
    String animalType;
    boolean kingStatus;
    String side;

    public BankAccount(String name, int balance, String animalType, String side) {
        this.name = name;
        this.balance = balance;
        this.animalType = animalType;
        this.kingStatus = false;
        this.side = side;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getBalance() {
        return balance;
    }

    public void setBalance(int balance) {
        this.balance = balance;
    }

    public String getAnimalType() {
        return animalType;
    }

    public void setAnimalType(String animalType) {
        this.animalType = animalType;
    }

    public boolean getKingStatus() {
        return kingStatus;
    }

    public void setKingStatus(boolean kingStatus) {
        this.kingStatus = kingStatus;
    }

    public String getSide() {
        return side;
    }

    public void setSide(String side) {
        this.side = side;
    }
}
