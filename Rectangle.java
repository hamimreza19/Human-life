 package MyFirstProject.src.calculations;
public class Rectangle{
  double height;
  double width;
  public Rectangle(){
      this.height = 1.0;
      this.width = 1.0;
  }
  public Rectangle(double r){
      this.height = r;
      this.width = r;
  }
  public Rectangle(double h, double w){
      this.height = h;
      this.width = w;
  }
  void display(){
      System.out.println("No parameter:Rectangle Area is : "+(height*width));
      
  }
  void display(double r){
      System.out.println("Square area is "+(r*r));
      
  }
  void display(double h, double w){
     System.out.println("Rectangle area is "+(height*width));
  }
  public static void main(String[] args){
      Rectangle r = new Rectangle();
      r.display();
      Rectangle r1 = new Rectangle(5.56);
      r1.display(r1.height);
      Rectangle r2 = new Rectangle(3.67,4.0);
      r2.display(r2.height, r2.width);
  }
};