package com.greenfox.tgabor.dependency_injection.services.colors;

public class GreenColor implements MyColor {
    @Override
    public void printColor() {
        System.out.println("This is Green color talking.");
    }
}
