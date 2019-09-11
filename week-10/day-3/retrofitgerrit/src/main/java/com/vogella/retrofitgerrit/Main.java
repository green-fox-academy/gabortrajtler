package com.vogella.retrofitgerrit;

public class Main {

  public static void main(String[] args) {
    // Request{method=GET, url=https://git.eclipse.org/r/changes/?q=status:open, tag=null}
    Controller controller = new Controller();
    controller.start();
  }
}
