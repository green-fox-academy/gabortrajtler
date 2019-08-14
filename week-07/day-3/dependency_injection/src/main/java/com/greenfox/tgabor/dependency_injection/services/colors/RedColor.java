package com.greenfox.tgabor.dependency_injection.services.colors;

import com.greenfox.tgabor.dependency_injection.services.Printer;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

@Service
public class RedColor implements MyColor {

    private Printer printer;

    @Autowired
    public void getPrinter(Printer printer) {
        this.printer = printer;
    }

    @Override
    public void printColor() {
        printer.log("Red, the best color is talking.");
    }
}
