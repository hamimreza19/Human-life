package MyFirstProject.src.calculations;
public class Encapsulation {
  private String name;
  private int weight;
  private double height;

  Encapsulation(int w, double h) {
    weight = w;
    height = h;
  }

  public void setName(String n) {
    name = n;
  }

  public String getName() {
    return name;
  }

  public int getWeight() {
    return weight;
  }
  public double getHeight(){
    return height;
  }
  void BMI(int w, double h){
    double bmi = w/(h*h);
    System.out.println("BMI : "+bmi);
  }
  public static void main(String[] args){
    Encapsulation obj = new Encapsulation(56, 1.75);
    obj.setName("Hamim Reza");
    Encapsulation obj2 = new Encapsulation(65, 1.78);
    obj2.setName("Alex Alin Gomes");
    Encapsulation obj3 = new Encapsulation(60, 1.73);
    obj3.setName("Sabbir Hossain");
    System.out.println("Name : "+obj.getName());
    System.out.println("Weight : "+obj.getWeight());
    System.out.println("Height : "+obj.getHeight());
    obj.BMI(obj.getWeight(), obj.getHeight());
    System.out.println("Name : "+obj2.getName());
    System.out.println("Weight : "+obj2.getWeight());
    System.out.println("Height : "+obj2.getHeight());
    obj.BMI(obj2.getWeight(), obj2.getHeight());
    System.out.println("Name : "+obj3.getName());
    System.out.println("Weight : "+obj3.getWeight());
    System.out.println("Height : "+obj3.getHeight());
    obj.BMI(obj3.getWeight(), obj3.getHeight());
  }
}
