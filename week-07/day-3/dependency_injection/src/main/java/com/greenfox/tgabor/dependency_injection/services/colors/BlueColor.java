package com.greenfox.tgabor.dependency_injection.services.colors;


public class BlueColor implements MyColor {
    @Override
    public void printColor() {
        System.out.println("Blue color talking.");
    }
}
