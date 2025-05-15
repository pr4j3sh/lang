public class Main {
  public static void main(String[] args) {
    int n = 4;
    String b = "";

    while (n > 0) {
      int r = n % 2;
      b = r + b;
      n /= 2;
    }
    System.out.println(b);
  }
}
