import org.w3c.dom.ls.LSOutput;

import java.util.*;
import java.util.stream.Collectors;
import java.util.stream.Stream;

public class StreamExercises {
    public static void main(String[] args) {
        StreamExercises streamExercises = new StreamExercises();
        List<Integer> numbers1 = Arrays.asList(1, 3, -2, -4, -7, -3, -8, 12, 19, 6, 9, 10, 14);
        List<Integer> numbers2 = Arrays.asList(3, 9, 2, 8, 6, 5);
        List<Integer> numbers3 = Arrays.asList(5, 9, 1, 2, 3, 7, 5, 6, 7, 3, 7, 6, 8, 5, 4, 9, 6, 2);
        List<String> cities = Arrays.asList("ROME", "LONDON", "NAIROBI", "CALIFORNIA", "ZURICH", "NEW DELHI", "AMSTERDAM", "ABU DHABI", "PARIS");
        List<Character> chars = Arrays.asList('t', 'h', 'i', 's', 'h');
        String text = "Hello Hello THIS WaS haRd";

        streamExercises.printEvenNumbers(numbers1);
        streamExercises.printPositiveSquaredNumbers(numbers1);
        streamExercises.printIfSquaredNumberLT20(numbers2);
        streamExercises.printAverageOddNumbers(numbers1);
        streamExercises.printSumOfOddNumbers(numbers3);
        streamExercises.printUppercaseChars(text);
        streamExercises.printCities(cities, "N");
        streamExercises.printStringFromChars(chars);
        streamExercises.printFrequencyOfChars(text);

        Fox fox1 = new Fox("Foxy", "brown", 12);
        Fox fox2 = new Fox("Deby", "green", 3);
        Fox fox3 = new Fox("Ruby", "white", 13);
        Fox fox4 = new Fox("Nemo", "blue", 4);
        Fox fox5 = new Fox("Hippy", "green", 5);
        List<Fox> foxes = new ArrayList<>(Arrays.asList(fox1, fox2, fox3, fox4));
        foxes.add(fox5);

        streamExercises.printGreenFoxes(foxes);
        streamExercises.printYoungGreenFoxes(foxes);
        streamExercises.printTypesOfFoxes(foxes);

    }

    private void printEvenNumbers(List<Integer> numbers) {
        List<Integer> evenNumbers = numbers.parallelStream()
                .filter(element -> element % 2 == 0)
                .collect(Collectors.toList());
        System.out.println(evenNumbers);
    }

    private void printPositiveSquaredNumbers(List<Integer> numbers) {
        List<Integer> positiveSquaredNumbers = numbers.parallelStream()
                .filter(element -> element >= 0)
                .map(element -> element * element)
                .collect(Collectors.toList());
        System.out.println(positiveSquaredNumbers);
    }

    private void printIfSquaredNumberLT20(List<Integer> numbers) {
        List<Integer> squaredNumbersLT20 = numbers.parallelStream()
                .filter(element -> element * element > 20)
                .collect(Collectors.toList());
        System.out.println(squaredNumbersLT20);
    }

    private void printAverageOddNumbers(List<Integer> numbers) {
        double averageOddNumber = (numbers.parallelStream()
                .filter(element -> element % 2 != 0)
                .mapToDouble(element -> element)
                .average()
                .getAsDouble());
        System.out.println(averageOddNumber);
    }

    private void printSumOfOddNumbers(List<Integer> numbers) {
        int sumOfOddNumbers = (numbers.parallelStream()
                .filter(element -> element % 2 != 0)
                .mapToInt(element -> element)
                .sum());
        System.out.println(sumOfOddNumbers);
    }

    private void printUppercaseChars(String inputText) {
        List<String> uppercaseChars = Arrays.stream(inputText.split(""))
                .filter(c -> Character.isUpperCase(c.charAt(0)))
                .collect(Collectors.toList());
        System.out.println(uppercaseChars);
    }

    private void printCities(List<String> cities, String firstChar) {
        List<String> citiesStartsWithChar = cities.parallelStream()
                .filter(element -> element.startsWith(firstChar))
                .collect(Collectors.toList());
        System.out.println(citiesStartsWithChar);
    }

    private void printStringFromChars(List<Character> chars) {
        String stringFromChars = chars.parallelStream()
                .map(String::valueOf)
                .collect(Collectors.joining());
        System.out.println(stringFromChars);
    }

    private void printFrequencyOfChars(String inputText) {
        System.out.println(Arrays.stream(inputText.split(""))
                .collect(Collectors.groupingBy(element -> element.charAt(0), Collectors.counting())));

        Map<String, Long> frequencyOfChars = Arrays.stream(inputText.split(""))
                .collect(Collectors.groupingBy(element -> element, Collectors.counting()));
        System.out.println(frequencyOfChars);

        Map<Character, List<String>> frequencyOfChars2 =
                Arrays.stream(inputText.split(""))
                        .collect(Collectors.groupingBy(element -> element.charAt(0), Collectors.toList()));
        System.out.println(frequencyOfChars2);

    }

    private void printGreenFoxes(List<Fox> foxes) {
        List<Fox> greenFoxes = foxes.parallelStream()
                .filter(fox -> fox.getColor().equals("green"))
                .collect(Collectors.toList());
        System.out.print("Green foxes: ");
        for (Fox greenFox : greenFoxes) {
            System.out.print(greenFox.getName() + ", ");
        }
        System.out.println();
    }

    private void printYoungGreenFoxes(List<Fox> foxes) {
        List<Fox> greenFoxes = foxes.parallelStream()
                .filter(fox -> fox.getColor().equals("green"))
                .filter(fox -> fox.getAge() < 5)
                .collect(Collectors.toList());
        System.out.print("Young green foxes: ");
        for (Fox greenFox : greenFoxes) {
            System.out.print(greenFox.getName());
        }
        System.out.println();
    }

    private void printTypesOfFoxes(List<Fox> foxes) {
        Map<String, Long> printTypesOfFoxes = foxes.parallelStream()
                .collect(Collectors.groupingBy(Fox::getColor, Collectors.counting()));
        System.out.println(printTypesOfFoxes);
    }


}
