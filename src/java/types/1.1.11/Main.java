public class Main {
  public static void main(String[] args) {
    boolean[][] a = new boolean[][] {
        { true, false, true },
        { false, false, true },
        { true, true, false }
    };

    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        if (a[i][j] == true)
          System.out.print("*");
        else
          System.out.print(" ");
      }
      System.out.println();
    }
  }
}
