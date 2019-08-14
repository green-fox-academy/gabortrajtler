package com.greenfox.tgabor.dependency_injection.services;

import org.springframework.stereotype.Service;
import java.util.ArrayList;
import java.util.Random;

@Service
public class UtilityService {
    private ArrayList<String> colors;
    private Random random;

    public UtilityService() {
        colors = new ArrayList<>();
        colors.add("red");
        colors.add("blue");
        colors.add("lime");
        colors.add("orange");
        colors.add("magenta");
        random = new Random();
    }

    public String randomColor() {
        return colors.get(random.nextInt(colors.size()));
    }

    public String validateEmail(String emailAddr) {
        if (emailAddr.contains("@") && emailAddr.contains(".")) {
            return "green";
        } else {
            return "red";
        }
    }
}