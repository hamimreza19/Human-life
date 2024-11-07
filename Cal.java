package MyFirstProject.src.calculations;

import MyFirstProject.src.calculations.arethmatic.opt;
import MyFirstProject.src.calculations.arethmatic.Mul;
public class Cal {
  public static void main(String[] args) {
    System.out.println("Successfully compiled in the program.");
    opt op = new opt();
    Mul m = new Mul();
    System.out.println(op.add(53, 2));
    System.out.println(m.multi(5,4));
  }
}
