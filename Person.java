package MyFirstProject.src.calculations;

public class Person {
    String name;
    int age;

    void displayInformation1() {
        System.out.println("Name : " + name);
        System.out.println("Age : " + age);
    }
     public static void main(String[] args) {
        Student t1 = new Student();
        t1.name = "Hamim Reza";
        t1.age = 21;
        t1.qualification = "BSC in CSE";
        t1.id = 1311;
        t1.displayInformation3();
    }
}

class Teacher extends Person {
    String qualification;

    void displayInformation2() {
        System.out.println("Name : " + name);
        System.out.println("Age : " + age);
        System.out.println("Qualification : " + qualification);
    }

    
}
class Student extends Teacher{
    int id;
    void displayInformation3(){
        System.out.println("Name : " + name);
        System.out.println("Age : " + age);
        System.out.println("Qualification : " + qualification);
        System.out.println("ID : "+id);
    }
}

