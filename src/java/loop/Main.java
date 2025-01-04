public class Main {
  public static void main(String[] args) {
    int i = 0;
    while (i < 10) {
      System.out.println(i);
      i++;
    }

    i = 0;
    do {
      System.out.println(i);
      i++;
    } while (i < 10);

    for (i = 0; i < 10; i++) {
      System.out.println(i);
    }
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    for (int j : arr) {
      System.out.println(j);
    }
  }
}
