package com.greenfox.tgabor.dependency_injection;

import com.greenfox.tgabor.dependency_injection.services.colors.MyColor;
import com.greenfox.tgabor.dependency_injection.services.Printer;
import com.greenfox.tgabor.dependency_injection.services.SpellChecker;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.boot.CommandLineRunner;
import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;

@SpringBootApplication
public class DependencyInjectionApplication implements CommandLineRunner {

    private SpellChecker checker;
    private Printer printer;
    private MyColor myColor;

    @Autowired  // at constructor
    DependencyInjectionApplication(SpellChecker checker, Printer printer) {
        this.checker = checker;
        this.printer = printer;
    }

    @Autowired // at simple method
    private void autowireMoreServices(MyColor myColor) {
        this.myColor = myColor;
    }

    public static void main(String[] args) {
        SpringApplication.run(DependencyInjectionApplication.class, args);
    }

    @Override
    public void run(String... args) throws Exception {
        checker.checkSpelling();
        printer.log("Hello, this is me you're looking for?");
        myColor.printColor();  // available without calling autowireMoreServices()
    }
}
