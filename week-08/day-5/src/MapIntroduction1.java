import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class MapIntroduction1 {
  public static void main(String[] args) {
    Map<Integer, Character> chars = new HashMap<>();
    System.out.println(chars.isEmpty());
    chars.put(97, 'a');
    chars.put(98, 'b');
    chars.put(99, 'c');
    chars.put(65, 'A');
    chars.put(66, 'B');
    chars.put(67, 'C');
    MapIntroduction1.printKeys(chars);
    chars.put(68, 'D');
    System.out.println("size: " + chars.size());
    System.out.println(chars.get(99));
    chars.remove(97);
    MapIntroduction1.printKeys(chars);
    System.out.println(chars.containsKey(100));
    chars.clear();
    MapIntroduction1.printKeys(chars);
  }

  private static void printKeys(Map<Integer, Character> chars) {
    for (Map.Entry<Integer, Character> entry : chars.entrySet()) {
      Integer key = entry.getKey();
      //Character value = entry.getValue();
      System.out.println(key);
    }

/*    for (int key : chars.keySet()) {
      System.out.println(key);
    }*/

  }


}
