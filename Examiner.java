package MyFirstProject.src.calculations;

public class Examiner {
  String name;
  int id;
  int weight;

  void display() {
    System.out.println("Parent class");
    System.out.println("Name : " + name);
    System.out.println("ID : " + id);
    System.out.println("Weight : " + weight);
  }

  void doit() {
    System.out.println("Doing nothing");
  }

  public static void main(String[] args) {
     Student s = new Student();
    s.name = "Hamim Reza";

    s.id = 1311;
    s.weight = 56;
    s.age = 21;
    s.section = "3C";
    s.display();
    s.doit();
  }
 static class Student extends Examiner {
  int age;
    String section;
    void doit(){
        System.out.println("Doing nothing");
        System.out.println("Doing something");
    }
    void display(){
        super.display();
        System.out.println("Age : "+age);
        System.out.println("Section : "+section);
    }
}

    
}


 