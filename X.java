package MyFirstProject.src.calculations;

public class X {
  int f;
  int g;
  int h;

  public X() {
    this.f = 0;
    this.g = 0;
    this.h = 0;

  }

  public X(int f, int g, int h) {
    this.f = f;
    this.g = g;
    this.h = h;
  }

  void y() {
    System.out.println("Method y with no parameters");
    System.out.println("f : "+f+ ", g : "+g+", h : " +h);
  }

  void y(int a) {
    System.out.println("Method y with one parameter");
    System.out.println("a = " + a);
  }

  void y(int a, int b) {
    System.out.println("Method y with two parameters");
    System.out.println("a = " + a + " b = " + b);
  }
  public static void main(String[] args) {
    X obj = new X();
    obj.y();
    obj.y(5, 6);
    obj.y();
    X ob2 = new X();
    ob2.y();
  }
}