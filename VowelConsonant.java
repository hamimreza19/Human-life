import java.util.Scanner;
public class VowelConsonant {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter a character : " ) ;
    String sentence = sc.nextLine();
    sentence = sentence.toLowerCase();
    int vowels = 0, consonants = 0;
    for (int i = 0; i < sentence.length(); i++) {
      char ch = sentence.charAt(i);
      if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        vowels++;
      } else if (ch >= 'a' && ch <= 'z') {
        consonants++;
      }
    }
    System.out.println("Number of vowels : " + vowels);
    System.out.println("Number of consonants : "+consonants);

  }
}
