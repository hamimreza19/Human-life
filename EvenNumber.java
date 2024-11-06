import java.util.Scanner;
public class EvenNumber {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int number;
    System.out.println("Enter the limit : " );
    number = sc.nextInt();
    for (int i = 1; i <= number; i++) {
      if (i % 2 != 0) {
        System.out.print("  " +i++);
      }
    }

  }
}
