import javax.swing.JOptionPane;
public class InputDialog {
  public static void main(String[] args) {
    String f_name = JOptionPane.showInputDialog(null, " Enter your name ", "This is title",
        JOptionPane.QUESTION_MESSAGE);
    String l_name = JOptionPane.showInputDialog("Enter your last name");
    String name = f_name +" " + l_name;

    JOptionPane.showMessageDialog(null, "Your full name is " + name);
    int choice = JOptionPane.showConfirmDialog(null,"Do you want to quit this program?", "Quit Program", JOptionPane.YES_NO_OPTION);
    if(choice==JOptionPane.YES_OPTION){
      System.exit(0);
    }
    else{
      System.out.println("You choose no option");
    }
  }
}
