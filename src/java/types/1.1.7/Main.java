public class Main {
  public static void main(String[] args) {
    a();
  }

  public static void a() {
    double t = 9.0;
    while (Math.abs(t - 9.0 / t) > 0.001)
      t = (9.0 / t + t) / 2.0;
    System.out.println(t);
  }
}
