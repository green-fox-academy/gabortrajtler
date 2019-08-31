import java.util.ArrayList;
import java.util.List;

public class ListIntroduction1 {
  public static void main(String[] args) {
    List<String> names = new ArrayList<>();
    names.add("William");
    System.out.println(names.size());
    ListIntroduction1.printList(names);
    System.out.println(names.isEmpty());
    names.add("John");
    names.add("Amanda");
    ListIntroduction1.printList(names);
    System.out.println(names.get(2));
    names.remove(1);
    ListIntroduction1.printList(names);
    ListIntroduction1.printListReversed(names);
    names.clear();
    ListIntroduction1.printList(names);
  }

  private static void printList(List<String> list) {
    for (int i = 0; i < list.size(); i++) {
      System.out.println(String.valueOf(i) + ": " + list.get(i));
    }
/*    for (String item : list) {
      System.out.println(item);
    }*/
  }

  private static void printListReversed(List list) {
    for (int i = list.size() - 1; i >= 0; --i) {
      System.out.println(list.get(i));
    }
  }

}
